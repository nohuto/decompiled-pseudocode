/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1402D6CB0
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_1402D7FF8 @ 0x1402D7FF8 (sub_1402D7FF8.c)
 *     sub_1402D8EEC @ 0x1402D8EEC (sub_1402D8EEC.c)
 *     sub_1403C3840 @ 0x1403C3840 (sub_1403C3840.c)
 *     sub_1403DC578 @ 0x1403DC578 (sub_1403DC578.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1405A3DC0 @ 0x1405A3DC0 (sub_1405A3DC0.c)
 *     sub_1405EEF88 @ 0x1405EEF88 (sub_1405EEF88.c)
 *     sub_1406ACDDC @ 0x1406ACDDC (sub_1406ACDDC.c)
 *     sub_1406D8E14 @ 0x1406D8E14 (sub_1406D8E14.c)
 *     sub_1406EB4B0 @ 0x1406EB4B0 (sub_1406EB4B0.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 *     sub_140757C9C @ 0x140757C9C (sub_140757C9C.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_1407584B4 @ 0x1407584B4 (sub_1407584B4.c)
 *     sub_14075883C @ 0x14075883C (sub_14075883C.c)
 *     sub_1407589DC @ 0x1407589DC (sub_1407589DC.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 *     sub_14075C330 @ 0x14075C330 (sub_14075C330.c)
 *     sub_1407614BC @ 0x1407614BC (sub_1407614BC.c)
 *     sub_140761604 @ 0x140761604 (sub_140761604.c)
 *     sub_1407619F4 @ 0x1407619F4 (sub_1407619F4.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1409644D8 @ 0x1409644D8 (sub_1409644D8.c)
 *     sub_14096A1D0 @ 0x14096A1D0 (sub_14096A1D0.c)
 *     sub_14097838C @ 0x14097838C (sub_14097838C.c)
 *     sub_14097F800 @ 0x14097F800 (sub_14097F800.c)
 *     LdrEnumResources @ 0x1409B64E0 (LdrEnumResources.c)
 *     sub_1409BE864 @ 0x1409BE864 (sub_1409BE864.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 *     sub_140A19B28 @ 0x140A19B28 (sub_140A19B28.c)
 *     sub_140A7BE54 @ 0x140A7BE54 (sub_140A7BE54.c)
 *     sub_140A8A0C8 @ 0x140A8A0C8 (sub_140A8A0C8.c)
 *     sub_140A934D8 @ 0x140A934D8 (sub_140A934D8.c)
 *     sub_140A93724 @ 0x140A93724 (sub_140A93724.c)
 *     sub_140A9391C @ 0x140A9391C (sub_140A9391C.c)
 *     sub_140A93CE4 @ 0x140A93CE4 (sub_140A93CE4.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140B0593C @ 0x140B0593C (sub_140B0593C.c)
 *     sub_140B06E60 @ 0x140B06E60 (sub_140B06E60.c)
 *     sub_140B0A000 @ 0x140B0A000 (sub_140B0A000.c)
 *     sub_140B0DEB0 @ 0x140B0DEB0 (sub_140B0DEB0.c)
 *     sub_140B52AFC @ 0x140B52AFC (sub_140B52AFC.c)
 * Callees:
 *     sub_1402D6CE8 @ 0x1402D6CE8 (sub_1402D6CE8.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = sub_1402D6CE8(BaseOfImage, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
