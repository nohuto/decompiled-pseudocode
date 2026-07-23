/*
 * XREFs of MiGetExportSectionExtents @ 0x14034B808
 * Callers:
 *     MmDecodeExportSection @ 0x14034B4CC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034B668 (MmEncodeExportSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 */

__int64 __fastcall MiGetExportSectionExtents(_QWORD *a1)
{
  PIMAGE_NT_HEADERS v2; // rax
  _DWORD *v3; // r8
  int NumberOfSections; // edx
  __int64 result; // rax

  v2 = RtlImageNtHeader(PsNtosImageBase);
  v3 = (_DWORD *)((char *)&v2->OptionalHeader.Magic + v2->FileHeader.SizeOfOptionalHeader);
  NumberOfSections = v2->FileHeader.NumberOfSections;
  if ( v2->FileHeader.NumberOfSections )
  {
    while ( *v3 != 1633969454 || v3[1] != 24948 )
    {
      v3 += 10;
      if ( !--NumberOfSections )
        goto LABEL_4;
    }
    result = (unsigned int)v3[2];
    *a1 = (char *)PsNtosImageBase + (unsigned int)v3[3];
  }
  else
  {
LABEL_4:
    *a1 = 0LL;
    return 0LL;
  }
  return result;
}
