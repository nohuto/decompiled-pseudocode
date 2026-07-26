/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00018A0
 * Callers:
 *     ndisQueueDpcWorkItem @ 0x1C0001398 (ndisQueueDpcWorkItem.c)
 *     ndisInterruptDpc @ 0x1C00014D0 (ndisInterruptDpc.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C0039896 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C0039940 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C00EC278 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0 = DueTime;
    if ( !DueTime.QuadPart )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C00EC270 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C00EC270 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
