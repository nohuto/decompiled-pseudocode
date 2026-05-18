/*
 * XREFs of sub_1800969E4 @ 0x1800969E4
 * Callers:
 *     sub_180097A30 @ 0x180097A30 (sub_180097A30.c)
 *     sub_180098220 @ 0x180098220 (sub_180098220.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800969E4(__int64 *a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+20h]

  v8 = a1;
  sub_18002B33C(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = (__int64)&Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  v9 = a1 + 15;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v8 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v8, (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v8);
  *(_WORD *)(v6 + 24) = 257;
  a1[15] = v6;
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
