/*
 * XREFs of CcPostDeferredWritesOnVolumeHelper @ 0x140539050
 * Callers:
 *     <none>
 * Callees:
 *     CcPostDeferredWrites @ 0x1403C2028 (CcPostDeferredWrites.c)
 */

char __fastcall CcPostDeferredWritesOnVolumeHelper(__int64 a1, __int64 a2)
{
  CcPostDeferredWrites(a1, a2);
  return 1;
}
