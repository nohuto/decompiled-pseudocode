/*
 * XREFs of sub_180096410 @ 0x180096410
 * Callers:
 *     sub_180048AA0 @ 0x180048AA0 (sub_180048AA0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180096410(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+38h] [rbp+10h]

  v6 = a1;
  sub_18002B33C(a1, 9, 4);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = (__int64)&Spectre::Engine::RenderState::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  v7 = a1 + 16;
  a1[16] = 0LL;
  a1[17] = 0LL;
  v6 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v6, (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v6);
  *(_WORD *)(v4 + 24) = 257;
  a1[16] = v4;
  return a1;
}
