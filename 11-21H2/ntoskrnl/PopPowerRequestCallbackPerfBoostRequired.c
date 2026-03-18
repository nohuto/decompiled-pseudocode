/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x14069DD40
 * Callers:
 *     <none>
 * Callees:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmPerfClearBootOverrides @ 0x140225D70 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 1;
    PpmPerfUpdateDomainPolicy(0LL);
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides();
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 0;
    PpmPerfUpdateDomainPolicy(0LL);
  }
  v5 = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(v5) = 3;
  return ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v5);
}
