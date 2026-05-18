/*
 * XREFs of sub_180088448 @ 0x180088448
 * Callers:
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 *     sub_1800BAB48 @ 0x1800BAB48 (sub_1800BAB48.c)
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C2234 @ 0x1800C2234 (sub_1800C2234.c)
 *     sub_1800C2530 @ 0x1800C2530 (sub_1800C2530.c)
 *     sub_1800C2990 @ 0x1800C2990 (sub_1800C2990.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180054AD8 @ 0x180054AD8 (sub_180054AD8.c)
 *     sub_180057F88 @ 0x180057F88 (sub_180057F88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180088448(__int64 *Src, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r10
  int i; // ebx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = Src;
  v13 = 0LL;
  v15 = (__int64 *)sub_180011088(0x40uLL);
  sub_18001DE8C(v15, (__int64 *)&v15);
  sub_18001DE8C((__int64 *)(v8 + 8), (__int64 *)&v15);
  sub_18001DE8C((__int64 *)(v9 + 16), (__int64 *)&v15);
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)&v13 = v10;
  for ( i = 0; i < a4; a3 += 4 )
  {
    if ( ((1LL << i) & a2) != 0 )
      sub_180054AD8((__int64 *)&v13, (__int64)v14, a3);
    ++i;
  }
  sub_180057F88(Src, (__int64 ***)&v13);
  sub_18005470C((__int64 *)&v13, (__int64)&v13);
  return Src;
}
