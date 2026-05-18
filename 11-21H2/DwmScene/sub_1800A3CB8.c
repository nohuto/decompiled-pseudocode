/*
 * XREFs of sub_1800A3CB8 @ 0x1800A3CB8
 * Callers:
 *     sub_18006B7B4 @ 0x18006B7B4 (sub_18006B7B4.c)
 * Callees:
 *     sub_1800A8628 @ 0x1800A8628 (sub_1800A8628.c)
 */

__int64 __fastcall sub_1800A3CB8(__int64 a1)
{
  __int64 result; // rax

  sub_1800A8628();
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
