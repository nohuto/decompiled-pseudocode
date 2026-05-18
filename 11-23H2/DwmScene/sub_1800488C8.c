/*
 * XREFs of sub_1800488C8 @ 0x1800488C8
 * Callers:
 *     sub_18004745C @ 0x18004745C (sub_18004745C.c)
 *     sub_180047504 @ 0x180047504 (sub_180047504.c)
 *     sub_1800475AC @ 0x1800475AC (sub_1800475AC.c)
 *     sub_180047654 @ 0x180047654 (sub_180047654.c)
 *     sub_1800476F4 @ 0x1800476F4 (sub_1800476F4.c)
 *     sub_18004779C @ 0x18004779C (sub_18004779C.c)
 *     sub_1800562B0 @ 0x1800562B0 (sub_1800562B0.c)
 *     sub_180056764 @ 0x180056764 (sub_180056764.c)
 *     sub_180088DF8 @ 0x180088DF8 (sub_180088DF8.c)
 *     sub_1800896D8 @ 0x1800896D8 (sub_1800896D8.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800D11F0 @ 0x1800D11F0 (sub_1800D11F0.c)
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800488C8(int a1)
{
  _DWORD v2[15]; // [rsp+0h] [rbp-80h]
  __m128i si128; // [rsp+3Ch] [rbp-44h]
  int v4; // [rsp+4Ch] [rbp-34h]
  int v5; // [rsp+50h] [rbp-30h]
  int v6; // [rsp+54h] [rbp-2Ch]
  int v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+5Ch] [rbp-24h]
  int v9; // [rsp+60h] [rbp-20h]

  v2[0] = 0;
  v2[1] = 4;
  v2[2] = 4;
  v2[3] = 4;
  v2[5] = 12;
  v2[6] = 16;
  v2[11] = 16;
  v2[10] = 12;
  v2[4] = 8;
  v2[13] = 1;
  v8 = 1;
  v2[7] = 4;
  v2[8] = 4;
  v2[9] = 8;
  v2[12] = 2;
  v2[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B840);
  v4 = 2;
  v5 = 4;
  v6 = 8;
  v7 = 4;
  v9 = 2;
  return (unsigned int)v2[a1];
}
