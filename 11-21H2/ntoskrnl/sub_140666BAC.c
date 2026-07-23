/*
 * XREFs of sub_140666BAC @ 0x140666BAC
 * Callers:
 *     sub_140663910 @ 0x140663910 (sub_140663910.c)
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_1406657C0 @ 0x1406657C0 (sub_1406657C0.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 *     sub_140965C1C @ 0x140965C1C (sub_140965C1C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140666BAC(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __m128i v4; // xmm1
  __int16 v5; // ax
  unsigned __int64 v6; // [rsp+10h] [rbp-18h]

  result = 0x7FFFFFFF0000LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    v4 = *(__m128i *)result;
    v6 = *(_QWORD *)(result + 16);
    v5 = _mm_cvtsi128_si32(*(__m128i *)result);
    *(_WORD *)a2 = v5;
    *(_WORD *)(a2 + 2) = v5 + 40;
    *(_DWORD *)(a2 + 4) = v4.m128i_i32[1];
    *(_QWORD *)(a2 + 8) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
    *(_QWORD *)(a2 + 16) = HIDWORD(_mm_srli_si128(v4, 8).m128i_u64[0]);
    result = (unsigned int)v6;
    *(_QWORD *)(a2 + 32) = HIDWORD(v6);
    *(_DWORD *)(a2 + 32) = HIDWORD(v6);
    *(_DWORD *)(a2 + 24) = v6;
  }
  else
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    *(_OWORD *)a2 = *(_OWORD *)result;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(result + 32);
  }
  return result;
}
