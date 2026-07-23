/*
 * XREFs of sub_14063F5BC @ 0x14063F5BC
 * Callers:
 *     sub_1403C03EC @ 0x1403C03EC (sub_1403C03EC.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14063F5BC(__int64 a1)
{
  unsigned __int16 *v1; // rdx
  signed __int64 v2; // r8

  v1 = (unsigned __int16 *)qword_140D31700[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
  v2 = 0LL;
  if ( (_UNKNOWN *)qword_140D31700[*v1] != (_UNKNOWN *)((char *)&unk_140D3DDC0 + 280 * *v1) )
    v2 = qword_140D31700[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 304), v2, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 280), DelayedWorkQueue);
}
