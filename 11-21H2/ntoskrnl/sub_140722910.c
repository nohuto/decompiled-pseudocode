/*
 * XREFs of sub_140722910 @ 0x140722910
 * Callers:
 *     sub_140722584 @ 0x140722584 (sub_140722584.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 * Callees:
 *     sub_14080BF48 @ 0x14080BF48 (sub_14080BF48.c)
 */

unsigned __int64 __fastcall sub_140722910(__int64 a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rax
  unsigned int v4; // r9d
  unsigned __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 40));
  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0xF) != 0 )
  {
    do
    {
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
      if ( v1 == v2 )
        break;
      v1 = v2;
    }
    while ( (v2 & 0xF) != 0 );
  }
  v3 = v1;
  v4 = v1 & 0xF;
  result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v4 <= 1 )
  {
    if ( result )
      return sub_14080BF48(a1, v4, result);
  }
  return result;
}
