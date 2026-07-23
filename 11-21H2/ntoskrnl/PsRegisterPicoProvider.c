/*
 * XREFs of PsRegisterPicoProvider @ 0x1409B2270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRegisterPicoProvider(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 != 88LL || *a2 != 96LL )
    return 3221225476LL;
  if ( (*(_DWORD *)(a1 + 72) & 0xFFE00000) != 0 || (*(_DWORD *)(a1 + 76) & 0xFFE00000) != 0 )
    return 3221225485LL;
  result = 0LL;
  if ( byte_140C1BDE8 )
    return 3221225865LL;
  unk_140C1BE00 = *(_OWORD *)a1;
  xmmword_140C1BE10 = *(_OWORD *)(a1 + 16);
  xmmword_140C1BE20 = *(_OWORD *)(a1 + 32);
  xmmword_140C1BE30 = *(_OWORD *)(a1 + 48);
  xmmword_140C1BE40 = *(_OWORD *)(a1 + 64);
  qword_140C1BE50 = *(_QWORD *)(a1 + 80);
  qword_140C1BDE0 = _mm_srli_si128((__m128i)xmmword_140C1BE30, 8).m128i_u64[0];
  a2[1] = sub_1409B2390;
  a2[2] = sub_1409B25E0;
  a2[3] = sub_1407F50B0;
  a2[4] = sub_1407F50C0;
  a2[5] = sub_1409B29B0;
  a2[6] = sub_1409B29E0;
  a2[7] = sub_14079F130;
  a2[8] = sub_1409B2ED0;
  a2[9] = sub_1405E1620;
  a2[10] = sub_1406E21F0;
  a2[11] = sub_1409B2A10;
  *a2 = 96LL;
  return result;
}
