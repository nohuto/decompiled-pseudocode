/*
 * XREFs of sub_14077C610 @ 0x14077C610
 * Callers:
 *     sub_140654720 @ 0x140654720 (sub_140654720.c)
 *     sub_1406BAA98 @ 0x1406BAA98 (sub_1406BAA98.c)
 *     sub_1406D035C @ 0x1406D035C (sub_1406D035C.c)
 *     sub_1406DB910 @ 0x1406DB910 (sub_1406DB910.c)
 *     sub_1406E3860 @ 0x1406E3860 (sub_1406E3860.c)
 *     sub_140773A70 @ 0x140773A70 (sub_140773A70.c)
 *     sub_140775140 @ 0x140775140 (sub_140775140.c)
 *     sub_1407753A0 @ 0x1407753A0 (sub_1407753A0.c)
 *     sub_1407790D0 @ 0x1407790D0 (sub_1407790D0.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 *     sub_14077BB00 @ 0x14077BB00 (sub_14077BB00.c)
 *     sub_14077C1C4 @ 0x14077C1C4 (sub_14077C1C4.c)
 *     sub_14077C4E0 @ 0x14077C4E0 (sub_14077C4E0.c)
 *     sub_1407884B4 @ 0x1407884B4 (sub_1407884B4.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_140953D38 @ 0x140953D38 (sub_140953D38.c)
 *     sub_140954134 @ 0x140954134 (sub_140954134.c)
 *     sub_140959330 @ 0x140959330 (sub_140959330.c)
 *     sub_140959490 @ 0x140959490 (sub_140959490.c)
 *     sub_1409596B0 @ 0x1409596B0 (sub_1409596B0.c)
 * Callees:
 *     sub_14077C6D4 @ 0x14077C6D4 (sub_14077C6D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077C610(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    Pool2 = ExAllocatePool2(257LL, a3, 538996816LL);
    *a1 = (void *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = sub_14077C6D4(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
