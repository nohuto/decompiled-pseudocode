/*
 * XREFs of sub_18000BC8C @ 0x18000BC8C
 * Callers:
 *     sub_18000B0C0 @ 0x18000B0C0 (sub_18000B0C0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void sub_18000BC8C()
{
  void (**i)(void); // rbx

  for ( i = &qword_1801AC318; i < &qword_1801AC318; ++i )
  {
    if ( *i )
      (*i)();
  }
}
