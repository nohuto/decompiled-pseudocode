/*
 * XREFs of sub_14099D834 @ 0x14099D834
 * Callers:
 *     sub_14099D500 @ 0x14099D500 (sub_14099D500.c)
 * Callees:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_1402D990C @ 0x1402D990C (sub_1402D990C.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045E84A @ 0x14045E84A (sub_14045E84A.c)
 */

void sub_14099D834()
{
  _DWORD v0[68]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v1[68]; // [rsp+138h] [rbp+30h] BYREF

  memset(&v0[2], 0, 0x100uLL);
  memset(&v1[2], 0, 0x100uLL);
  sub_14045E84A();
  if ( qword_140D068A8 )
  {
    v1[0] = 2097153;
    memset(&v1[1], 0, 0x104uLL);
    sub_1402D990C((unsigned __int16 *)v1);
    v0[0] = 2097153;
    memset(&v0[1], 0, 0x104uLL);
    if ( (unsigned int)sub_1402FEDA0(dword_140D06E40, (char *)v1, v0, 0x20u) )
      sub_140293A88((__int64)v0, (__int64)sub_14045EA10, 0LL, 0LL);
  }
}
