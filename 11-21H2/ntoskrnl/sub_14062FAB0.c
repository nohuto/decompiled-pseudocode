/*
 * XREFs of sub_14062FAB0 @ 0x14062FAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062FAB0(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  v6 = 0;
  v4 = a1;
  v5 = a2;
  sub_14035EDE4((__int64)&v4, 1u, a3, a4, 0x501903u);
}
