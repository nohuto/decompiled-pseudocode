/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x18010F020
 * Callers:
 *     dllmain_crt_process_attach @ 0x18010F438 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x18010FA7C (__isa_available_init.c)
 *     _get_startup_argv_mode @ 0x18010FC24 (_get_startup_argv_mode.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18010FC30 (__scrt_is_ucrt_dll_in_use.c)
 *     _configure_narrow_argv_0 @ 0x18010FF72 (_configure_narrow_argv_0.c)
 *     _initialize_narrow_environment_0 @ 0x18010FF7E (_initialize_narrow_environment_0.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode startup_argv_mode; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    startup_argv_mode = get_startup_argv_mode();
    if ( configure_narrow_argv_0(startup_argv_mode) )
      return 0;
    initialize_narrow_environment_0();
  }
  return 1;
}
