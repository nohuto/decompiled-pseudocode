/*
 * XREFs of sub_140391CE4 @ 0x140391CE4
 * Callers:
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 *     sub_140391B9C @ 0x140391B9C (sub_140391B9C.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 *     sub_1405FA244 @ 0x1405FA244 (sub_1405FA244.c)
 * Callees:
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 */

__int64 __fastcall sub_140391CE4(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  signed __int16 v4; // ax
  signed __int16 v5; // tt

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 12) & 1) == 0 )
  {
    _m_prefetchw((const void *)(a2 + 12));
    v4 = *(_WORD *)(a2 + 12);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 12), v4 | 1, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 1) == 0 )
    {
      sub_14037D2EC(*(_QWORD *)(a1 + 800), a2, 2);
      return 1;
    }
  }
  return v2;
}
