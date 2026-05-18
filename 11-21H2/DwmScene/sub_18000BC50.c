/*
 * XREFs of sub_18000BC50 @ 0x18000BC50
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void sub_18000BC50()
{
  void (**i)(void); // rbx

  for ( i = qword_1801CDB28; i < qword_1801CDB28; ++i )
  {
    if ( *i )
      (*i)();
  }
}
