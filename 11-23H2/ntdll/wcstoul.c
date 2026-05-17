/*
 * XREFs of wcstoul @ 0x180095730
 * Callers:
 *     <none>
 * Callees:
 *     wcstoxlX @ 0x1800954A0 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 1, 0);
}
