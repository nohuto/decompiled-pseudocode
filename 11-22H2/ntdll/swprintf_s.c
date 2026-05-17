/*
 * XREFs of swprintf_s @ 0x18009A790
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180052F20 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180053070 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18006ECA0 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x18007AE20 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007AEF0 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1801082E0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18009A7C0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
