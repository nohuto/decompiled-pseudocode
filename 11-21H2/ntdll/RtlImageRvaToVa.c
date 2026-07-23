/*
 * XREFs of RtlImageRvaToVa @ 0x18008E9E0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180092650 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180034310 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlImageRvaToVa(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG Rva,
        PIMAGE_SECTION_HEADER *LastRvaSection)
{
  PVOID result; // rax
  _IMAGE_SECTION_HEADER *v8; // r10
  ULONG VirtualAddress; // r8d

  if ( LastRvaSection )
  {
    v8 = *LastRvaSection;
    if ( *LastRvaSection )
    {
      VirtualAddress = v8->VirtualAddress;
      if ( Rva >= VirtualAddress && Rva < VirtualAddress + v8->SizeOfRawData )
        goto LABEL_6;
    }
  }
  result = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, Rva);
  v8 = (_IMAGE_SECTION_HEADER *)result;
  if ( result )
  {
    if ( !LastRvaSection )
      return (char *)BaseOfImage + Rva - v8->VirtualAddress + v8->PointerToRawData;
LABEL_6:
    *LastRvaSection = v8;
    return (char *)BaseOfImage + Rva - v8->VirtualAddress + v8->PointerToRawData;
  }
  return result;
}
