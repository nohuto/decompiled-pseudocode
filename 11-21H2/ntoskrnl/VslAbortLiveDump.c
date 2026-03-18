/*
 * XREFs of VslAbortLiveDump @ 0x14054D9C4
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x14093C2FC (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 60, 0, (__int64)v1);
}
