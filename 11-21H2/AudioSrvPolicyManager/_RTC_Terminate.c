/*
 * XREFs of _RTC_Terminate @ 0x180003140
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800021F0 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl RTC_Terminate()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_tzz; i < &_rtc_tzz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
