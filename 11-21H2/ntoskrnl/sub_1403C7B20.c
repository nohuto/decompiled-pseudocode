/*
 * XREFs of sub_1403C7B20 @ 0x1403C7B20
 * Callers:
 *     sub_1403C7A8C @ 0x1403C7A8C (sub_1403C7A8C.c)
 *     sub_14053FE50 @ 0x14053FE50 (sub_14053FE50.c)
 *     sub_14053FFB0 @ 0x14053FFB0 (sub_14053FFB0.c)
 *     sub_14053FFD0 @ 0x14053FFD0 (sub_14053FFD0.c)
 *     sub_140833350 @ 0x140833350 (sub_140833350.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408335F0 (CmRegisterMachineHiveLoadedNotification.c)
 *     sub_140923614 @ 0x140923614 (sub_140923614.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

void __fastcall sub_1403C7B20(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    sub_140347810((struct _EX_RUNDOWN_REF *)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, SHIDWORD(WorkItem[1].List.Blink));
  }
}
