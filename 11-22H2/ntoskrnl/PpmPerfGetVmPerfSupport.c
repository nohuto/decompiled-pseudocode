/*
 * XREFs of PpmPerfGetVmPerfSupport @ 0x14058D3B4
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 */

void __fastcall PpmPerfGetVmPerfSupport(__int64 a1)
{
  bool v2; // zf
  _PROC_PERF_DOMAIN *Domain; // rdx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = PpmPerfVmPerfSelectionSupported == 0;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  if ( !v2 )
  {
    Domain = KeGetCurrentPrcb()->PowerState.CheckContext.Domain;
    *(_BYTE *)a1 = 1;
    *(_DWORD *)(a1 + 16) = Domain->VmFrequencyStepMhz;
    *(_DWORD *)(a1 + 4) = Domain->VmHighestFrequencyMhz;
    *(_DWORD *)(a1 + 8) = Domain->VmNominalFrequencyMhz;
    *(_DWORD *)(a1 + 12) = Domain->VmLowestFrequencyMhz;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
}
