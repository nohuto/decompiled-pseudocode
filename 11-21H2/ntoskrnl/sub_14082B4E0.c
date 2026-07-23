/*
 * XREFs of sub_14082B4E0 @ 0x14082B4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027FCC4 @ 0x14027FCC4 (sub_14027FCC4.c)
 *     sub_14027FCE4 @ 0x14027FCE4 (sub_14027FCE4.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403C2C58 @ 0x1403C2C58 (sub_1403C2C58.c)
 *     sub_1403C2CA0 @ 0x1403C2CA0 (sub_1403C2CA0.c)
 *     sub_1403C2CB8 @ 0x1403C2CB8 (sub_1403C2CB8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082BA10 @ 0x14082BA10 (sub_14082BA10.c)
 */

__int64 __fastcall sub_14082B4E0(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r14d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  char *v9; // rsi
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v20[192]; // [rsp+30h] [rbp-108h] BYREF

  memset(v20, 0, 0xB8uLL);
  sub_14027FCE4((__int64)v20, 0, 20);
  v6 = sub_14082BA10(0LL, a3);
  v7 = 0LL;
  v8 = sub_14027FCC4(a2);
  v9 = sub_14026DFC0(1);
  v10 = sub_1402CF4F0((__int64)v9);
  v11 = sub_14027FCC4(a1);
  if ( v11 < v8 )
  {
    v12 = v6 | 0xA4000000;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_7;
      if ( (v11 & 0xFFF) == 0 )
        break;
LABEL_5:
      v19 = sub_140317A10(v11);
      v13 = sub_140317A10((unsigned __int64)&v19);
      v14 = sub_1402CBD10(v11, (v13 >> 12) & 0xFFFFFFFFFFLL, v12);
      sub_1403C2C58((__int64)v9, (volatile __int64 *)v11, v14, v15);
      v11 += 8LL;
      if ( v11 >= v8 )
        goto LABEL_6;
    }
    sub_1403C2CA0((__int64)v9, v7);
LABEL_7:
    v7 = sub_140313C70(v11);
    sub_1403C2CB8((__int64)v9, v7, v17, v18);
    goto LABEL_5;
  }
LABEL_6:
  sub_1403C2CA0((__int64)v9, v7);
  sub_1402B0CE0((__int64)v9, v10);
  sub_1402CF280((__int64)v20, a1, (a2 - a1) >> 21, 1);
  sub_14032F1B0((__int64)v20);
  return 0LL;
}
