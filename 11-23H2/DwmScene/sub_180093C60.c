/*
 * XREFs of sub_180093C60 @ 0x180093C60
 * Callers:
 *     sub_180093D00 @ 0x180093D00 (sub_180093D00.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180093C60(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  v2 = a1[28];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[26];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[24];
  if ( v4 )
    sub_180010530(v4);
  return sub_180097DAC(a1);
}
