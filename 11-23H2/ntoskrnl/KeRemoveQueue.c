/*
 * XREFs of KeRemoveQueue @ 0x14031CF80
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14038EC20 (ExpWorkerFactoryManagerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1403B3E50 (IopPassiveInterruptRealtimeWorker.c)
 *     FsRtlWorkerThread @ 0x1403B3FD0 (FsRtlWorkerThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x14077EFC0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  EntryArray = 0LL;
  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}
