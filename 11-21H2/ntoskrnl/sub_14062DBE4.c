/*
 * XREFs of sub_14062DBE4 @ 0x14062DBE4
 * Callers:
 *     sub_1403DDF0C @ 0x1403DDF0C (sub_1403DDF0C.c)
 *     sub_1405568E4 @ 0x1405568E4 (sub_1405568E4.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062DBE4(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3[1] = a3;
  v4 = v3;
  v6 = 0;
  v3[0] = a2;
  v5 = 16;
  sub_14035EDE4((__int64)&v4, 1u, 0x40800000u, a1, 0x501802u);
}
