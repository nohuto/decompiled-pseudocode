/*
 * XREFs of islower @ 0x18008F360
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x18007F260 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007F2D0 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x180083A80 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x180108350 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18017E150[v1] & 2;
}
