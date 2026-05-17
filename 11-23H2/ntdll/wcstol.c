/*
 * XREFs of wcstol @ 0x1800956D0
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x18000DF70 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     wcstoxlX @ 0x1800954A0 (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 0, 0);
}
