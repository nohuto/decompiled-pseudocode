/*
 * XREFs of __isascii @ 0x18008F9B0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007F8D0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007F940 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180084280 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x180084310 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180109780 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
