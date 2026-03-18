/*
 * XREFs of MiUnlockAwePagesExclusive @ 0x1405AC8D4
 * Callers:
 *     MiDeleteAweInfoPages @ 0x14097D034 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x14097D688 (MiResizeAweBitMap.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockAwePagesExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  LOBYTE(v3) = ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
