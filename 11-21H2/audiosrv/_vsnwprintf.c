/*
 * XREFs of _vsnwprintf @ 0x18005F9E4
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180021120 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003E8A0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1800C02F4 (StringVPrintfWorkerW.c)
 *     StringVPrintfWorkerW_0 @ 0x1800C539C (StringVPrintfWorkerW_0.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18005E504 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x18005F8C2 (_o___stdio_common_vswprintf_0.c)
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
