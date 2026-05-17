/*
 * XREFs of _vsnprintf @ 0x1800904D0
 * Callers:
 *     RtlStringCbPrintfA @ 0x18004A84C (RtlStringCbPrintfA.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053AB8 (vDbgPrintExWithPrefixInternal.c)
 *     StringCbPrintfA @ 0x1800D99FC (StringCbPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1800DCBA0 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1800904EC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
