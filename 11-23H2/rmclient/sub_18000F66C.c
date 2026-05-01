/*
 * XREFs of sub_18000F66C @ 0x18000F66C
 * Callers:
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     sub_18000A774 @ 0x18000A774 (sub_18000A774.c)
 *     sub_18000DCE0 @ 0x18000DCE0 (sub_18000DCE0.c)
 *     sub_18000F6B0 @ 0x18000F6B0 (sub_18000F6B0.c)
 *     sub_18000FAEC @ 0x18000FAEC (sub_18000FAEC.c)
 *     sub_1800101BC @ 0x1800101BC (sub_1800101BC.c)
 *     sub_180010248 @ 0x180010248 (sub_180010248.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 *     sub_180015674 @ 0x180015674 (sub_180015674.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

char sub_18000F66C()
{
  char v0; // bl

  v0 = 0;
  if ( byte_180032D78 || qword_180032938 && (unsigned __int8)qword_180032938() )
    return 1;
  return v0;
}
