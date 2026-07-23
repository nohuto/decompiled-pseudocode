/*
 * XREFs of ZwSetInformationFile @ 0x14041BC40
 * Callers:
 *     sub_140627180 @ 0x140627180 (sub_140627180.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     sub_1406EA4C0 @ 0x1406EA4C0 (sub_1406EA4C0.c)
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_140801624 @ 0x140801624 (sub_140801624.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14085CC28 @ 0x14085CC28 (sub_14085CC28.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 *     sub_1409180B0 @ 0x1409180B0 (sub_1409180B0.c)
 *     sub_140919908 @ 0x140919908 (sub_140919908.c)
 *     sub_14091D570 @ 0x14091D570 (sub_14091D570.c)
 *     sub_140946830 @ 0x140946830 (sub_140946830.c)
 *     sub_14095A3E4 @ 0x14095A3E4 (sub_14095A3E4.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D6C58 @ 0x1409D6C58 (sub_1409D6C58.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     sub_140B2AFB8 @ 0x140B2AFB8 (sub_140B2AFB8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, IoStatusBlock);
}
