/*
 * XREFs of LdrHotPatchNotify @ 0x1800D9A90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180022DE0 (LdrpGetProcedureAddress.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     NtWaitForSingleObject @ 0x18009EE70 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x1800A06C0 (NtCreateThreadEx.c)
 *     LdrpLoadPatchImage @ 0x1800DA410 (LdrpLoadPatchImage.c)
 */

__int64 __fastcall LdrHotPatchNotify(void *a1)
{
  int WowTebOffset; // r14d
  bool v3; // si
  int LoadedDllByHandle; // ebx
  int v6; // [rsp+60h] [rbp+7h]
  char *v7; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v8; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+7Fh] BYREF

  v8 = 0LL;
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v3 = a1 == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v8, 0LL);
  if ( LoadedDllByHandle < 0 || v3 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)a1 <= 0xFFFFFFFF )
    {
      v7 = 0LL;
      LdrpGetProcedureAddress(qword_180199348, "LdrHotPatchNotify", 0, &v7);
      LoadedDllByHandle = NtCreateThreadEx();
      if ( LoadedDllByHandle >= 0 )
      {
        Timeout.QuadPart = -100000000LL;
        LoadedDllByHandle = NtWaitForSingleObject(0LL, 0, &Timeout);
        if ( LoadedDllByHandle >= 0 )
        {
          LoadedDllByHandle = ZwQueryInformationThread();
          if ( LoadedDllByHandle >= 0 )
            LoadedDllByHandle = v6;
        }
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpLoadPatchImage(a1);
  }
  if ( v8 )
    LdrpDereferenceModule(v8);
  return (unsigned int)LoadedDllByHandle;
}
