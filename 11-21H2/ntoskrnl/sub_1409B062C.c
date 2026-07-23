/*
 * XREFs of sub_1409B062C @ 0x1409B062C
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1409B0A5C @ 0x1409B0A5C (sub_1409B0A5C.c)
 * Callees:
 *     sub_140678B4C @ 0x140678B4C (sub_140678B4C.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1409B037C @ 0x1409B037C (sub_1409B037C.c)
 */

void __fastcall sub_1409B062C(__int64 a1)
{
  _QWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+50h] [rbp-18h]
  char v5; // [rsp+54h] [rbp-14h]
  __int16 v6; // [rsp+55h] [rbp-13h]
  char v7; // [rsp+57h] [rbp-11h]

  v6 = 0;
  v7 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFBFFFFFF);
  v2[0] = 0LL;
  v2[1] = 0LL;
  v4 = 0;
  v5 = 0;
  v3 = 0LL;
  sub_1406FF880((_QWORD *)a1, (int)sub_1409B0F50, 0, (int)sub_1409B0F90, (__int64)v2, 5);
  sub_1409B037C(a1, 0x2000000u, 0);
  sub_140678B4C(*(PVOID **)(a1 + 1504), 0);
  *(_QWORD *)(a1 + 1504) = 0LL;
}
