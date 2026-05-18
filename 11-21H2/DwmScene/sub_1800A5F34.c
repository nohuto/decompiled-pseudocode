/*
 * XREFs of sub_1800A5F34 @ 0x1800A5F34
 * Callers:
 *     sub_18006B7A8 @ 0x18006B7A8 (sub_18006B7A8.c)
 * Callees:
 *     sub_1800A8628 @ 0x1800A8628 (sub_1800A8628.c)
 */

__int64 __fastcall sub_1800A5F34(__int64 a1)
{
  __int64 result; // rax

  sub_1800A8628();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1056964608;
  return result;
}
