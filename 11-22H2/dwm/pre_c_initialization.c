/*
 * XREFs of pre_c_initialization @ 0x140005260
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x140005750 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x140005920 (atexit.c)
 *     _get_startup_argv_mode @ 0x140005A24 (_get_startup_argv_mode.c)
 *     __scrt_initialize_winrt @ 0x140005A30 (__scrt_initialize_winrt.c)
 *     _get_startup_file_mode @ 0x140005A3C (_get_startup_file_mode.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x140005A48 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     _should_initialize_environment @ 0x140005A5C (_should_initialize_environment.c)
 *     _initialize_invalid_parameter_handler @ 0x140005A68 (_initialize_invalid_parameter_handler.c)
 *     __scrt_fastfail @ 0x140005AC8 (__scrt_fastfail.c)
 *     __scrt_initialize_mta @ 0x140005C5C (__scrt_initialize_mta.c)
 *     _RTC_Initialize @ 0x140005D44 (_RTC_Initialize.c)
 *     __p__commode @ 0x14000624C (__p__commode.c)
 *     _configthreadlocale @ 0x140006294 (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x1400062A0 (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x1400062DC (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x140006324 (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x140006330 (_o__set_fmode_0.c)
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
    JUMPOUT(0x140005300LL);
  }
  return result;
}
