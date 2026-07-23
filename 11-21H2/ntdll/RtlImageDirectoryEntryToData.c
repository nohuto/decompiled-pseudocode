/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1800864D0
 * Callers:
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  NTSTATUS v4; // eax
  void *v5; // rcx
  void *OutHeaders; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(
         (unsigned __int64)BaseOfImage,
         MappedAsImage,
         DirectoryEntry,
         Size,
         (PIMAGE_NT_HEADERS)&OutHeaders);
  v5 = OutHeaders;
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
