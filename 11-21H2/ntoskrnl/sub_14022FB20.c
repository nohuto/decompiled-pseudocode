/*
 * XREFs of sub_14022FB20 @ 0x14022FB20
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140366CB0 @ 0x140366CB0 (sub_140366CB0.c)
 *     sub_14036F520 @ 0x14036F520 (sub_14036F520.c)
 *     sub_1405F2F80 @ 0x1405F2F80 (sub_1405F2F80.c)
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022FB20(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
  {
    if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      v2 = 2;
    else
      v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
