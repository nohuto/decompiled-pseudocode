/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x1800966C0
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x180095E34 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180095E74 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180095F18 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180095F88 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x18009602C (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x180096160 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
