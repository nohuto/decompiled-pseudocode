/*
 * XREFs of RtlFailFast2 @ 0x14042A580
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340514 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B2458 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
