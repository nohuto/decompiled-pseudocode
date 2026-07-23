/*
 * XREFs of iswctype @ 0x1403DC524
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140358910 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1403589B0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x14035C8D0 (RtlIpv4StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1403C6E00 (RtlIpv4StringToAddressExW.c)
 *     iswalnum @ 0x1403DA350 (iswalnum.c)
 *     iswalpha @ 0x1403DA36C (iswalpha.c)
 *     iswdigit @ 0x1403DA390 (iswdigit.c)
 *     iswspace @ 0x1403DA3B0 (iswspace.c)
 *     towlower @ 0x1403DB980 (towlower.c)
 *     _whiteout @ 0x1403E295C (_whiteout.c)
 *     _winput_s @ 0x1403E29B4 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405AFB50 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & (*pwctype)[C];
}
