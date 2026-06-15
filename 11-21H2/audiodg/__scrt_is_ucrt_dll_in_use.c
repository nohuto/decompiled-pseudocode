/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x140030718
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x14002F998 (__scrt_acquire_startup_lock.c)
 *     __scrt_initialize_onexit_tables @ 0x14002FA28 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x14002FB5C (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
