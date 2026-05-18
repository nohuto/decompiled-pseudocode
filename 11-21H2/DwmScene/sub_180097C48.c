/*
 * XREFs of sub_180097C48 @ 0x180097C48
 * Callers:
 *     sub_180097D60 @ 0x180097D60 (sub_180097D60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18009784C @ 0x18009784C (sub_18009784C.c)
 */

__int64 *sub_180097C48(__int64 a1, __int64 *a2, int a3, int a4, ...)
{
  int v5; // edx
  int v7[4]; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v8[15]; // [rsp+58h] [rbp-41h]
  __m128i si128; // [rsp+94h] [rbp-5h]
  int v10; // [rsp+A4h] [rbp+Bh]
  int v11; // [rsp+A8h] [rbp+Fh]
  int v12; // [rsp+ACh] [rbp+13h]
  int v13; // [rsp+B0h] [rbp+17h]
  int v14; // [rsp+B4h] [rbp+1Bh]
  int v15; // [rsp+B8h] [rbp+1Fh]
  int v16; // [rsp+F8h] [rbp+5Fh] BYREF
  int v17; // [rsp+100h] [rbp+67h] BYREF
  __int64 v18; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va; // [rsp+108h] [rbp+6Fh]
  __int64 v20; // [rsp+110h] [rbp+77h] BYREF
  va_list va1; // [rsp+110h] [rbp+77h]
  va_list va2; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v17 = a4;
  v16 = a3;
  v8[0] = 0;
  v8[13] = 1;
  v14 = 1;
  v8[4] = 8;
  v8[5] = 12;
  v8[10] = 12;
  v8[9] = 8;
  v8[12] = 2;
  v8[14] = 2;
  v10 = 2;
  v15 = 2;
  v12 = 8;
  v8[6] = 16;
  v8[11] = 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
  v8[1] = 4;
  v8[2] = 4;
  v8[3] = 4;
  v8[7] = 4;
  v8[8] = 4;
  v11 = 4;
  v13 = 4;
  if ( (unsigned int)(v20 - 23) > 1 )
    v5 = a3 * v8[(int)v20];
  else
    v5 = ((a3 + 1) & 0xFFFFFFFE) * v8[(int)v20];
  v7[0] = v5;
  sub_18009784C(a2, &v16, v7, &v17, (__int64 *)va1, (__int64 *)va, (int *)va2);
  return a2;
}
