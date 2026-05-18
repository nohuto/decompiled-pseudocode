/*
 * XREFs of sub_18009AB3C @ 0x18009AB3C
 * Callers:
 *     sub_180093E58 @ 0x180093E58 (sub_180093E58.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 *     sub_18009ABF0 @ 0x18009ABF0 (sub_18009ABF0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18009AB3C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+38h] [rbp+10h]

  v6 = a1;
  sub_18002B33C(a1, 12, 0);
  sub_18009ABF0(a1 + 12);
  *a1 = (__int64)&Spectre::Engine::VertexLayout::`vftable';
  v7 = a1 + 18;
  a1[18] = 0LL;
  a1[19] = 0LL;
  v6 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v6, (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v6);
  *(_WORD *)(v4 + 24) = 257;
  a1[18] = v4;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return a1;
}
