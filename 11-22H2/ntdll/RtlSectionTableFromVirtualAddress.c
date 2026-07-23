/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x180028E30
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     RtlAddressInSectionTable @ 0x18002B2C0 (RtlAddressInSectionTable.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002B968 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpLocateMrdata @ 0x1800E0C64 (LdrpLocateMrdata.c)
 *     RtlImageRvaToVa @ 0x1800F5AD0 (RtlImageRvaToVa.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  unsigned int NumberOfSections; // r10d
  _IMAGE_SECTION_HEADER *v4; // r9
  int v5; // edx
  ULONG v6; // ecx

  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v4 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v6 = v4->VirtualAddress;
    if ( VirtualAddress >= v6 && VirtualAddress < v4->SizeOfRawData + v6 )
      break;
    ++v4;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v4;
}
