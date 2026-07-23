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

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  const __m128i *p_Buffer; // rax
  __m128i v3; // xmm1
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+70h] [rbp-90h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v14; // [rsp+79h] [rbp-87h]
  char v15; // [rsp+7Bh] [rbp-85h]
  char v16; // [rsp+A1h] [rbp-5Fh]
  char v17; // [rsp+A2h] [rbp-5Eh]
  int v18; // [rsp+128h] [rbp+28h]

  memset_thunk_772440563353939046(&NtProductType, 0, 0xBCuLL);
  Buffer = 192;
  RtlGetNtProductType(&NtProductType);
  v18 = 0;
  p_Buffer = (const __m128i *)&Buffer;
  v3 = 0LL;
  v14 = 286;
  v4 = 12LL;
  v16 = 1;
  v15 = 0;
  do
  {
    v5 = _mm_loadu_si128(p_Buffer++);
    v3 = _mm_sub_epi8(v3, v5);
    --v4;
  }
  while ( v4 );
  ByteOffset.QuadPart = 0LL;
  v6 = _mm_add_epi8(v3, _mm_srli_si128(v3, 8));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 4));
  v8 = _mm_add_epi8(v7, _mm_srli_si128(v7, 2));
  v17 = _mm_cvtsi128_si32(_mm_add_epi8(v8, _mm_srli_si128(v8, 1)));
  RtlpRecordBootStatusData(0LL, &Buffer, 0LL, 192LL);
  return NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0xC0u, &ByteOffset, 0LL);
}
