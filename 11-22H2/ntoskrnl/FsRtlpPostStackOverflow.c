/*
 * XREFs of FsRtlpPostStackOverflow @ 0x14053F4E4
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x14053F430 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x14053F450 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInsertQueue @ 0x14031CB50 (KeInsertQueue.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

LONG __fastcall FsRtlpPostStackOverflow(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned __int8 a4)
{
  __int64 v5; // rbx
  _LIST_ENTRY *Pool2; // rax

  v5 = a4;
  Pool2 = (_LIST_ENTRY *)ExAllocatePool2(66LL, 56LL, 1936872262LL);
  if ( !Pool2 )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    Pool2 = (_LIST_ENTRY *)&StackOverflowFallback;
  }
  Pool2[2].Blink = a1;
  Pool2[3].Flink = a2;
  Pool2[2].Flink = a3;
  Pool2->Flink = 0LL;
  Pool2[1].Flink = (struct _LIST_ENTRY *)FsRtlStackOverflowRead;
  Pool2[1].Blink = Pool2;
  return KeInsertQueue((PRKQUEUE)&FsRtlWorkerQueues + v5, Pool2);
}
