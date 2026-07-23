/*
 * XREFs of ZwReadFile @ 0x14041B820
 * Callers:
 *     sub_1402509C4 @ 0x1402509C4 (sub_1402509C4.c)
 *     sub_1403D8BC0 @ 0x1403D8BC0 (sub_1403D8BC0.c)
 *     sub_14055E880 @ 0x14055E880 (sub_14055E880.c)
 *     sub_140625FF0 @ 0x140625FF0 (sub_140625FF0.c)
 *     sub_1406D6860 @ 0x1406D6860 (sub_1406D6860.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     sub_140828810 @ 0x140828810 (sub_140828810.c)
 *     sub_14084BFF4 @ 0x14084BFF4 (sub_14084BFF4.c)
 *     sub_1408570CC @ 0x1408570CC (sub_1408570CC.c)
 *     sub_1409BA9F0 @ 0x1409BA9F0 (sub_1409BA9F0.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, Event, ApcRoutine);
}
