/*
 * XREFs of MiUnlockAweVadsShared @ 0x1405AC910
 * Callers:
 *     MiLockAweVadsShared @ 0x1405AB9F0 (MiLockAweVadsShared.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14097DFA0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14097E270 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x1402AFA70 (ExReleaseAutoExpandPushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
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
