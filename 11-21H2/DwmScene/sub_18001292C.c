/*
 * XREFs of sub_18001292C @ 0x18001292C
 * Callers:
 *     sub_180012540 @ 0x180012540 (sub_180012540.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_180018350 @ 0x180018350 (sub_180018350.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_1800688C8 @ 0x1800688C8 (sub_1800688C8.c)
 *     sub_18006B194 @ 0x18006B194 (sub_18006B194.c)
 *     sub_18006BC90 @ 0x18006BC90 (sub_18006BC90.c)
 *     sub_18007C1BC @ 0x18007C1BC (sub_18007C1BC.c)
 *     sub_18007C3B4 @ 0x18007C3B4 (sub_18007C3B4.c)
 *     sub_180088BB8 @ 0x180088BB8 (sub_180088BB8.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 *     sub_1800F2430 @ 0x1800F2430 (sub_1800F2430.c)
 *     sub_1800FB890 @ 0x1800FB890 (sub_1800FB890.c)
 *     sub_1800FBAC4 @ 0x1800FBAC4 (sub_1800FBAC4.c)
 * Callees:
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

_QWORD *__fastcall sub_18001292C(char *a1, char *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  sub_1800126E8((__int64)v3, (__int64)v3);
  return v3;
}
