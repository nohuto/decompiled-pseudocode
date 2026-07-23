/*
 * XREFs of sub_1403E3CE0 @ 0x1403E3CE0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140248F70 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140249010 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x14024C9F0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x14024CA70 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1403E1BB0 (iswalnum.c)
 *     sub_1403E1BCC @ 0x1403E1BCC (sub_1403E1BCC.c)
 *     iswdigit @ 0x1403E1BF0 (iswdigit.c)
 *     iswspace @ 0x1403E1C10 (iswspace.c)
 *     towlower @ 0x1403E3150 (towlower.c)
 *     _whiteout @ 0x1403EA090 (_whiteout.c)
 *     sub_1403EA0E8 @ 0x1403EA0E8 (sub_1403EA0E8.c)
 *     RtlEthernetStringToAddressW @ 0x1405EC120 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403E3CE0(unsigned __int16 a1, __int16 a2)
{
  if ( a1 >= 0x100u )
    return 0LL;
  else
    return (unsigned __int16)(a2 & (*off_140C00008)[a1]);
}
