/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C003EA26
 * Callers:
 *     ndisQueueDpcWorkItem @ 0x1C003D186 (ndisQueueDpcWorkItem.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C003E616 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C003E930 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C00F5238 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0.QuadPart = qword_1C00F5228;
    if ( !qword_1C00F5228 )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C00F5230 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C00F5230 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
