/*
 * XREFs of sub_18000BC40 @ 0x18000BC40
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void sub_18000BC40()
{
  void (**i)(void); // rbx

  for ( i = qword_1801AC308; i < qword_1801AC308; ++i )
  {
    if ( *i )
      (*i)();
  }
}
