/*
 * XREFs of sub_1405D9844 @ 0x1405D9844
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D9844(int a1)
{
  int *v1; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+38h] [rbp-20h]
  int v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  if ( (WORD4(xmmword_140D06900) & 0x8000) != 0 )
  {
    v3 = 0;
    v1 = &v4;
    v2 = 4;
    sub_14035EDE4((__int64)&v1, 1u, 0x40008000u, 0x123Bu, 0x602u);
  }
}
