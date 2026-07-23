/*
 * XREFs of sub_140596A58 @ 0x140596A58
 * Callers:
 *     sub_140264D88 @ 0x140264D88 (sub_140264D88.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 * Callees:
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_14038AA18 @ 0x14038AA18 (sub_14038AA18.c)
 */

void __fastcall sub_140596A58(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 16600);
  if ( v1 && !*(_BYTE *)(v1 + 52) )
  {
    v3 = *(_QWORD *)(a1 + 176);
    if ( sub_1403606EC(v3) )
    {
      sub_14038AA18(1, v3);
      sub_1403606C4(v3);
    }
    v4 = *(_QWORD *)(a1 + 17504);
    if ( *(_QWORD *)(a1 + 17280) - v4 >= 0x10 )
    {
      KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
      v4 = *(_QWORD *)(a1 + 17504);
    }
    if ( v4 >= 0x10 )
      sub_14025C460(a1, -1LL);
    if ( *(_BYTE *)(v1 + 98) )
      KeSetEvent((PRKEVENT)(v1 + 96), 0, 0);
  }
}
