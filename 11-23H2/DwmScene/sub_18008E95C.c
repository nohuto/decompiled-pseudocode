/*
 * XREFs of sub_18008E95C @ 0x18008E95C
 * Callers:
 *     sub_18008E160 @ 0x18008E160 (sub_18008E160.c)
 *     sub_18008ED2C @ 0x18008ED2C (sub_18008ED2C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

char __fastcall sub_18008E95C(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rbx
  char *v6; // rax
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rcx
  __m128i si128; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+30h] [rbp-30h]
  int v13; // [rsp+34h] [rbp-2Ch]
  int v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+3Ch] [rbp-24h]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]

  v2 = sub_18008141C(a1);
  v3 = sub_1800161AC(v2, &si128);
  v4 = (__int64 *)(a1 + 1816);
  sub_180011020((_QWORD *)(a1 + 1816), v3);
  if ( si128.m128i_i64[1] )
    sub_180010530(si128.m128i_i64[1]);
  v5 = *v4;
  v6 = sub_18001C680(si128.m128i_i8, (_QWORD *)(a1 + 24), " DepthSampler");
  sub_180029824(v5, (void **)v6);
  v12 = 0;
  v16 = 0;
  v7 = 3;
  v13 = 0;
  v8 = *(_DWORD *)(a1 + 1944) == 1;
  v17 = 2139095039;
  if ( v8 )
    v7 = 6;
  v9 = *v4;
  v15 = xmmword_180106A08;
  v14 = v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B810);
  return sub_180054950(v9, &si128, 0LL);
}
