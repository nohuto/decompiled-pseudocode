/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800FAB60
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800FA810 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18004A430 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWriteFile @ 0x1800A0FB0 (NtWriteFile.c)
 *     RtlpRecordBootStatusData @ 0x1800FB038 (RtlpRecordBootStatusData.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 RtlRestoreBootStatusDefaults()
{
  const __m128i *v0; // rax
  __m128i v1; // xmm1
  __int64 v2; // rcx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  int v8; // [rsp+70h] [rbp-90h] BYREF
  int v9; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v10; // [rsp+79h] [rbp-87h]
  char v11; // [rsp+7Bh] [rbp-85h]
  char v12; // [rsp+A1h] [rbp-5Fh]
  char v13; // [rsp+A2h] [rbp-5Eh]
  int v14; // [rsp+128h] [rbp+28h]

  memset_thunk_772440563353939046(&v9, 0, 0xBCuLL);
  v8 = 192;
  RtlGetNtProductType(&v9);
  v14 = 0;
  v0 = (const __m128i *)&v8;
  v1 = 0LL;
  v10 = 286;
  v2 = 12LL;
  v12 = 1;
  v11 = 0;
  do
  {
    v3 = _mm_loadu_si128(v0++);
    v1 = _mm_sub_epi8(v1, v3);
    --v2;
  }
  while ( v2 );
  v4 = _mm_add_epi8(v1, _mm_srli_si128(v1, 8));
  v5 = _mm_add_epi8(v4, _mm_srli_si128(v4, 4));
  v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 2));
  v13 = _mm_cvtsi128_si32(_mm_add_epi8(v6, _mm_srli_si128(v6, 1)));
  RtlpRecordBootStatusData(0LL, &v8, 0LL, 192LL);
  return NtWriteFile();
}
