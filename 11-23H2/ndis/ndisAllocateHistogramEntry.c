/*
 * XREFs of ndisAllocateHistogramEntry @ 0x1C012E4EC
 * Callers:
 *     ndisDmaAllocationHistogramAddEntry @ 0x1C012E8C8 (ndisDmaAllocationHistogramAddEntry.c)
 * Callees:
 *     ??1?$unique_ptr@UNdisHistogramEntry@@U?$default_delete@UNdisHistogramEntry@@@wistd@@@wistd@@QEAA@XZ @ 0x1C007451C (--1-$unique_ptr@UNdisHistogramEntry@@U-$default_delete@UNdisHistogramEntry@@@wistd@@@wistd@@QEAA.c)
 *     ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1C012E430 (-Create@KHistogram@@SAPEAV1@_K0K@Z.c)
 */

_QWORD *ndisAllocateHistogramEntry()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // edx
  _QWORD *v2; // rbx
  struct KHistogram *v3; // rax
  void *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6568444Eu);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    *(_OWORD *)(PoolWithTag + 1) = 0LL;
    v6 = PoolWithTag;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    v3 = KHistogram::Create(
           *((unsigned int *)qword_1C00F7708 + 7),
           *((unsigned int *)qword_1C00F7708 + 9),
           *((_DWORD *)qword_1C00F7708 + 8));
    v4 = (void *)v2[4];
    v2[4] = v3;
    if ( v4 )
      ExFreePoolWithTag(v4, 0x7473484Bu);
    if ( v2[4] )
      return v2;
  }
  else
  {
    v6 = 0LL;
  }
  wistd::unique_ptr<NdisHistogramEntry,wistd::default_delete<NdisHistogramEntry>>::~unique_ptr<NdisHistogramEntry,wistd::default_delete<NdisHistogramEntry>>(
    &v6,
    v1);
  return 0LL;
}
