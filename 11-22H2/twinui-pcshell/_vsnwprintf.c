/*
 * XREFs of _vsnwprintf @ 0x1801C7578
 * Callers:
 *     StringVPrintfWorkerW @ 0x1800368A4 (StringVPrintfWorkerW.c)
 *     ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800C5690 (--R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z.c)
 *     StringVPrintfWorkerW_0 @ 0x18012FE70 (StringVPrintfWorkerW_0.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1801495B0 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1801C6334 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1801C7366 (_o___stdio_common_vswprintf_0.c)
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
