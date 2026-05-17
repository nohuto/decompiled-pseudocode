/*
 * XREFs of _vsnprintf @ 0x180095500
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180006A08 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x180053BFC (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800D9984 (StringCbPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1800DC680 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18009551C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
