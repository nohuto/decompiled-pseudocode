/*
 * XREFs of vswprintf_s @ 0x1800178AC
 * Callers:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18003DCB4 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180016374 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x180017722 (__stdio_common_vswprintf_s.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v8, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
