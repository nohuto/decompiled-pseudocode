/*
 * XREFs of ndisAllocateHistogramEntry @ 0x1C01229EC
 * Callers:
 *     ndisDmaAllocationHistogramAddEntry @ 0x1C0122DAC (ndisDmaAllocationHistogramAddEntry.c)
 * Callees:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1C01228DC (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 *     ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1C0122930 (-Create@KHistogram@@SAPEAV1@_K0K@Z.c)
 */

_QWORD *ndisAllocateHistogramEntry()
{
  char *PoolWithTag; // rax
  _QWORD *v1; // rbx
  struct KHistogram *v2; // rax
  void *v3; // rcx
  _QWORD *v4; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6568444Eu);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v1 = 0LL;
LABEL_7:
    v4 = v1;
    v1 = 0LL;
    if ( v4 )
      NdisHistogramEntry::`scalar deleting destructor'(v4);
    return v1;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  *(_OWORD *)(PoolWithTag + 8) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  v2 = KHistogram::Create(
         *((unsigned int *)qword_1C00EE648 + 7),
         *((unsigned int *)qword_1C00EE648 + 9),
         *((_DWORD *)qword_1C00EE648 + 8));
  v3 = (void *)v1[4];
  v1[4] = v2;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7473484Bu);
  if ( !v1[4] )
    goto LABEL_7;
  return v1;
}
