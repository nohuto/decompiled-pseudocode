/*
 * XREFs of sub_18009DFA8 @ 0x18009DFA8
 * Callers:
 *     sub_18009D8E0 @ 0x18009D8E0 (sub_18009D8E0.c)
 * Callees:
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 */

char __fastcall sub_18009DFA8(__int64 a1)
{
  _QWORD *v1; // rcx
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
  v1 = *(_QWORD **)(a1 + 1896);
  v7 = xmmword_1801289A8;
  v6 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD790);
  v9 = 2139095039;
  return sub_18005C210(v1, &si128, 0LL);
}
