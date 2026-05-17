/*
 * XREFs of _vsnwprintf @ 0x1800955D0
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x1800040C0 (RtlStringVPrintfWorkerW.c)
 *     StringCbPrintfW @ 0x18000ADA4 (StringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x180073F6C (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCchPrintfW @ 0x180077090 (RtlStringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800E4080 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800E9550 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1800955EC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
