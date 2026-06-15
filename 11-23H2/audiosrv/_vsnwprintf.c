/*
 * XREFs of _vsnwprintf @ 0x180067A70
 * Callers:
 *     StringVPrintfWorkerW @ 0x1800046B8 (StringVPrintfWorkerW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180036070 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW_0 @ 0x180054F14 (StringVPrintfWorkerW_0.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18005E824 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180066594 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180067942 (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
