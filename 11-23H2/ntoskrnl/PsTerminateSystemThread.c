/*
 * XREFs of PsTerminateSystemThread @ 0x140700DB0
 * Callers:
 *     PopIrpWorker @ 0x14028D350 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E810 (InbvRotateGuiBootDisplay.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x1405EABF0 (DifPsTerminateSystemThreadWrapper.c)
 *     EtwpLogger @ 0x140773100 (EtwpLogger.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     IopThreadStart @ 0x140873630 (IopThreadStart.c)
 *     ExpExpirationThread @ 0x1409F7C10 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x14076D980 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  v3 = 1;
  return PspTerminateThreadByPointer(CurrentThread, v1, v3);
}
