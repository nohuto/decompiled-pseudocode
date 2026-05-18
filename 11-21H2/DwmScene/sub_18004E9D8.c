/*
 * XREFs of sub_18004E9D8 @ 0x18004E9D8
 * Callers:
 *     sub_18004D508 @ 0x18004D508 (sub_18004D508.c)
 *     sub_18004D5E0 @ 0x18004D5E0 (sub_18004D5E0.c)
 *     sub_18004D6B8 @ 0x18004D6B8 (sub_18004D6B8.c)
 *     sub_18004D790 @ 0x18004D790 (sub_18004D790.c)
 *     sub_18004D864 @ 0x18004D864 (sub_18004D864.c)
 *     sub_18004D93C @ 0x18004D93C (sub_18004D93C.c)
 *     sub_18005DBFC @ 0x18005DBFC (sub_18005DBFC.c)
 *     sub_18005E32C @ 0x18005E32C (sub_18005E32C.c)
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E5D28 @ 0x1800E5D28 (sub_1800E5D28.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18004E9D8(int a1, int a2)
{
  _DWORD v3[15]; // [rsp+0h] [rbp-80h]
  __m128i si128; // [rsp+3Ch] [rbp-44h]
  int v5; // [rsp+4Ch] [rbp-34h]
  int v6; // [rsp+50h] [rbp-30h]
  int v7; // [rsp+54h] [rbp-2Ch]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  int v10; // [rsp+60h] [rbp-20h]

  v3[0] = 0;
  v3[13] = 1;
  v9 = 1;
  v3[4] = 8;
  v3[5] = 12;
  v3[10] = 12;
  v3[9] = 8;
  v3[12] = 2;
  v3[14] = 2;
  v5 = 2;
  v10 = 2;
  v7 = 8;
  v3[6] = 16;
  v3[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
  v3[1] = 4;
  v3[2] = 4;
  v3[3] = 4;
  v3[7] = 4;
  v3[8] = 4;
  v6 = 4;
  v8 = 4;
  if ( (unsigned int)(a1 - 23) > 1 )
    return (unsigned int)(a2 * v3[a1]);
  else
    return ((a2 + 1) & 0xFFFFFFFE) * v3[a1];
}
