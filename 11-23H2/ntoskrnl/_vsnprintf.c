/*
 * XREFs of _vsnprintf @ 0x1403D8CB0
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14020A6B8 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x140374BCC (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140384788 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D8CD0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
