/*
 * XREFs of sub_180095C24 @ 0x180095C24
 * Callers:
 *     sub_180063998 @ 0x180063998 (sub_180063998.c)
 * Callees:
 *     sub_180097CF0 @ 0x180097CF0 (sub_180097CF0.c)
 */

__int64 __fastcall sub_180095C24(__int64 a1)
{
  __int64 result; // rax

  sub_180097CF0();
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
