/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14036D834
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9780 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822924 (PopSetupHighPerfPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x14082F1A8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmPerfClearBootOverrides()
{
  __int64 result; // rax

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmReinitializeHeteroEngine(0LL, 0LL);
    }
  }
  return result;
}
