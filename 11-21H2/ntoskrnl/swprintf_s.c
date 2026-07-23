/*
 * XREFs of swprintf_s @ 0x1403E5D20
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x14023FDF0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14023FEC0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x140252690 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1402527A0 (RtlIpv6AddressToStringW.c)
 *     sub_1403BE424 @ 0x1403BE424 (sub_1403BE424.c)
 *     RtlEthernetAddressToStringW @ 0x1403DE770 (RtlEthernetAddressToStringW.c)
 *     sub_14064D1D4 @ 0x14064D1D4 (sub_14064D1D4.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_140768894 @ 0x140768894 (sub_140768894.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 *     sub_140772E98 @ 0x140772E98 (sub_140772E98.c)
 *     sub_1407FE3D8 @ 0x1407FE3D8 (sub_1407FE3D8.c)
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 *     sub_1408073EC @ 0x1408073EC (sub_1408073EC.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 *     sub_140834B5C @ 0x140834B5C (sub_140834B5C.c)
 *     sub_140837F88 @ 0x140837F88 (sub_140837F88.c)
 *     sub_14085EDEC @ 0x14085EDEC (sub_14085EDEC.c)
 *     sub_14091D950 @ 0x14091D950 (sub_14091D950.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_14091E3D0 @ 0x14091E3D0 (sub_14091E3D0.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     sub_1409CFFF0 @ 0x1409CFFF0 (sub_1409CFFF0.c)
 *     sub_1409FBB20 @ 0x1409FBB20 (sub_1409FBB20.c)
 *     sub_1409FC108 @ 0x1409FC108 (sub_1409FC108.c)
 *     sub_1409FC5BC @ 0x1409FC5BC (sub_1409FC5BC.c)
 *     sub_1409FC9E0 @ 0x1409FC9E0 (sub_1409FC9E0.c)
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 *     sub_1409FF390 @ 0x1409FF390 (sub_1409FF390.c)
 *     sub_1409FF520 @ 0x1409FF520 (sub_1409FF520.c)
 *     sub_140A1EE84 @ 0x140A1EE84 (sub_140A1EE84.c)
 *     sub_140A215D4 @ 0x140A215D4 (sub_140A215D4.c)
 *     sub_140A22650 @ 0x140A22650 (sub_140A22650.c)
 *     sub_140B4B5E0 @ 0x140B4B5E0 (sub_140B4B5E0.c)
 *     sub_140B53288 @ 0x140B53288 (sub_140B53288.c)
 * Callees:
 *     vswprintf_s @ 0x1403E5D50 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
