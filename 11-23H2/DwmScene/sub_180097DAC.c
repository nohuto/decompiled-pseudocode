/*
 * XREFs of sub_180097DAC @ 0x180097DAC
 * Callers:
 *     sub_180093C60 @ 0x180093C60 (sub_180093C60.c)
 *     sub_180095CAC @ 0x180095CAC (sub_180095CAC.c)
 *     sub_180097ED0 @ 0x180097ED0 (sub_180097ED0.c)
 *     sub_18009BF90 @ 0x18009BF90 (sub_18009BF90.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 */

void **__fastcall sub_180097DAC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void **result; // rax

  *a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  sub_180013300((__int64)(a1 + 19));
  sub_180011B24((__int64)(a1 + 13));
  v2 = a1[12];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[10];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[8];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[6];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[4];
  if ( v6 )
    sub_180010530(v6);
  v7 = a1[2];
  if ( v7 )
    sub_180010530(v7);
  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
