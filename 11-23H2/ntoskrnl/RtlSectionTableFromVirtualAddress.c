/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1402F7420
 * Callers:
 *     RtlAddressInSectionTable @ 0x1402F73C8 (RtlAddressInSectionTable.c)
 *     KeQueryKvaShadowRegion @ 0x1403CFFB8 (KeQueryKvaShadowRegion.c)
 *     KiShadowKernelSectionByAddress @ 0x140411084 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1404110E0 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140755918 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     EtwpIsValidImageAddress @ 0x14077E2C8 (EtwpIsValidImageAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140976830 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  char *v4; // r9
  int v5; // r8d
  unsigned int NumberOfSections; // r10d
  _IMAGE_SECTION_HEADER *v7; // rdx
  ULONG v8; // ecx
  unsigned __int64 v10; // r9

  v4 = (char *)NtHeaders + NtHeaders->FileHeader.SizeOfOptionalHeader;
  v5 = 0;
  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v7 = (_IMAGE_SECTION_HEADER *)(v4 + 24);
  if ( (unsigned __int64)NtHeaders <= 0x7FFFFFFEFFFFLL )
  {
    v10 = (unsigned __int64)&v4[40 * NtHeaders->FileHeader.NumberOfSections + 23];
    if ( !NtHeaders->FileHeader.NumberOfSections )
      v10 = (unsigned __int64)v7;
    if ( v10 < (unsigned __int64)v7 || v10 > 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v8 = v7->VirtualAddress;
    if ( VirtualAddress >= v8 && VirtualAddress < v7->SizeOfRawData + v8 )
      break;
    ++v7;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v7;
}
