/*
 * XREFs of sub_180093C04 @ 0x180093C04
 * Callers:
 *     sub_180063A0C @ 0x180063A0C (sub_180063A0C.c)
 * Callees:
 *     sub_180097CF0 @ 0x180097CF0 (sub_180097CF0.c)
 */

__int64 __fastcall sub_180093C04(__int64 a1)
{
  __int64 result; // rax

  sub_180097CF0();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 232) = 1;
  return result;
}
