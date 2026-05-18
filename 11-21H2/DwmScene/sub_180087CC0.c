/*
 * XREFs of sub_180087CC0 @ 0x180087CC0
 * Callers:
 *     sub_180088100 @ 0x180088100 (sub_180088100.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_1800A8E28 @ 0x1800A8E28 (sub_1800A8E28.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180087CC0(__int64 *a1, unsigned int *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h]

  v8 = a1;
  sub_1800A8E28(a1, *a2);
  *v2 = &Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
  v3 = v2 + 2;
  v9 = v2 + 2;
  v2[2] = 0LL;
  v2[3] = 0LL;
  v8 = (__int64 *)sub_180011088(0x60uLL);
  sub_18001DE8C(v8, (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v8);
  result = sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v8);
  *(_WORD *)(v7 + 24) = 257;
  *v3 = v7;
  return result;
}
