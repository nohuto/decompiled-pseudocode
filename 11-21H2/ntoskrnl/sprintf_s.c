/*
 * XREFs of sprintf_s @ 0x1403E7020
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x140376610 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14039E2C0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1405EB490 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405EB500 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405EB5C0 (RtlIpv6AddressToStringExA.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_14082F3C4 @ 0x14082F3C4 (sub_14082F3C4.c)
 *     sub_140834684 @ 0x140834684 (sub_140834684.c)
 *     sub_140837688 @ 0x140837688 (sub_140837688.c)
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 *     sub_140AA9C94 @ 0x140AA9C94 (sub_140AA9C94.c)
 *     sub_140AAA374 @ 0x140AAA374 (sub_140AAA374.c)
 *     sub_140B182A0 @ 0x140B182A0 (sub_140B182A0.c)
 * Callees:
 *     vsprintf_s @ 0x1403E7050 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
