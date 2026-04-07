/*
 * XREFs of _RTC_Initialize @ 0x180062428
 * Callers:
 *     dllmain_crt_process_attach @ 0x180061FC8 (dllmain_crt_process_attach.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl RTC_Initialize()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_izz; i < &_rtc_izz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
