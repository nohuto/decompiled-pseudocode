/*
 * XREFs of PpmPerfReApplyStates @ 0x1409869D4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x14032B1B0 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x14082C7B0 (PpmUpdateProcessorPolicy.c)
 */

void PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2u);
}
