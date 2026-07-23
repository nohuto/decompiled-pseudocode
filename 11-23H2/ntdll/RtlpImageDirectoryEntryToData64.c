/*
 * XREFs of RtlpImageDirectoryEntryToData64 @ 0x18002A644
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData64(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 VirtualAddress; // r8
  PVOID v9; // rax

  if ( a3 >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
    return 3221225485LL;
  v6 = a3;
  VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
  if ( !(_DWORD)VirtualAddress )
    return 3221225474LL;
  *a4 = NtHeaders->OptionalHeader.DataDirectory[v6].Size;
  if ( a2 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = &BaseOfImage[VirtualAddress];
    return 0LL;
  }
  else
  {
    v9 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, VirtualAddress);
    *a6 = v9;
    return v9 == 0LL ? 0xC000000D : 0;
  }
}
