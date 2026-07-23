/*
 * XREFs of sub_140A73424 @ 0x140A73424
 * Callers:
 *     sub_140299E94 @ 0x140299E94 (sub_140299E94.c)
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 * Callees:
 *     sub_1402DAB78 @ 0x1402DAB78 (sub_1402DAB78.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A6FF8C @ 0x140A6FF8C (sub_140A6FF8C.c)
 *     sub_140A70244 @ 0x140A70244 (sub_140A70244.c)
 */

__int64 __fastcall sub_140A73424(char *a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[60]; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  do
  {
    sub_1402DAB78(12336, a2, (__int64)v10);
    sub_140A70244((__int64)&v10[8], a1, 152);
    v10[46] = a3 == 0;
    sub_140A6FF8C((__int64)v10, a2);
    LOWORD(v8) = 240;
    *((_QWORD *)&v8 + 1) = v10;
    LOWORD(v9) = 0;
    result = sub_140A6FB80(v6, (__int64)&v8, (__int64)&v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
