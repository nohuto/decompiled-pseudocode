/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x14027EF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402518B0 @ 0x1402518B0 (sub_1402518B0.c)
 *     sub_14027F03C @ 0x14027F03C (sub_14027F03C.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
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
    if ( (Flags & 4) != 0 || sub_1402518B0((__int64)SectionObjectPointer) )
    {
      v11 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v10 = (Flags >> 1) & 1;
  }
  v11 = sub_14027F03C(SectionObjectPointer, FileOffset, v6, v10);
LABEL_4:
  IoStatus->Status = v11;
  sub_140283030((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, v6, 0, 0, (__int64)IoStatus);
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
