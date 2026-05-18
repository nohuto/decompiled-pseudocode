/*
 * XREFs of ??0CancelledException@Utils@Spectre@@QEAA@XZ @ 0x1800DFE08
 * Callers:
 *     ?CheckCancelledAndThrow@SimpleCancellationToken@Internal@Utils@Spectre@@UEBAXXZ @ 0x1800E0130 (-CheckCancelledAndThrow@SimpleCancellationToken@Internal@Utils@Spectre@@UEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Utils::CancelledException *__fastcall Spectre::Utils::CancelledException::CancelledException(
        Spectre::Utils::CancelledException *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v3, (__int64)"Operation was cancelled");
  Spectre::Utils::SpectreException::SpectreException((__int64)this, (const char *)v3, 0);
  std::string::_Tidy_deallocate((__int64)v3);
  *(_QWORD *)this = &Spectre::Utils::CancelledException::`vftable';
  return this;
}
