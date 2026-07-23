/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9A50
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PpmPerfClearBootOverrides @ 0x14036D9D4 (PpmPerfClearBootOverrides.c)
 *     PoLatencySensitivityHint @ 0x14036DA00 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6540 (PpmPerfUpdateDomainPolicy.c)
 */

NTSTATUS __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 1;
    PpmPerfUpdateDomainPolicy(0);
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides();
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 0;
    PpmPerfUpdateDomainPolicy(0);
  }
  Buffer = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(Buffer) = 3;
  return ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
}
