/*
 * XREFs of sprintf_s @ 0x18009AA20
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x180015FA8 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv6AddressToStringA @ 0x1800815C0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800832D0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv4AddressToStringA @ 0x180083370 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x18008AAB0 (RtlIpv6AddressToStringExA.c)
 *     RtlGetFeatureToggleConfiguration @ 0x18009F5C0 (RtlGetFeatureToggleConfiguration.c)
 *     RtlEthernetAddressToStringA @ 0x1801096A0 (RtlEthernetAddressToStringA.c)
 * Callees:
 *     vsprintf_s @ 0x18009AA50 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
