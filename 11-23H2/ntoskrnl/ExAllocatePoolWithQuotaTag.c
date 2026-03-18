/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1402080C0
 * Callers:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402E26E0 (ExAllocatePoolMm.c)
 *     FsRtlAllocatePoolWithQuota @ 0x14053DB70 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14053DBA0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithQuota @ 0x140606C40 (ExAllocatePoolWithQuota.c)
 *     NtRegisterThreadTerminatePort @ 0x1407E4290 (NtRegisterThreadTerminatePort.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140AD0DD0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADD3B0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAE008 (ExpAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v3; // r9

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v3) = v3 | 0x80000000;
  return (PVOID)ExpAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, Tag, v3);
}
