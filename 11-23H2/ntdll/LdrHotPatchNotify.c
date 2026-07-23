/*
 * XREFs of LdrHotPatchNotify @ 0x1800D9440
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180022CD0 (LdrpGetProcedureAddress.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002BFFC (LdrpFindLoadedDllByHandle.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x1800A2780 (NtCreateThreadEx.c)
 *     LdrpLoadPatchImage @ 0x1800D9DC0 (LdrpLoadPatchImage.c)
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
