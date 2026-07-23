/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14036D9D4
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9A50 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822C24 (PopSetupHighPerfPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x14082F4A8 (PpmReinitializeHeteroEngine.c)
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
