/*
 * XREFs of swprintf_s @ 0x18009AF90
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180052DC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180052F10 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18006ECA0 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B490 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007B560 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x180109710 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18009AFC0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
