/*
 * XREFs of sub_14051E90C @ 0x14051E90C
 * Callers:
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 * Callees:
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050F0A0 @ 0x14050F0A0 (sub_14050F0A0.c)
 *     sub_14051E83C @ 0x14051E83C (sub_14051E83C.c)
 */

__int64 __fastcall sub_14051E90C(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned __int16 v6; // dx
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  unsigned __int16 v13; // dx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[25]; // [rsp+48h] [rbp-B8h] BYREF

  v18[0] = 0;
  if ( qword_140C4C540 )
  {
    v4 = sub_14042A5E0(a1, v18);
  }
  else if ( sub_1403B3A6C() )
  {
    v18[0] = v5;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    memset(v20, 0, sizeof(v20));
    v6 = *(_WORD *)(a3 + 440);
    v19[0] = &qword_14041B0D0;
    v19[1] = *(_QWORD *)(a3 + 120);
    v19[2] = 2LL;
    sub_14051E83C(a3 + 224, v6, (__int64)v20);
    sub_14051E83C(v7, *(_WORD *)(a3 + 442), (__int64)&v20[2]);
    sub_14051E83C(v8, *(_WORD *)(a3 + 444), (__int64)&v20[4]);
    sub_14051E83C(v9, *(_WORD *)(a3 + 446), (__int64)&v20[6]);
    sub_14051E83C(v10, *(_WORD *)(a3 + 448), (__int64)&v20[8]);
    sub_14051E83C(v11, *(_WORD *)(a3 + 450), (__int64)&v20[10]);
    sub_14051E83C(v12, *(_WORD *)(a3 + 256), (__int64)&v20[12]);
    v13 = *(_WORD *)(a3 + 258);
    HIWORD(v20[13]) |= 2u;
    sub_14051E83C(v14, v13, (__int64)&v20[14]);
    v15 = *(_QWORD *)(a3 + 248);
    HIWORD(v20[16]) = *(_WORD *)(a3 + 246);
    v20[19] = *(_QWORD *)(v16 + 8);
    HIWORD(v20[18]) = *(_WORD *)(v16 + 6);
    v20[21] = *(_QWORD *)(a3 + 144);
    v20[22] = *(_QWORD *)(a3 + 160);
    v20[23] = *(_QWORD *)(a3 + 168);
    v20[20] = *(_QWORD *)(a3 + 136);
    v20[24] = *(_QWORD *)(a3 + 128);
    v20[17] = v15;
    return (unsigned int)sub_14050F0A0(v18[0], (__int64)v19);
  }
  return (unsigned int)v4;
}
