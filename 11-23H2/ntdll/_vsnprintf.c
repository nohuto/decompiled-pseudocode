/*
 * XREFs of _vsnprintf @ 0x180090CD0
 * Callers:
 *     RtlStringCbPrintfA @ 0x18004A6EC (RtlStringCbPrintfA.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053958 (vDbgPrintExWithPrefixInternal.c)
 *     StringCbPrintfA @ 0x1800D93AC (StringCbPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1800DC550 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x180090CEC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
