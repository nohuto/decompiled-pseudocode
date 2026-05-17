/*
 * XREFs of isxdigit @ 0x18008F450
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007F260 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007F2D0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180083A80 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x180083B10 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x180108350 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18017E150[v1] & 0x80;
}
