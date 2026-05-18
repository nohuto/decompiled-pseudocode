/*
 * XREFs of sub_18005BB68 @ 0x18005BB68
 * Callers:
 *     sub_18009A41C @ 0x18009A41C (sub_18009A41C.c)
 *     sub_1800EC3B0 @ 0x1800EC3B0 (sub_1800EC3B0.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 *     sub_18005BABC @ 0x18005BABC (sub_18005BABC.c)
 */

_QWORD *__fastcall sub_18005BB68(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  sub_18002B268((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
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
  a1[13] = v3;
  a1[12] = v3 + 16;
  result = a1;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return result;
}
