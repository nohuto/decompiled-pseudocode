/*
 * XREFs of islower @ 0x18008FB60
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007F8D0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007F940 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180084280 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x180109780 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180181150[v1] & 2;
}
