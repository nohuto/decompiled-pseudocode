/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x1405802A4
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580420 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14028C180 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036B680 (KeSetTargetProcessorDpcEx.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x140580350 (WheaFlushETWEventsSelectProcessor.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &Lock) )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C40DD8, CriticalWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&stru_140C40D98, &ProcNumber);
      BYTE1(stru_140C40D98) = 2;
      KiInsertQueueDpc((ULONG_PTR)&stru_140C40D98, 0LL, 0LL, 0LL, 0);
    }
  }
}
