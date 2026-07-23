/*
 * XREFs of PspFreeRateControl @ 0x140684EAC
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x140683BA8 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x140684E4C (PspRemoveCpuRateControl.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x1409B2A5C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1409B2FDC (PspSetJobRateControl.c)
 * Callees:
 *     PspGetRateControlSize @ 0x140684F74 (PspGetRateControlSize.c)
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeRateControl(PVOID *P, unsigned int a2)
{
  PVOID v3; // rcx

  PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P);
  v3 = P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
