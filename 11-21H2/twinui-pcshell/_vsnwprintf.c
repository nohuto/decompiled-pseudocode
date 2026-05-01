/*
 * XREFs of _vsnwprintf @ 0x180188F78
 * Callers:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18008D040 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x18012BB50 (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x180150E40 (StringVPrintfWorkerW.c)
 *     StringVPrintfWorkerW_0 @ 0x18022D094 (StringVPrintfWorkerW_0.c)
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x18041EA04 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180187DD4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180188DFE (_o___stdio_common_vswprintf_0.c)
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
