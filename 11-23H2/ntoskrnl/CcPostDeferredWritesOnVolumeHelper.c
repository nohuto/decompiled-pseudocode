/*
 * XREFs of CcPostDeferredWritesOnVolumeHelper @ 0x140538B00
 * Callers:
 *     <none>
 * Callees:
 *     CcPostDeferredWrites @ 0x1403C1E48 (CcPostDeferredWrites.c)
 */

char __fastcall CcPostDeferredWritesOnVolumeHelper(__int64 a1, __int64 a2)
{
  CcPostDeferredWrites(a1, a2);
  return 1;
}
