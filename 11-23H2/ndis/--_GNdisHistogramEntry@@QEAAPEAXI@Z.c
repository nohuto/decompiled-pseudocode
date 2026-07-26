/*
 * XREFs of ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1C012E3DC
 * Callers:
 *     ??1?$unique_ptr@UNdisHistogramEntry@@U?$default_delete@UNdisHistogramEntry@@@wistd@@@wistd@@QEAA@XZ @ 0x1C007451C (--1-$unique_ptr@UNdisHistogramEntry@@U-$default_delete@UNdisHistogramEntry@@@wistd@@@wistd@@QEAA.c)
 *     ndisHistogramDeleteAllEntries @ 0x1C012EA8C (ndisHistogramDeleteAllEntries.c)
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
