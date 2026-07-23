/*
 * XREFs of __isascii @ 0x1403E1A70
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14039E7C0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EB6E0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EB820 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405EBA00 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EBE60 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int _C)
{
  return (unsigned int)_C < 0x80;
}
