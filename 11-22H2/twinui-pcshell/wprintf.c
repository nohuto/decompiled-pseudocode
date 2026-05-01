/*
 * XREFs of wprintf @ 0x1801C7524
 * Callers:
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1801C6334 (__local_stdio_printf_options.c)
 *     _o___acrt_iob_func_0 @ 0x1801C7306 (_o___acrt_iob_func_0.c)
 *     __stdio_common_vfwprintf @ 0x1801C7336 (__stdio_common_vfwprintf.c)
 */

int wprintf(const wchar_t *const Format, ...)
{
  FILE *v1; // rbx
  unsigned __int64 *v2; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = o___acrt_iob_func_0(1u);
  v2 = _local_stdio_printf_options();
  return _stdio_common_vfwprintf(*v2, v1, Format, 0LL, va);
}
