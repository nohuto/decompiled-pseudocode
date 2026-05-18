/*
 * XREFs of sub_1800A3D14 @ 0x1800A3D14
 * Callers:
 *     sub_1800A3DA0 @ 0x1800A3DA0 (sub_1800A3DA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800A3D14(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  sub_180010910((__int64)(a1 + 27));
  sub_180010910((__int64)(a1 + 25));
  sub_180010910((__int64)(a1 + 23));
  return sub_1800A86F4(a1);
}
