/*
 * XREFs of MiUnlockAweVadsShared @ 0x14064BE48
 * Callers:
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalPages @ 0x14064A540 (MiFreePhysicalPages.c)
 *     MiLockAweVadsShared @ 0x14064B070 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A42880 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A42B30 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x140230AB0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockAweVadsShared(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v3; // rax

  LOBYTE(v3) = ExReleaseAutoExpandPushLockShared(a2, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
