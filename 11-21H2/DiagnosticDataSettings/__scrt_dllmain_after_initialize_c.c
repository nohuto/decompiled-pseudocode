/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800044C8
 * Callers:
 *     dllmain_crt_process_attach @ 0x180003FF8 (dllmain_crt_process_attach.c)
 * Callees:
 *     __isa_available_init @ 0x180004BC0 (__isa_available_init.c)
 *     _get_startup_argv_mode @ 0x180004D68 (_get_startup_argv_mode.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180004D74 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x180004DC2 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x180004DDA (_initialize_narrow_environment.c)
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
    if ( o__configure_narrow_argv_0(startup_argv_mode) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
