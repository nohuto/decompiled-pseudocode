/*
 * XREFs of _vsnwprintf @ 0x180090DA0
 * Callers:
 *     RtlStringCchPrintfW @ 0x18000ACEC (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1800543B4 (RtlStringVPrintfWorkerW.c)
 *     StringCbPrintfW @ 0x18005F584 (StringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18006E948 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCbPrintfW @ 0x1800E4048 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800E9784 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180090DBC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
