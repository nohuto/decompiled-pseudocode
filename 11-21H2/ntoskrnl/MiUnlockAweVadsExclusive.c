/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1405AC950
 * Callers:
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x14097C814 (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14097CC1C (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x14097D5F0 (MiRemoveUserPhysicalPagesView.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  _QWORD *v2; // rax

  LOBYTE(v2) = ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1680LL) + 392LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
