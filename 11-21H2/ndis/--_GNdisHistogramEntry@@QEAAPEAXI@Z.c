/*
 * XREFs of ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1C01228DC
 * Callers:
 *     ndisAllocateHistogramEntry @ 0x1C01229EC (ndisAllocateHistogramEntry.c)
 *     ndisHistogramDeleteAllEntries @ 0x1C0122F64 (ndisHistogramDeleteAllEntries.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NdisHistogramEntry::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  P[4] = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7473484Bu);
  if ( P )
    ExFreePoolWithTag(P, 0x6568444Eu);
  return P;
}
