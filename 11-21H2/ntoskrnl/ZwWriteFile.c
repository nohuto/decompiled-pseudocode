/*
 * XREFs of ZwWriteFile @ 0x14041B860
 * Callers:
 *     sub_140628830 @ 0x140628830 (sub_140628830.c)
 *     sub_1406C1524 @ 0x1406C1524 (sub_1406C1524.c)
 *     sub_1406D6860 @ 0x1406D6860 (sub_1406D6860.c)
 *     sub_1406EA4C0 @ 0x1406EA4C0 (sub_1406EA4C0.c)
 *     sub_1406ED114 @ 0x1406ED114 (sub_1406ED114.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     sub_140714594 @ 0x140714594 (sub_140714594.c)
 *     sub_1408570CC @ 0x1408570CC (sub_1408570CC.c)
 *     sub_14092C1F8 @ 0x14092C1F8 (sub_14092C1F8.c)
 *     sub_14092C358 @ 0x14092C358 (sub_14092C358.c)
 *     sub_140933C14 @ 0x140933C14 (sub_140933C14.c)
 *     sub_14093D4CC @ 0x14093D4CC (sub_14093D4CC.c)
 *     sub_1409BABB4 @ 0x1409BABB4 (sub_1409BABB4.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     sub_1409EDB30 @ 0x1409EDB30 (sub_1409EDB30.c)
 *     sub_1409EDCF4 @ 0x1409EDCF4 (sub_1409EDCF4.c)
 *     sub_140A047F0 @ 0x140A047F0 (sub_140A047F0.c)
 *     sub_140A37128 @ 0x140A37128 (sub_140A37128.c)
 *     sub_140A72D50 @ 0x140A72D50 (sub_140A72D50.c)
 *     sub_140B1C49C @ 0x140B1C49C (sub_140B1C49C.c)
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
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
