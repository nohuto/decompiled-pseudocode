/*
 * XREFs of vsprintf @ 0x1403DB880
 * Callers:
 *     <none>
 * Callees:
 *     _vsprintf_l @ 0x1403DB7E8 (_vsprintf_l.c)
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return vsprintf_l(Dest, Format, 0LL, Args);
}
