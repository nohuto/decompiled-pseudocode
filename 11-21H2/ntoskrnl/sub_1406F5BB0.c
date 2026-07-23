/*
 * XREFs of sub_1406F5BB0 @ 0x1406F5BB0
 * Callers:
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 * Callees:
 *     sub_14027FCC4 @ 0x14027FCC4 (sub_14027FCC4.c)
 *     sub_14027FCE4 @ 0x14027FCE4 (sub_14027FCE4.c)
 *     sub_14027FD04 @ 0x14027FD04 (sub_14027FD04.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1406F5BB0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  _DWORD v13[48]; // [rsp+60h] [rbp-F8h] BYREF

  memset(v13, 0, 0xB8uLL);
  v6 = sub_140333AA0(a1);
  sub_14027FCE4((__int64)v13, v6, 20);
  LOBYTE(v13[1]) |= 4u;
  v7 = sub_140313C70(a2);
  v8 = a3 >> 12;
  v9 = 0LL;
  while ( v8 )
  {
    v10 = (_QWORD *)a2;
    v11 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v10 | *v11 )
        break;
      ++v10;
      --v11;
    }
    while ( v10 <= v11 );
    if ( v10 > v11 )
    {
      v12 = sub_14027FCC4(a2);
      if ( v9 != v12 )
      {
        if ( v13[3] )
          sub_14027FD04(a1, (__int64)v13);
        v9 = v12;
      }
      sub_1402CF280((__int64)v13, a2, 1LL, 0);
      if ( v13[3] == v13[2] )
        sub_14027FD04(a1, (__int64)v13);
    }
    v7 += 8LL;
    a2 += 4096LL;
    --v8;
  }
  if ( v13[3] )
    sub_14027FD04(a1, (__int64)v13);
}
