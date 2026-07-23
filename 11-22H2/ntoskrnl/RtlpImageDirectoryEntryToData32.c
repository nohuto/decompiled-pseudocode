/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1402F7094
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140214A78 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1402F7138 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        char **a6)
{
  __int64 v7; // r10
  __int64 v8; // r8
  char *v9; // r9
  char *v10; // rax

  if ( (unsigned int)a3 >= HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
    return 3221225485LL;
  v7 = a3;
  v8 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  v9 = &BaseOfImage[v8];
  if ( (unsigned __int64)BaseOfImage <= 0x7FFFFFFEFFFFLL
    && (v9 - 1 < BaseOfImage || (unsigned __int64)(v9 - 1) > 0x7FFFFFFEFFFFLL) )
  {
    return 3221225485LL;
  }
  *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v7 + 1);
  if ( a2 || (unsigned int)v8 < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = v9;
    return 0LL;
  }
  else
  {
    v10 = (char *)RtlAddressInSectionTable(NtHeaders, BaseOfImage, v8);
    *a6 = v10;
    return v10 == 0LL ? 0xC000000D : 0;
  }
}
