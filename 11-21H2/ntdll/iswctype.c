/*
 * XREFs of iswctype @ 0x1800976B0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x180032060 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1800321B0 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x1800323E0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x180032610 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x180097570 (iswalnum.c)
 *     iswalpha @ 0x180097590 (iswalpha.c)
 *     iswdigit @ 0x1800975D0 (iswdigit.c)
 *     iswgraph @ 0x1800975F0 (iswgraph.c)
 *     iswlower @ 0x180097610 (iswlower.c)
 *     iswprint @ 0x180097630 (iswprint.c)
 *     iswspace @ 0x180097650 (iswspace.c)
 *     iswxdigit @ 0x180097670 (iswxdigit.c)
 *     towlower @ 0x1800997F0 (towlower.c)
 *     _whiteout @ 0x1800A22FC (_whiteout.c)
 *     _winput_s @ 0x1800A2354 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA9A8 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1801087A0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
