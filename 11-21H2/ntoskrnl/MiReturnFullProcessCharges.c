/*
 * XREFs of MiReturnFullProcessCharges @ 0x14028CDA0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1407BC9B0 (MiDecommitRegion.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x1406FEC90 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FECE0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 1120) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1608), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
