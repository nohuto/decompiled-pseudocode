/*
 * XREFs of sub_140389CB0 @ 0x140389CB0
 * Callers:
 *     sub_1406527A8 @ 0x1406527A8 (sub_1406527A8.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403A72E4 @ 0x1403A72E4 (sub_1403A72E4.c)
 */

void __fastcall sub_140389CB0(__int64 a1, __int64 a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 56), 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      sub_1403A72E4(a1, 15000LL);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}
