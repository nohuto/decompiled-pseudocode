/*
 * XREFs of RtlpImageDirectoryEntryToData64 @ 0x140214C30
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A78 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1402F7138 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData64(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        char **a6)
{
  __int64 v7; // r10
  __int64 VirtualAddress; // r8
  char *v9; // r9
  char *v11; // rax
  char *v12; // rax

  if ( a3 >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
    return 3221225485LL;
  v7 = a3;
  VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
  if ( !(_DWORD)VirtualAddress )
    return 3221225474LL;
  if ( (unsigned __int64)BaseOfImage > 0x7FFFFFFEFFFFLL )
  {
    v9 = &BaseOfImage[VirtualAddress];
    goto LABEL_5;
  }
  v9 = &BaseOfImage[VirtualAddress];
  v11 = &BaseOfImage[VirtualAddress - 1];
  if ( v11 < BaseOfImage || (unsigned __int64)v11 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
LABEL_5:
  *a4 = NtHeaders->OptionalHeader.DataDirectory[v7].Size;
  if ( a2 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = v9;
    return 0LL;
  }
  else
  {
    v12 = (char *)RtlAddressInSectionTable(NtHeaders, BaseOfImage, VirtualAddress);
    *a6 = v12;
    return v12 == 0LL ? 0xC000000D : 0;
  }
}
