/*
 * XREFs of _vsnwprintf @ 0x1403D89B0
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x14022646C (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x140229604 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14022A90C (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14022B720 (RtlStringCchPrintfExW.c)
 *     StringCchPrintfW @ 0x1403662E8 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403CE0C8 (RtlUnicodeStringPrintfEx.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x14040FB88 (RtlWideCharArrayVPrintfWorker.c)
 *     StringVPrintfWorkerW @ 0x1406713E8 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D89D0 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
