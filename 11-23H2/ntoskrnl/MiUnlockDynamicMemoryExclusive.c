/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14061BFAC
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x140658FC0 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 *     MiGetPhysicalMemoryRanges @ 0x140834478 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B6C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140A45288 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B45F30 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *v4; // rax

  v3 = a1 + 216;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 216));
  LOBYTE(v4) = KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
