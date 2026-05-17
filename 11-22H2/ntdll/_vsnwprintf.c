/*
 * XREFs of _vsnwprintf @ 0x1800905A0
 * Callers:
 *     RtlStringCchPrintfW @ 0x18000AF0C (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x180054514 (RtlStringVPrintfWorkerW.c)
 *     StringCbPrintfW @ 0x180062414 (StringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18006E948 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCbPrintfW @ 0x1800E2D18 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800E8454 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1800905BC (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
