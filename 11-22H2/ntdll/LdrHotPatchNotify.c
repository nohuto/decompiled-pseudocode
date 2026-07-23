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

__int64 __fastcall LdrHotPatchNotify(PVOID Argument)
{
  int WowTebOffset; // r14d
  bool v3; // si
  int LoadedDllByHandle; // ebx
  int ThreadInformation[20]; // [rsp+60h] [rbp+7h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+67h] BYREF
  PUSER_THREAD_START_ROUTINE StartRoutine; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+7Fh] BYREF

  ThreadHandle = 0LL;
  BaseAddress = 0LL;
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v3 = Argument == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)Argument, (__int64 *)&BaseAddress, 0LL);
  if ( LoadedDllByHandle < 0 || v3 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)Argument <= 0xFFFFFFFF )
    {
      StartRoutine = 0LL;
      LdrpGetProcedureAddress(
        LdrSystemDllInitBlock.Wow64SharedInformation[6],
        "LdrHotPatchNotify",
        0,
        (char **)&StartRoutine);
      LoadedDllByHandle = NtCreateThreadEx(
                            &ThreadHandle,
                            0x1FFFFFu,
                            0LL,
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            StartRoutine,
                            Argument,
                            0,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
      if ( LoadedDllByHandle >= 0 )
      {
        Timeout.QuadPart = -100000000LL;
        LoadedDllByHandle = NtWaitForSingleObject(ThreadHandle, 0, &Timeout);
        if ( LoadedDllByHandle >= 0 )
        {
          LoadedDllByHandle = ZwQueryInformationThread(
                                ThreadHandle,
                                ThreadBasicInformation,
                                ThreadInformation,
                                0x30u,
                                0LL);
          if ( LoadedDllByHandle >= 0 )
            LoadedDllByHandle = ThreadInformation[0];
        }
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpLoadPatchImage((__int64)Argument);
  }
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  if ( ThreadHandle )
    NtClose(ThreadHandle);
  return (unsigned int)LoadedDllByHandle;
}
