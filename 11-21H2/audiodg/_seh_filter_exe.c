/*
 * XREFs of _seh_filter_exe @ 0x1400308E8
 * Callers:
 *     __scrt_common_main_seh @ 0x14002F3B0 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _o__seh_filter_exe(ExceptionNum, ExceptionPtr);
}
