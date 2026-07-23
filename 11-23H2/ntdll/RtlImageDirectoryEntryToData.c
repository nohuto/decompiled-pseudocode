/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1800840A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, MappedAsImage, DirectoryEntry, Size, v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
