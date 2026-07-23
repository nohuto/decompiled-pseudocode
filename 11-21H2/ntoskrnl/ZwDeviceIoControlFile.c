/*
 * XREFs of ZwDeviceIoControlFile @ 0x14041B840
 * Callers:
 *     sub_1405D6CD4 @ 0x1405D6CD4 (sub_1405D6CD4.c)
 *     sub_14061F970 @ 0x14061F970 (sub_14061F970.c)
 *     sub_1406BB628 @ 0x1406BB628 (sub_1406BB628.c)
 *     sub_1406D958C @ 0x1406D958C (sub_1406D958C.c)
 *     sub_1406DBCB4 @ 0x1406DBCB4 (sub_1406DBCB4.c)
 *     sub_140803C4C @ 0x140803C4C (sub_140803C4C.c)
 *     sub_140803D90 @ 0x140803D90 (sub_140803D90.c)
 *     sub_140803F88 @ 0x140803F88 (sub_140803F88.c)
 *     sub_140804060 @ 0x140804060 (sub_140804060.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     sub_14085D06C @ 0x14085D06C (sub_14085D06C.c)
 *     sub_1408624E8 @ 0x1408624E8 (sub_1408624E8.c)
 *     sub_1409FC9E0 @ 0x1409FC9E0 (sub_1409FC9E0.c)
 *     sub_1409FCC0C @ 0x1409FCC0C (sub_1409FCC0C.c)
 *     sub_1409FEC6C @ 0x1409FEC6C (sub_1409FEC6C.c)
 *     sub_140A1DE3C @ 0x140A1DE3C (sub_140A1DE3C.c)
 *     sub_140A216DC @ 0x140A216DC (sub_140A216DC.c)
 *     sub_140A217B8 @ 0x140A217B8 (sub_140A217B8.c)
 *     sub_140A218B8 @ 0x140A218B8 (sub_140A218B8.c)
 *     sub_140A21954 @ 0x140A21954 (sub_140A21954.c)
 *     sub_140B3116C @ 0x140B3116C (sub_140B3116C.c)
 *     sub_140B54680 @ 0x140B54680 (sub_140B54680.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 *     sub_140B54FF8 @ 0x140B54FF8 (sub_140B54FF8.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, Event, ApcRoutine);
}
