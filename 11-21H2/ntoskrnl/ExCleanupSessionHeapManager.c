/*
 * XREFs of ExCleanupSessionHeapManager @ 0x14036DBE4
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14036EEAC (ExInitializeSessionHeapManager.c)
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x14036EBE8 (RtlpHpHeapDestroy.c)
 *     RtlCSparseBitmapCleanup @ 0x1403724D8 (RtlCSparseBitmapCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void ExCleanupSessionHeapManager()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 v2; // rsi

  v0 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608);
  if ( v0[1822] )
    RtlpHpHeapDestroy();
  if ( v0[1823] )
    RtlpHpHeapDestroy();
  v1 = v0 + 1811;
  v2 = 4LL;
  do
  {
    if ( *v1 )
      RtlpHpHeapDestroy();
    v1 += 2;
    --v2;
  }
  while ( v2 );
  RtlCSparseBitmapCleanup(v0 + 2);
  RtlCSparseBitmapCleanup(v0 + 15);
  ExFreePoolWithTag(v0, 0x65537048u);
}
