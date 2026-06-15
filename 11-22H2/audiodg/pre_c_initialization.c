/*
 * XREFs of pre_c_initialization @ 0x140027B40
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1400282A8 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _get_startup_argv_mode @ 0x1400289AC (_get_startup_argv_mode.c)
 *     __scrt_initialize_winrt @ 0x1400289B8 (__scrt_initialize_winrt.c)
 *     _get_startup_file_mode @ 0x1400289C4 (_get_startup_file_mode.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x1400289D0 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     _should_initialize_environment @ 0x1400289E4 (_should_initialize_environment.c)
 *     _initialize_invalid_parameter_handler @ 0x1400289F0 (_initialize_invalid_parameter_handler.c)
 *     __scrt_fastfail @ 0x140028A50 (__scrt_fastfail.c)
 *     __scrt_initialize_mta @ 0x140028BE4 (__scrt_initialize_mta.c)
 *     _RTC_Initialize @ 0x140028CC4 (_RTC_Initialize.c)
 *     __p__commode @ 0x14002908A (__p__commode.c)
 *     _configthreadlocale @ 0x1400290EA (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x1400290F6 (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x140029132 (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x140029174 (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x140029180 (_o__set_fmode_0.c)
 */

__int64 pre_c_initialization()
{
  unsigned int startup_file_mode; // eax
  int v1; // ebx
  _crt_argv_mode startup_argv_mode; // eax
  int v3; // eax
  __int64 result; // rax

  set_app_type(_crt_gui_app);
  startup_file_mode = get_startup_file_mode();
  o__set_fmode_0(startup_file_mode);
  v1 = _scrt_initialize_winrt();
  *_p__commode() = v1;
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1LL) )
    goto LABEL_6;
  RTC_Initialize();
  atexit(RTC_Terminate);
  startup_argv_mode = get_startup_argv_mode();
  if ( (unsigned int)o__configure_wide_argv_0((unsigned int)startup_argv_mode) )
    goto LABEL_6;
  __scrt_initialize_type_info();
  initialize_invalid_parameter_handler();
  initialize_invalid_parameter_handler();
  v3 = _scrt_initialize_winrt();
  configthreadlocale(v3);
  if ( (unsigned __int8)should_initialize_environment() )
    o__initialize_wide_environment_0();
  _scrt_initialize_winrt();
  result = _scrt_initialize_mta();
  if ( (_DWORD)result )
  {
LABEL_6:
    _scrt_fastfail(7LL);
    JUMPOUT(0x140027BE0LL);
  }
  return result;
}
