/*
 * XREFs of iswctype @ 0x1403DC344
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140358770 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140358810 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressW @ 0x14035C730 (RtlIpv4StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1403C6C20 (RtlIpv4StringToAddressExW.c)
 *     iswalnum @ 0x1403DA170 (iswalnum.c)
 *     iswalpha @ 0x1403DA18C (iswalpha.c)
 *     iswdigit @ 0x1403DA1B0 (iswdigit.c)
 *     iswspace @ 0x1403DA1D0 (iswspace.c)
 *     towlower @ 0x1403DB7A0 (towlower.c)
 *     _whiteout @ 0x1403E277C (_whiteout.c)
 *     _winput_s @ 0x1403E27D4 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1405AF5E0 (RtlEthernetStringToAddressW.c)
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
