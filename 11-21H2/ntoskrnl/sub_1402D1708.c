/*
 * XREFs of sub_1402D1708 @ 0x1402D1708
 * Callers:
 *     sub_1402D1304 @ 0x1402D1304 (sub_1402D1304.c)
 *     sub_14075EA10 @ 0x14075EA10 (sub_14075EA10.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402D1708(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return sub_1402D1760(a1, a2, 0LL, 2LL, v5);
}
