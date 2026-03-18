/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x140294CA4
 * Callers:
 *     RtlGuardRestoreContext @ 0x140294C30 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EEC28 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
