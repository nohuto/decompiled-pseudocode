/*
 * XREFs of sub_14099007C @ 0x14099007C
 * Callers:
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 */

__int64 __fastcall sub_14099007C(char a1)
{
  __int64 result; // rax
  BOOL v3; // [rsp+20h] [rbp-38h] BYREF
  GUID v4; // [rsp+28h] [rbp-30h] BYREF
  BOOL v5; // [rsp+38h] [rbp-20h]

  v3 = a1 != 0;
  v5 = v3;
  v4 = stru_14003A6A0;
  sub_140828EBC(0, 20, (__int64)&v4);
  result = sub_1407525EC(&stru_14003A6A0, 4u, &v3);
  byte_140C232D1 = a1;
  return result;
}
