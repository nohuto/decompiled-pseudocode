/*
 * XREFs of isdigit @ 0x1403E1A90
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14039E7C0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EB6E0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EB820 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405EBA00 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EBE60 (RtlIpv6StringToAddressExA.c)
 *     sub_140A33580 @ 0x140A33580 (sub_140A33580.c)
 *     sub_140A33600 @ 0x140A33600 (sub_140A33600.c)
 *     sub_140A33AD0 @ 0x140A33AD0 (sub_140A33AD0.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 4;
}
