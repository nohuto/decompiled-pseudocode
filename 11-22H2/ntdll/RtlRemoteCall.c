/*
 * XREFs of RtlRemoteCall @ 0x18010BE80
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtWriteVirtualMemory @ 0x18009F530 (NtWriteVirtualMemory.c)
 *     ZwResumeThread @ 0x18009F830 (ZwResumeThread.c)
 *     ZwGetContextThread @ 0x1800A0D00 (ZwGetContextThread.c)
 *     NtSetContextThread @ 0x1800A20E0 (NtSetContextThread.c)
 *     NtSuspendThread @ 0x1800A2760 (NtSuspendThread.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl RtlRemoteCall(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        PVOID CallSite,
        ULONG ArgumentCount,
        PULONG_PTR Arguments,
        BOOLEAN PassContext,
        BOOLEAN AlreadySuspended)
{
  __int64 v7; // rsi
  int v11; // eax
  NTSTATUS result; // eax
  int ContextThread; // r14d
  DWORD64 Rax; // rax
  DWORD64 v15; // r14
  int v16; // r15d
  DWORD64 *p_R12; // rcx
  NTSTATUS v18; // esi
  struct _CONTEXT ThreadContext; // [rsp+30h] [rbp-D0h] BYREF

  v7 = ArgumentCount;
  LOBYTE(v11) = LdrControlFlowGuardEnforced();
  if ( v11 )
    return -1073741822;
  if ( (unsigned int)v7 > 4 )
    return -1073741811;
  if ( AlreadySuspended || (result = NtSuspendThread(ThreadHandle, 0LL), result >= 0) )
  {
    ThreadContext.ContextFlags = 1048587;
    ContextThread = ZwGetContextThread(ThreadHandle, &ThreadContext);
    if ( ContextThread < 0 )
    {
      if ( !AlreadySuspended )
        ZwResumeThread(ThreadHandle, 0LL);
      return ContextThread;
    }
    Rax = ThreadContext.Rax;
    if ( AlreadySuspended )
      Rax = 257LL;
    v15 = ThreadContext.Rsp - 1232;
    ThreadContext.Rax = Rax;
    v16 = NtWriteVirtualMemory(ProcessHandle, (PVOID)(ThreadContext.Rsp - 1232), &ThreadContext, 0x4D0uLL, 0LL);
    if ( v16 < 0 )
    {
      if ( !AlreadySuspended )
        ZwResumeThread(ThreadHandle, 0LL);
      return v16;
    }
    ThreadContext.Rsp = v15;
    if ( PassContext )
    {
      ThreadContext.R11 = v15;
      if ( (_DWORD)v7 )
      {
        p_R12 = &ThreadContext.R12;
LABEL_22:
        memmove(p_R12, Arguments, 8 * v7);
      }
    }
    else if ( (_DWORD)v7 )
    {
      p_R12 = &ThreadContext.R11;
      goto LABEL_22;
    }
    ThreadContext.Rip = (DWORD64)CallSite;
    v18 = NtSetContextThread(ThreadHandle, &ThreadContext);
    if ( !AlreadySuspended )
      ZwResumeThread(ThreadHandle, 0LL);
    return v18;
  }
  return result;
}
