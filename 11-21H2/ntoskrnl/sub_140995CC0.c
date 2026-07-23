/*
 * XREFs of sub_140995CC0 @ 0x140995CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 */

__int64 __fastcall sub_140995CC0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    sub_140995888(a1);
  }
  else if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(a1 + 32) && !*(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
  return 0LL;
}
