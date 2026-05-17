/*
 * XREFs of wcstol @ 0x180094ED0
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x18000E180 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     wcstoxlX @ 0x180094CA0 (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 0, 0);
}
