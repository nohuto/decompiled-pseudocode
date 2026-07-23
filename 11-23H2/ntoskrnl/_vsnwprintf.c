/*
 * XREFs of _vsnwprintf @ 0x1403D8B90
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x14022657C (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x140229714 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14022AA1C (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 *     StringCchPrintfW @ 0x140366488 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403CE2A8 (RtlUnicodeStringPrintfEx.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x14040FD68 (RtlWideCharArrayVPrintfWorker.c)
 *     StringVPrintfWorkerW @ 0x140671938 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D8BB0 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
