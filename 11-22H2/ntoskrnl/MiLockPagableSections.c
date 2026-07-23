/*
 * XREFs of MiLockPagableSections @ 0x140B62918
 * Callers:
 *     MiCancelPhase0Locking @ 0x1407010A4 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x140B6276C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B627F8 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     MiImagePagable @ 0x14070111C (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x140703B40 (MmImageSectionPagable.c)
 */

void __fastcall MiLockPagableSections(_QWORD *a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = (char *)a1[6];
  if ( MiImagePagable(a1, (unsigned __int64)v2) )
  {
    v4 = RtlImageNtHeader(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 )
            MmLockPagableDataSection(&v2[*(unsigned int *)(v6 + 12)]);
          else
            MiLockPagableImageSection(v6, 0LL);
        }
        v6 += 40LL;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
