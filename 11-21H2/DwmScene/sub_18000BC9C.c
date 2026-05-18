/*
 * XREFs of sub_18000BC9C @ 0x18000BC9C
 * Callers:
 *     sub_18000B0C0 @ 0x18000B0C0 (sub_18000B0C0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void sub_18000BC9C()
{
  void (**i)(void); // rbx

  for ( i = &qword_1801CDB38; i < &qword_1801CDB38; ++i )
  {
    if ( *i )
      (*i)();
  }
}
