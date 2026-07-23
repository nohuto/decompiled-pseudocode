/*
 * XREFs of sub_14025CFA4 @ 0x14025CFA4
 * Callers:
 *     sub_1405E0E20 @ 0x1405E0E20 (sub_1405E0E20.c)
 *     sub_1406792F4 @ 0x1406792F4 (sub_1406792F4.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

char __fastcall sub_14025CFA4(signed __int64 a1, unsigned int a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  _m_prefetchw((const void *)(a1 + 1512));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1512), a2) & 0x22000) != 0 )
    return 0;
  _m_prefetchw(&qword_140C1BEE8);
  v2 = qword_140C1BEE8;
  do
  {
    v3 = v2;
    *(_QWORD *)(a1 + 1160) = v2;
    v2 = _InterlockedCompareExchange64(&qword_140C1BEE8, a1, v2);
  }
  while ( v2 != v3 );
  if ( !v3 )
    ExQueueWorkItem(&stru_140C1BEC0, NormalWorkQueue);
  return 1;
}
