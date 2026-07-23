/*
 * XREFs of sub_140409F50 @ 0x140409F50
 * Callers:
 *     sub_140408B40 @ 0x140408B40 (sub_140408B40.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_140401210 @ 0x140401210 (sub_140401210.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 */

unsigned __int64 __fastcall sub_140409F50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _DWORD *v5; // r13
  __int64 *v6; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // r13d
  int v18; // edi
  _DWORD *v20; // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  __int128 v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+78h] [rbp-50h]

  v5 = *(_DWORD **)(a1 + 616);
  v6 = &v25;
  v27 = 0LL;
  v20 = v5;
  v11 = 4LL;
  v26 = 0LL;
  do
  {
    v12 = sub_140400F4C();
    v13 = *(unsigned int *)(a1 + 36);
    a5 += v13;
    *v6++ = v12;
    --v11;
  }
  while ( v11 );
  v14 = (unsigned int)(2 * v13);
  v23 = v13;
  v15 = v14 + a3;
  v16 = v14 + a2;
  sub_1404012B0(v5);
  sub_1404012B0(v5);
  sub_1404011D4(v5, a2 + 32);
  sub_1404011D4(v5, a3 + 32);
  v17 = sub_140400F98();
  sub_1404011D4(v20, v16 + 32);
  sub_1404011D4(v20, v15 + 32);
  sub_1404011D4(v20, v23 + a2 + 32);
  sub_1404011D4(v20, v23 + 32 + a3);
  v18 = sub_140400F98();
  sub_140401210(v20);
  LOBYTE(v16) = a4 | ((-(__int64)a4 & 0x100000000LL) == 0);
  return v17 & (v18 & ((unsigned __int64)-(v16 & 1) >> 32) | ((unsigned __int64)-(v16 & 2) >> 32) & (unsigned int)sub_140400F98());
}
