/*
 * XREFs of vsprintf @ 0x1800953A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  return vsprintf_l(Buffer, Format, 0LL, ArgList);
}
