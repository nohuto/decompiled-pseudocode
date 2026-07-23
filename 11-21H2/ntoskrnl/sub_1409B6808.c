/*
 * XREFs of sub_1409B6808 @ 0x1409B6808
 * Callers:
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 */

void __fastcall sub_1409B6808(__int64 a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx

  *(_WORD *)(a1 + 1064) = -535;
  *(_WORD *)(a1 + 1128) = -535;
  v2 = *(_QWORD *)(a1 + 1192);
  if ( v2 )
  {
    sub_14026D048(v2, 1);
    *(_QWORD *)(a1 + 1192) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 1200);
  if ( v3 )
  {
    sub_14026D048(v3, 1);
    *(_QWORD *)(a1 + 1200) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 1224);
  if ( v4 )
  {
    sub_14026D048(v4, 1);
    *(_QWORD *)(a1 + 1224) = 0LL;
  }
}
