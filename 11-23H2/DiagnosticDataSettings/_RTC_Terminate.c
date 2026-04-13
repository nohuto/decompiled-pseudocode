/*
 * XREFs of _RTC_Terminate @ 0x18000557C
 * Callers:
 *     dllmain_crt_process_detach @ 0x180004CD0 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
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
