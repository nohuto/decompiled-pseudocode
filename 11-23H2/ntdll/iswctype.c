/*
 * XREFs of iswctype @ 0x180092EB0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18000D9F0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18000DB20 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18000DD40 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18000DF70 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x180092D70 (iswalnum.c)
 *     iswalpha @ 0x180092D90 (iswalpha.c)
 *     iswdigit @ 0x180092DD0 (iswdigit.c)
 *     iswgraph @ 0x180092DF0 (iswgraph.c)
 *     iswlower @ 0x180092E10 (iswlower.c)
 *     iswprint @ 0x180092E30 (iswprint.c)
 *     iswspace @ 0x180092E50 (iswspace.c)
 *     iswxdigit @ 0x180092E70 (iswxdigit.c)
 *     towlower @ 0x1800950B0 (towlower.c)
 *     _whiteout @ 0x18009DC88 (_whiteout.c)
 *     _winput_s @ 0x18009DCE0 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800FB7BC (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1801098C0 (RtlEthernetStringToAddressW.c)
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
