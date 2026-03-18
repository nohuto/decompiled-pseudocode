/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x140580214
 * Callers:
 *     KiMcheckAlternateReturn @ 0x140580390 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x14028C2A0 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x14036BCD0 (KeSetTargetProcessorDpcEx.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x1405802C0 (WheaFlushETWEventsSelectProcessor.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&KiAltContextWorkQueue, ListEntry, &Lock) )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C40D58, CriticalWorkQueue);
    }
    else
    {
      WheaFlushETWEventsSelectProcessor(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&stru_140C40D18, &ProcNumber);
      BYTE1(stru_140C40D18) = 2;
      KiInsertQueueDpc((ULONG_PTR)&stru_140C40D18, 0LL, 0LL, 0LL, 0);
    }
  }
}
