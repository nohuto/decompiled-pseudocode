/*
 * XREFs of KeIsCoreIsolationMitigationPolicyEnforceable @ 0x140223CD0
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsCoreIsolationMitigationPolicyEnforceable()
{
  return KiCoreIsolationEnforceable != 0;
}
