/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14064BEF8
 * Callers:
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140A2EB60 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140A4132C (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41700 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A420E8 (MiRemoveUserPhysicalPagesView.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14022F8B0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
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
