/*
 * XREFs of RtlFailFast2 @ 0x14042A1F0
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340284 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1EE8 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
