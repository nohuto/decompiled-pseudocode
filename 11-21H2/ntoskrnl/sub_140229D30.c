/*
 * XREFs of sub_140229D30 @ 0x140229D30
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_140229B04 @ 0x140229B04 (sub_140229B04.c)
 *     sub_140229BD8 @ 0x140229BD8 (sub_140229BD8.c)
 *     sub_140229CA0 @ 0x140229CA0 (sub_140229CA0.c)
 *     sub_14028F748 @ 0x14028F748 (sub_14028F748.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     sub_140291010 @ 0x140291010 (sub_140291010.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall sub_140229D30(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[558].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 558, SystemArgument1, 0LL);
    SystemArgument1[558].DeferredContext = (PVOID)1;
  }
  return result;
}
