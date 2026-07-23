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

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, int a2, char **a3)
{
  int LoadedDllInternal; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v12; // [rsp+48h] [rbp-B8h]
  _WORD v13[128]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0x1000000;
  *a3 = 0LL;
  v9 = 0;
  v12 = v13;
  v13[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, (unsigned __int16 *)&v11, 0LL, &v9);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v11, a2, (_DWORD)a3, (unsigned int)v10, v9);
    if ( LoadedDllInternal >= 0 && v10[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v11, a2, (_DWORD)a3, (unsigned int)v10, v9);
      LdrpDropLastInProgressCount(v8, v7);
      if ( LoadedDllInternal >= 0 && v10[0] != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v13 != v12 )
    NtdllpFreeStringRoutine(v12);
  return (unsigned int)LoadedDllInternal;
}
