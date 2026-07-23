/*
 * XREFs of VslGetSecureSpeculationControlInformation @ 0x140388334
 * Callers:
 *     KeQuerySecureSpeculationInformation @ 0x140574028 (KeQuerySecureSpeculationInformation.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140340618 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslGetSecureSpeculationControlInformation()
{
  int v0; // ecx
  _DWORD v2[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL)
    && VslpSpeculationControlsFlags == v0
    && (int)VslpEnterIumSecureMode(2u, 256, 0, (__int64)v2) >= 0 )
  {
    VslpSpeculationControlsFlags = v2[4];
  }
  return (unsigned int)VslpSpeculationControlsFlags;
}
