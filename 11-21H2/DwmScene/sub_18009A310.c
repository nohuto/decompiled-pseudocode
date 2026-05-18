/*
 * XREFs of sub_18009A310 @ 0x18009A310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18009A0CC @ 0x18009A0CC (sub_18009A0CC.c)
 */

__int64 *__fastcall sub_18009A310(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edx
  int v9[4]; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v10[15]; // [rsp+48h] [rbp-39h]
  __m128i si128; // [rsp+84h] [rbp+3h]
  int v12; // [rsp+94h] [rbp+13h]
  int v13; // [rsp+98h] [rbp+17h]
  int v14; // [rsp+9Ch] [rbp+1Bh]
  int v15; // [rsp+A0h] [rbp+1Fh]
  int v16; // [rsp+A4h] [rbp+23h]
  int v17; // [rsp+A8h] [rbp+27h]
  int v18; // [rsp+E8h] [rbp+67h] BYREF
  int v19; // [rsp+F0h] [rbp+6Fh] BYREF

  v19 = a4;
  v18 = a3;
  v10[0] = 0;
  v10[13] = 1;
  v16 = 1;
  v10[4] = 8;
  v10[5] = 12;
  v10[10] = 12;
  v10[9] = 8;
  v10[12] = 2;
  v10[14] = 2;
  v12 = 2;
  v17 = 2;
  v14 = 8;
  v10[6] = 16;
  v10[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
  v10[1] = 4;
  v10[2] = 4;
  v10[3] = 4;
  v10[7] = 4;
  v10[8] = 4;
  v13 = 4;
  v15 = 4;
  if ( (unsigned int)(a6 - 23) > 1 )
    v7 = a3 * v10[a6];
  else
    v7 = ((a3 + 1) & 0xFFFFFFFE) * v10[a6];
  v9[0] = v7;
  sub_18009A0CC(a2, &v18, v9, &v19, &a6, &a5);
  return a2;
}
