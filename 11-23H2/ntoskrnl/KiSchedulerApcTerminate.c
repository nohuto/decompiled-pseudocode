/*
 * XREFs of KiSchedulerApcTerminate @ 0x14076D1C0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x140309C38 (KiIsProcessTerminationRequested.c)
 *     PsTerminateProcess @ 0x140683794 (PsTerminateProcess.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  JUMPOUT(0x14076D1F8LL);
}
