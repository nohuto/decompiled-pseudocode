/*
 * XREFs of sub_140630100 @ 0x140630100
 * Callers:
 *     <none>
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140630100(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v5 = 0;
  v8 = 0;
  v3 = a1;
  v6 = a2;
  v4 = 8;
  v7 = 8;
  sub_14035EDE4((__int64)&v3, 2u, 0x200000u, a3, 0x401802u);
}
