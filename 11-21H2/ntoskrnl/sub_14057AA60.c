/*
 * XREFs of sub_14057AA60 @ 0x14057AA60
 * Callers:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     sub_14057AC2C @ 0x14057AC2C (sub_14057AC2C.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14057AA60(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3 = &v2;
  v5 = 0;
  v2 = 0x7E35C6C7F3DD7277LL * (qword_140D06CC8 ^ __ROR8__(a2 ^ _byteswap_uint64(a1 ^ qword_140D06E28), qword_140D06CC8));
  v4 = 8;
  sub_14035EDE4((__int64)&v3, 1u, 0x40020000u, 0xF6Au, 0x602u);
}
