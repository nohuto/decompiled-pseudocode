/*
 * XREFs of MiReturnFullProcessCharges @ 0x1402DF3C0
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1406FB650 (MiRemoveVadCharges.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140744750 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FADD0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1407451A4 (PsReturnProcessPageFileQuota.c)
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
