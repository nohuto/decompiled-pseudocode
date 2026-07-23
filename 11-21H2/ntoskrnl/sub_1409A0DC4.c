/*
 * XREFs of sub_1409A0DC4 @ 0x1409A0DC4
 * Callers:
 *     sub_140B52D94 @ 0x140B52D94 (sub_140B52D94.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 sub_1409A0DC4(int a1, __int64 a2, unsigned __int8 a3, ...)
{
  int v4; // [rsp+20h] [rbp-E0h] BYREF
  int v5; // [rsp+24h] [rbp-DCh] BYREF
  int v6; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v7[28]; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+130h] [rbp+30h] BYREF
  __int64 v9; // [rsp+148h] [rbp+48h] BYREF
  va_list va; // [rsp+148h] [rbp+48h]
  __int64 v11; // [rsp+150h] [rbp+50h]
  __int64 v12; // [rsp+158h] [rbp+58h] BYREF
  va_list va1; // [rsp+158h] [rbp+58h]
  __int64 v14; // [rsp+160h] [rbp+60h] BYREF
  va_list va2; // [rsp+160h] [rbp+60h]
  __int64 v16; // [rsp+168h] [rbp+68h] BYREF
  va_list va3; // [rsp+168h] [rbp+68h]
  __int64 v18; // [rsp+170h] [rbp+70h]
  __int64 v19; // [rsp+178h] [rbp+78h] BYREF
  va_list va4; // [rsp+178h] [rbp+78h]
  va_list va5; // [rsp+180h] [rbp+80h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v19 = va_arg(va5, _QWORD);
  v8 = a1;
  v7[2] = a2;
  v7[0] = &v8;
  v7[1] = 4LL;
  v7[4] = a2 + 8;
  v7[6] = a2 + 16;
  v7[8] = a2 + 24;
  v4 = a3;
  v7[10] = &v4;
  va_copy((va_list)&v7[12], va);
  va_copy((va_list)&v7[14], va1);
  va_copy((va_list)&v7[16], va2);
  v5 = (unsigned __int8)v18;
  v7[18] = &v5;
  va_copy((va_list)&v7[20], va4);
  va_copy((va_list)&v7[22], va5);
  va_copy((va_list)&v7[24], va3);
  v6 = (unsigned __int8)v11;
  v7[26] = &v6;
  v7[3] = 8LL;
  v7[5] = 8LL;
  v7[7] = 8LL;
  v7[9] = 8LL;
  v7[11] = 4LL;
  v7[13] = 8LL;
  v7[15] = 4LL;
  v7[17] = 1LL;
  v7[19] = 4LL;
  v7[21] = 4LL;
  v7[23] = 8LL;
  v7[25] = 1LL;
  v7[27] = 4LL;
  return sub_140811238((__int64)qword_14003C0D8, 0xEu, (__int64)v7);
}
