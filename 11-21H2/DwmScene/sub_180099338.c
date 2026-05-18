/*
 * XREFs of sub_180099338 @ 0x180099338
 * Callers:
 *     sub_180054480 @ 0x180054480 (sub_180054480.c)
 *     sub_1800544AC @ 0x1800544AC (sub_1800544AC.c)
 *     sub_1800544D8 @ 0x1800544D8 (sub_1800544D8.c)
 *     sub_180054504 @ 0x180054504 (sub_180054504.c)
 *     sub_18005461C @ 0x18005461C (sub_18005461C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180099338(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h]

  v8 = (__int64 *)a1;
  sub_18002B33C((__int64 *)a1, 2, 8);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v9 = a1 + 136;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v8 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v8, (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v8);
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 136) = v6;
  *(_BYTE *)(a1 + 152) = 0;
  sub_18002BCC0(a1, 2, 0);
  return a1;
}
