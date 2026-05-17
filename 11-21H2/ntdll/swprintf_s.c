/*
 * XREFs of swprintf_s @ 0x18009F610
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800034D0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180003620 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x180075540 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180082570 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x180082640 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1801085F0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18009F640 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
