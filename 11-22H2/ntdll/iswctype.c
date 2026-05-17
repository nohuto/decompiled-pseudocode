/*
 * XREFs of iswctype @ 0x1800926B0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18000DC00 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18000DD30 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18000DF50 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18000E180 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x180092570 (iswalnum.c)
 *     iswalpha @ 0x180092590 (iswalpha.c)
 *     iswdigit @ 0x1800925D0 (iswdigit.c)
 *     iswgraph @ 0x1800925F0 (iswgraph.c)
 *     iswlower @ 0x180092610 (iswlower.c)
 *     iswprint @ 0x180092630 (iswprint.c)
 *     iswspace @ 0x180092650 (iswspace.c)
 *     iswxdigit @ 0x180092670 (iswxdigit.c)
 *     towlower @ 0x1800948B0 (towlower.c)
 *     _whiteout @ 0x18009D488 (_whiteout.c)
 *     _winput_s @ 0x18009D4E0 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x180108490 (RtlEthernetStringToAddressW.c)
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
