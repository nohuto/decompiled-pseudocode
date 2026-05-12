/*
 * XREFs of PartitionAcquireRundownExclusive @ 0x1C000A7A4
 * Callers:
 *     ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380 (-PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORM.c)
 *     ?PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003690 (-PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PartitionAcquireRundownExclusive(__int64 a1)
{
  KeWaitForSingleObject((PVOID)(a1 + 344), Executive, 0, 0, 0LL);
  KeClearEvent((PRKEVENT)(a1 + 408));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 400));
}
