/*
 * XREFs of sub_180063A0C @ 0x180063A0C
 * Callers:
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180093C04 @ 0x180093C04 (sub_180093C04.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180063A0C(_QWORD *a1)
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
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
    sub_180093C04(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
