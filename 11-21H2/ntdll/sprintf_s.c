/*
 * XREFs of sprintf_s @ 0x18009F080
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x180002B60 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x180002C50 (RtlIpv6AddressToStringA.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800351A0 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv4AddressToStringExA @ 0x1800849F0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv4AddressToStringA @ 0x180084A90 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x180108580 (RtlEthernetAddressToStringA.c)
 * Callees:
 *     vsprintf_s @ 0x18009F0B0 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
