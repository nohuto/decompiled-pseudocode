/*
 * XREFs of sub_18002B33C @ 0x18002B33C
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_180048B20 @ 0x180048B20 (sub_180048B20.c)
 *     sub_18004DC88 @ 0x18004DC88 (sub_18004DC88.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_180079E88 @ 0x180079E88 (sub_180079E88.c)
 *     sub_180096410 @ 0x180096410 (sub_180096410.c)
 *     sub_1800969E4 @ 0x1800969E4 (sub_1800969E4.c)
 *     sub_180099338 @ 0x180099338 (sub_180099338.c)
 *     sub_18009AB3C @ 0x18009AB3C (sub_18009AB3C.c)
 *     sub_1800AC908 @ 0x1800AC908 (sub_1800AC908.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B2A0 @ 0x18002B2A0 (sub_18002B2A0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002B33C(__int64 *a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+20h]

  v8 = a1;
  sub_18002B2A0((__int64)a1, a2, a3);
  *a1 = (__int64)&Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  v9 = a1 + 10;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v8 = (__int64 *)sub_180011088(0x28uLL);
  sub_18001DE8C(v8, (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v8);
  *(_WORD *)(v6 + 24) = 257;
  a1[10] = v6;
  return a1;
}
