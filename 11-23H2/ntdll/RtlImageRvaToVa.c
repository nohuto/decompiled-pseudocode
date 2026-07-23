/*
 * XREFs of RtlImageRvaToVa @ 0x1800F6EE0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D8A0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180028C60 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlImageRvaToVa(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG Rva,
        PIMAGE_SECTION_HEADER *LastRvaSection)
{
  _IMAGE_SECTION_HEADER *v7; // r10
  ULONG VirtualAddress; // r8d
  PVOID result; // rax

  if ( LastRvaSection )
  {
    v7 = *LastRvaSection;
    if ( *LastRvaSection )
    {
      VirtualAddress = v7->VirtualAddress;
      if ( Rva >= VirtualAddress && Rva < VirtualAddress + v7->SizeOfRawData )
        goto LABEL_7;
    }
  }
  result = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, Rva);
  v7 = (_IMAGE_SECTION_HEADER *)result;
  if ( !result )
    return result;
  if ( LastRvaSection )
LABEL_7:
    *LastRvaSection = v7;
  return (char *)BaseOfImage + Rva - v7->VirtualAddress + v7->PointerToRawData;
}
