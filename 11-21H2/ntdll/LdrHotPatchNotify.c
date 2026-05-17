/*
 * XREFs of LdrHotPatchNotify @ 0x1800D9A20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x1800A5920 (NtCreateThreadEx.c)
 *     LdrpLoadPatchImage @ 0x1800DA320 (LdrpLoadPatchImage.c)
 */

__int64 __fastcall LdrHotPatchNotify(void *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int WowTebOffset; // r14d
  bool v6; // si
  unsigned __int64 v7; // rdx
  int LoadedDllByHandle; // ebx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v12; // [rsp+60h] [rbp+7h]
  char *v13; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+7Fh] BYREF

  v14 = 0LL;
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v6 = a1 == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v14, 0LL, a4);
  if ( LoadedDllByHandle < 0 || v6 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)a1 <= 0xFFFFFFFF )
    {
      v13 = 0LL;
      LdrpGetProcedureAddress(qword_18018F338, "LdrHotPatchNotify", 0, &v13);
      LoadedDllByHandle = NtCreateThreadEx();
      if ( LoadedDllByHandle >= 0 )
      {
        Timeout.QuadPart = -100000000LL;
        LoadedDllByHandle = NtWaitForSingleObject(0LL, 0, &Timeout);
        if ( LoadedDllByHandle >= 0 )
        {
          LoadedDllByHandle = ZwQueryInformationThread();
          if ( LoadedDllByHandle >= 0 )
            LoadedDllByHandle = v12;
        }
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpLoadPatchImage(a1);
  }
  if ( v14 )
    LdrpDereferenceModule(v14, v7, v9, v10);
  return (unsigned int)LoadedDllByHandle;
}
