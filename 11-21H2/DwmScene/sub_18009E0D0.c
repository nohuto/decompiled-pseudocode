/*
 * XREFs of sub_18009E0D0 @ 0x18009E0D0
 * Callers:
 *     sub_18009D8E0 @ 0x18009D8E0 (sub_18009D8E0.c)
 *     sub_18009E6BC @ 0x18009E6BC (sub_18009E6BC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

char __fastcall sub_18009E0D0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 *v7; // rax
  int v8; // eax
  bool v9; // zf
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-50h] BYREF
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+4Ch] [rbp-24h]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+60h] [rbp-10h]

  v2 = (__int64 *)sub_18008E70C(a1);
  v3 = sub_180017428(v2, &si128);
  v4 = *v3;
  v5 = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  v12[0] = *(_QWORD *)(a1 + 1816);
  v12[1] = *(_QWORD *)(a1 + 1824);
  *(_QWORD *)(a1 + 1816) = v4;
  *(_QWORD *)(a1 + 1824) = v5;
  sub_180010910((__int64)v12);
  sub_180010910((__int64)&si128);
  v6 = *(_QWORD *)(a1 + 1816);
  v7 = sub_18001DCD4(si128.m128i_i64, (_QWORD *)(a1 + 24), " DepthSampler");
  sub_18002BC44(v6, v7);
  v14 = 0;
  v18 = 0;
  v8 = 3;
  v15 = 0;
  v9 = *(_DWORD *)(a1 + 1944) == 1;
  v19 = 2139095039;
  if ( v9 )
    v8 = 6;
  v10 = *(_QWORD **)(a1 + 1816);
  v17 = xmmword_1801289A8;
  v16 = v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7C0);
  return sub_18005C210(v10, &si128, 0LL);
}
