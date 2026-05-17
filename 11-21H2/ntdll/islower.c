/*
 * XREFs of islower @ 0x1800943E0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800836B0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180083740 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180085E40 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x180108660 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180174150[v1] & 2;
}
