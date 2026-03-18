/*
 * XREFs of _vsnwprintf @ 0x1C00CE184
 * Callers:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C00061E8 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001F2E4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AEFC4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00B1304 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringCchPrintfW @ 0x1C00BE214 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00CE1A4 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
