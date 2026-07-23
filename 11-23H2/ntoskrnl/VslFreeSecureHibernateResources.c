/*
 * XREFs of VslFreeSecureHibernateResources @ 0x140942520
 * Callers:
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 37, 0, (__int64)v1);
}
