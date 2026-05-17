/*
 * XREFs of __isascii @ 0x18008F1B0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007F260 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007F2D0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180083A80 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x180083B10 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180108350 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
