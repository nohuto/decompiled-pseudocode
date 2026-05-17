/*
 * XREFs of __isascii @ 0x180094230
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800836B0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180083740 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180085E40 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x180085ED0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180108660 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
