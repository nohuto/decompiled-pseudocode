/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x14027EF40
 * Callers:
 *     <none>
 * Callees:
 *     MmOnlySystemCacheViewsPresent @ 0x1402518B0 (MmOnlySystemCacheViewsPresent.c)
 *     MmTrimSection @ 0x14027F03C (MmTrimSection.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v5; // r12
  __int64 v6; // rbp
  ULONG v10; // edi
  NTSTATUS v11; // edi

  v5 = 0;
  v6 = Length;
  v10 = (Flags >> 1) & 1 | 2;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 4) != 0 || MmOnlySystemCacheViewsPresent((__int64)SectionObjectPointer) )
    {
      v11 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = (Flags >> 1) & 1;
  }
  v11 = MmTrimSection(SectionObjectPointer, FileOffset, v6, v10);
LABEL_4:
  IoStatus->Status = v11;
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v6, 0, 0, (__int64)IoStatus);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) != 0
      || (v5 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u) == 0, IoStatus->Status >= 0) )
    {
      if ( v11 == 277 || v5 )
        IoStatus->Status = 277;
    }
  }
}
