/*
 * XREFs of VslRelaxQuotas @ 0x140932A4C
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslRelaxQuotas()
{
  char v0; // cl
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( (_BYTE)KdDebuggerEnabled == v0 )
    return 3221226324LL;
  return VslpEnterIumSecureMode(2u, 53, 0, (__int64)v2);
}
