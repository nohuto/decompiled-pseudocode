/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x140340588
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340514 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B2458 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1403405B0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
