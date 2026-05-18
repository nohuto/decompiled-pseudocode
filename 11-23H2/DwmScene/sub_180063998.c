/*
 * XREFs of sub_180063998 @ 0x180063998
 * Callers:
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180095C24 @ 0x180095C24 (sub_180095C24.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180063998(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
    sub_180095C24(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
