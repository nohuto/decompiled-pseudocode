/*
 * XREFs of sub_14057C248 @ 0x14057C248
 * Callers:
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     KeSetTargetProcessorDpcEx @ 0x14025ACA0 (KeSetTargetProcessorDpcEx.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14057C2F0 @ 0x14057C2F0 (sub_14057C2F0.c)
 */

void __fastcall sub_14057C248(PLIST_ENTRY ListEntry)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(&stru_140C2A740, ListEntry, &qword_140C2A750) )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140C2A798, CriticalWorkQueue);
    }
    else
    {
      sub_14057C2F0(&ProcNumber);
      KeSetTargetProcessorDpcEx((PKDPC)&stru_140C2A758, &ProcNumber);
      BYTE1(stru_140C2A758) = 2;
      sub_140345190((ULONG_PTR)&stru_140C2A758, 0LL, 0LL, 0LL, 0);
    }
  }
}
