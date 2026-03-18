/*
 * XREFs of isdigit @ 0x1403DA050
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403CF470 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405AEBC0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405AED00 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405AEED0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405AF330 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x140A70F1C (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140A70F9C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A71464 (MinAsn1DecodeUtcTime.c)
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
