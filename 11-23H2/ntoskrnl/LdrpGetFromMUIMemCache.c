/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1402F7D08
 * Callers:
 *     LdrpGetRcConfig @ 0x1402F77D8 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F7A6C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1407E1BE4 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1402AFF20 (KeReleaseMutant.c)
 *     RtlRunOnceExecuteOnce @ 0x140757F80 (RtlRunOnceExecuteOnce.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  int v9; // r14d
  PIMAGE_NT_HEADERS v10; // r13
  int i; // r8d
  __int64 v12; // rcx
  ULONG v13; // edx
  struct _KMUTANT *Parameter; // [rsp+40h] [rbp-38h] BYREF
  char v16; // [rsp+98h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v16 = 0;
  if ( (a4 & 0xC) == 0 )
    return 0LL;
  if ( (a4 & 0xFFFFFFF3) != 0 )
    return 0LL;
  v9 = a4 & 4;
  if ( (a4 & 4) != 0 && !a2 )
    return 0LL;
  v10 = RtlImageNtHeader((PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v10 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  Parameter = &MuiMutex;
  RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 1) == DllHandle )
    {
      v12 = (__int64)i << 6;
      if ( *(_DWORD *)((char *)AlternateResourceModules + v12 + 24) != v10->OptionalHeader.CheckSum )
      {
        v16 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)AlternateResourceModules + v12 + 16) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 2);
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v16 = 1;
            v8 = 0LL;
          }
          break;
        }
      }
      else if ( v9 && a2 && *(_WORD *)((char *)AlternateResourceModules + v12) == a2 )
      {
        v8 = *(_DWORD **)((char *)AlternateResourceModules + v12 + 32);
        if ( a3 )
          *a3 = *(_QWORD *)((char *)AlternateResourceModules + v12 + 48);
        break;
      }
    }
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  if ( v16 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v13);
  return v8;
}
