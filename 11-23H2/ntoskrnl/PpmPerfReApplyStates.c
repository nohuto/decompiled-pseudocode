/*
 * XREFs of PpmPerfReApplyStates @ 0x140986BD4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x14032B440 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmCheckCustomRun @ 0x14032B8CC (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x14082CAB0 (PpmUpdateProcessorPolicy.c)
 */

void PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2u);
}
