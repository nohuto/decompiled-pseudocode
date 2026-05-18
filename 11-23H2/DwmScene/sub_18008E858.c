/*
 * XREFs of sub_18008E858 @ 0x18008E858
 * Callers:
 *     sub_18008E160 @ 0x18008E160 (sub_18008E160.c)
 * Callees:
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 */

char __fastcall sub_18008E858(__int64 a1)
{
  __int64 v1; // rcx
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+34h] [rbp-34h]
  int v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+50h] [rbp-18h]

  v4 = 0;
  v8 = 0;
  v5 = 0;
  v1 = *(_QWORD *)(a1 + 1896);
  v7 = xmmword_180106A08;
  v6 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7E0);
  v9 = 2139095039;
  return sub_180054950(v1, &si128, 0LL);
}
