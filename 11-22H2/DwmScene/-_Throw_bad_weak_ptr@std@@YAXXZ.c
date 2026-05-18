/*
 * XREFs of ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180011AF4
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 * Callees:
 *     ?_Raise@exception@stdext@@QEBAXXZ @ 0x180011A5C (-_Raise@exception@stdext@@QEBAXXZ.c)
 */

void __noreturn std::_Throw_bad_weak_ptr(void)
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "unknown";
  v0[0] = &std::bad_weak_ptr::`vftable';
  stdext::exception::_Raise((stdext::exception *)v0);
}
