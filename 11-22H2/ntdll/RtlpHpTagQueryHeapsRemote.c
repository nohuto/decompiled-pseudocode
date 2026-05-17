/*
 * XREFs of RtlpHpTagQueryHeapsRemote @ 0x1801184D4
 * Callers:
 *     RtlpHpTagQueryTags @ 0x18008B400 (RtlpHpTagQueryTags.c)
 * Callees:
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpTagQueryHeapsRemote(_OWORD *a1, size_t a2, size_t *a3)
{
  int Section; // edi
  __int64 v7; // rcx
  size_t v8; // r8
  bool v9; // cc
  unsigned __int64 v11; // [rsp+50h] [rbp-29h]
  _QWORD v12[3]; // [rsp+60h] [rbp-19h] BYREF
  int v13; // [rsp+78h] [rbp-1h]
  size_t Size; // [rsp+80h] [rbp+7h]

  v11 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  Section = NtCreateSection();
  if ( Section >= 0 )
  {
    Section = ZwMapViewOfSection();
    if ( Section >= 0 )
    {
      MEMORY[0] = *a1;
      MEMORY[0x10] = a1[1];
      MEMORY[0x20] = a1[2];
      memset_thunk_772440563353939046(v12, 0, 0x60uLL);
      v7 = *((_QWORD *)a1 + 1);
      v12[0] = 0LL;
      v12[1] = v11;
      v13 = 0x40000000;
      Section = RtlpHeapPerformCrossProcessQuery(v7, (__int64)v12);
      if ( Section >= 0 )
      {
        v8 = Size;
        v9 = Size <= a2;
        *a3 = Size;
        if ( v9 )
        {
          memmove(a1, 0LL, v8);
          return 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
    }
  }
  return (unsigned int)Section;
}
