/*
 * XREFs of MiReturnFullProcessCharges @ 0x1402DF130
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1406FA420 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1406FB440 (MiRemoveVadCharges.c)
 *     MiDeleteVadBitmap @ 0x140706BB4 (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140744560 (MiDecommitRegion.c)
 *     MiReturnFullProcessCommitment @ 0x140764E54 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FABC0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140744FB4 (PsReturnProcessPageFileQuota.c)
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
