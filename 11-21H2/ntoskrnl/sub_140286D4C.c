/*
 * XREFs of sub_140286D4C @ 0x140286D4C
 * Callers:
 *     sub_14023F8E8 @ 0x14023F8E8 (sub_14023F8E8.c)
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     sub_14036B354 @ 0x14036B354 (sub_14036B354.c)
 *     sub_140597C48 @ 0x140597C48 (sub_140597C48.c)
 * Callees:
 *     sub_14026EF44 @ 0x14026EF44 (sub_14026EF44.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 */

__int64 __fastcall sub_140286D4C(ULONG_PTR a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // ebp

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = sub_140286EC0(a1);
  if ( v4 > 1 && v3 && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      sub_14026EF44(a1);
    *(_WORD *)(a1 + 32) |= 1u;
  }
  return (unsigned int)v4;
}
