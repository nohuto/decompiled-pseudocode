/*
 * XREFs of _vscwprintf @ 0x18005FAB0
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18005E504 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x18005F8C2 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vscwprintf(const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v4; // rax
  int result; // eax

  v4 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v4 | 2, 0LL, 0LL, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
