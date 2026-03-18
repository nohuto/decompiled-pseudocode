/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x140346780
 * Callers:
 *     MmQueryPfnList @ 0x1406EF440 (MmQueryPfnList.c)
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MmPrefetchPagesEx @ 0x14073E6D8 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiGetPhysicalMemoryRanges @ 0x140834478 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B6C8 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140A2C910 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140A3C988 (MmRelocatePfnList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx
  _QWORD *v4; // rax

  v2 = (signed __int64 *)(a1 + 216);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  LOBYTE(v4) = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
