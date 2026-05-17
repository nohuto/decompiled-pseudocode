/*
 * XREFs of sprintf_s @ 0x18009A220
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800161B8 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv6AddressToStringA @ 0x180080F50 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x180082C60 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv4AddressToStringA @ 0x180082D00 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x18008A2B0 (RtlIpv6AddressToStringExA.c)
 *     RtlEthernetAddressToStringA @ 0x180108270 (RtlEthernetAddressToStringA.c)
 * Callees:
 *     vsprintf_s @ 0x18009A250 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
