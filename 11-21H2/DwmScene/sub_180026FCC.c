/*
 * XREFs of sub_180026FCC @ 0x180026FCC
 * Callers:
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180026FCC(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+38h] [rbp+10h]

  v8 = a1;
  *a1 = (__int64)&Spectre::Engine::RenderDevice::QueryPool::`vftable';
  sub_1800FC230(a1 + 1);
  a1[2] = a2;
  v9 = a1 + 3;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v8 = (__int64 *)sub_180011088(0x40uLL);
  sub_18001DE8C(v8, (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v8);
  *(_WORD *)(v6 + 24) = 257;
  a1[3] = v6;
  return a1;
}
