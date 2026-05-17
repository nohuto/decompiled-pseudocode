/*
 * XREFs of LdrpFindLoadedDll @ 0x18004F750
 * Callers:
 *     LdrGetDllHandleEx @ 0x180042DE0 (LdrGetDllHandleEx.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18004F834 (LdrpFindLoadedDllInternal.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, int a2, __int64 *a3)
{
  int LoadedDllInternal; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v18; // [rsp+48h] [rbp-B8h]
  _WORD v19[128]; // [rsp+50h] [rbp-B0h] BYREF

  v17 = 0x1000000;
  *a3 = 0LL;
  v15 = 0;
  v18 = v19;
  v19[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, (unsigned __int16 *)&v17, 0LL, &v15);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v17, a2, (_DWORD)a3, (unsigned int)v16, v15);
    if ( LoadedDllInternal >= 0 && v16[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3, v6, v7, v8);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v17, a2, (_DWORD)a3, (unsigned int)v16, v15);
      LdrpDropLastInProgressCount(v11, v10);
      if ( LoadedDllInternal >= 0 && v16[0] != 9 )
      {
        LdrpDereferenceModule(*a3, v12, v13, v14);
        *a3 = 0LL;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v19 != v18 )
    NtdllpFreeStringRoutine((__int64)v18);
  return (unsigned int)LoadedDllInternal;
}
