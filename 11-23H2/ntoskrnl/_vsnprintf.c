/*
 * XREFs of _vsnprintf @ 0x1403D8AD0
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14020A6B8 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x140374A2C (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403845A8 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D8AF0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
