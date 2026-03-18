/*
 * XREFs of _RTC_Initialize @ 0x140006424
 * Callers:
 *     pre_c_initialization @ 0x140005940 (pre_c_initialization.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140008630 (_guard_xfg_dispatch_icall_nop.c)
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
