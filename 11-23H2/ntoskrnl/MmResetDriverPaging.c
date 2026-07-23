/*
 * XREFs of MmResetDriverPaging @ 0x140703840
 * Callers:
 *     DifMmResetDriverPagingWrapper @ 0x1405E7E20 (DifMmResetDriverPagingWrapper.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiCancelPhase0Locking @ 0x140701204 (MiCancelPhase0Locking.c)
 *     MiImagePagable @ 0x14070127C (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x140703CA0 (MmImageSectionPagable.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  _QWORD *v1; // rax
  __int64 v2; // rsi
  void *v3; // rbp
  PIMAGE_NT_HEADERS v4; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12; // r8

  v1 = MiImagePagable(0LL, (unsigned __int64)AddressWithinSection);
  v2 = (__int64)v1;
  if ( v1 )
  {
    v3 = (void *)v1[6];
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
    p_OptionalHeader = &v4->OptionalHeader;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
      {
        v9 = i[4];
        if ( v9 < i[2] )
          v9 = i[2];
        MiGetPteAddress((unsigned __int64)v3 + i[3] + v9 - 1);
        PteAddress = MiGetPteAddress((unsigned __int64)v3 + v10);
        MiLockCode(v2, PteAddress, v12, 2);
      }
      i += 10;
    }
  }
}
