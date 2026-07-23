/*
 * XREFs of MiDereferenceControlArea @ 0x14020B890
 * Callers:
 *     MiRefillPurgedExtents @ 0x14063F6C4 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1406463D4 (MiFaultGetFileExtents.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiMapViewInSystemSpace @ 0x1406AD6D4 (MiMapViewInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB7EC (MiReleaseVadEventBlocks.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3);
}
