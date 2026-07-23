/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x140580704
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580880 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14028C530 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036BE70 (KeSetTargetProcessorDpcEx.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405807B0 (WheaFlushETWEventsSelectProcessor.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &Lock) )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C40CD8, CriticalWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&stru_140C40C98, &ProcNumber);
      BYTE1(stru_140C40C98) = 2;
      KiInsertQueueDpc((ULONG_PTR)&stru_140C40C98, 0LL, 0LL, 0LL, 0);
    }
  }
}
