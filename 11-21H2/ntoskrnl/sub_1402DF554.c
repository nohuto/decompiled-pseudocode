/*
 * XREFs of sub_1402DF554 @ 0x1402DF554
 * Callers:
 *     sub_1406BAA98 @ 0x1406BAA98 (sub_1406BAA98.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_1406D035C @ 0x1406D035C (sub_1406D035C.c)
 *     sub_1406DB388 @ 0x1406DB388 (sub_1406DB388.c)
 *     sub_1406DB910 @ 0x1406DB910 (sub_1406DB910.c)
 *     sub_1406E3860 @ 0x1406E3860 (sub_1406E3860.c)
 *     sub_140773A70 @ 0x140773A70 (sub_140773A70.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_1407753A0 @ 0x1407753A0 (sub_1407753A0.c)
 *     sub_140778F4C @ 0x140778F4C (sub_140778F4C.c)
 *     sub_1407790D0 @ 0x1407790D0 (sub_1407790D0.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_14077C1C4 @ 0x14077C1C4 (sub_14077C1C4.c)
 *     sub_14077C484 @ 0x14077C484 (sub_14077C484.c)
 *     sub_14077C4E0 @ 0x14077C4E0 (sub_14077C4E0.c)
 *     sub_140788300 @ 0x140788300 (sub_140788300.c)
 *     sub_1407884B4 @ 0x1407884B4 (sub_1407884B4.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_140953D38 @ 0x140953D38 (sub_140953D38.c)
 *     sub_140954134 @ 0x140954134 (sub_140954134.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140955EF8 @ 0x140955EF8 (sub_140955EF8.c)
 *     sub_140959330 @ 0x140959330 (sub_140959330.c)
 *     sub_140959490 @ 0x140959490 (sub_140959490.c)
 *     sub_1409596B0 @ 0x1409596B0 (sub_1409596B0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402DF554(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
