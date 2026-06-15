/*
 * XREFs of _RTC_Terminate @ 0x1800172A0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180016360 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
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
