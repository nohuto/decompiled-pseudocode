/*
 * XREFs of sub_18005BBE8 @ 0x18005BBE8
 * Callers:
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 *     sub_18005BABC @ 0x18005BABC (sub_18005BABC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18005BBE8(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+38h] [rbp+10h]

  v8 = a1;
  sub_18002B33C(a1, 4, 11);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = (__int64)&Spectre::Engine::Sampler::`vftable';
  v2 = sub_18001D684();
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
    sub_18005BABC(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[14] = v3 + 16;
  a1[15] = v3;
  v9 = a1 + 16;
  a1[16] = 0LL;
  a1[17] = 0LL;
  v8 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v8, (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v8);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v8);
  *(_WORD *)(v6 + 24) = 257;
  a1[16] = v6;
  return a1;
}
