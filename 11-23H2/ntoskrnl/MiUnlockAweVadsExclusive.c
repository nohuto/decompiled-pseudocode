/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14064BE88
 * Callers:
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MmSetGraphicsPtes @ 0x140A2EAF0 (MmSetGraphicsPtes.c)
 *     MiAweViewInserter @ 0x140A412BC (MiAweViewInserter.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41690 (MiCreateProcessDefaultAweInfo.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140A42078 (MiRemoveUserPhysicalPagesView.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14022F8B0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
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
