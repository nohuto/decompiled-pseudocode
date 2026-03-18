/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1403402F8
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340284 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1EE8 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140340320 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
