/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1402080C0
 * Callers:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402E2970 (ExAllocatePoolMm.c)
 *     FsRtlAllocatePoolWithQuota @ 0x14053E0C0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14053E0F0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithQuota @ 0x140607190 (ExAllocatePoolWithQuota.c)
 *     NtRegisterThreadTerminatePort @ 0x1407E4560 (NtRegisterThreadTerminatePort.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140AD0DC0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140ADD3A0 (VerifierPortExAllocatePoolWithQuotaTag.c)
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
