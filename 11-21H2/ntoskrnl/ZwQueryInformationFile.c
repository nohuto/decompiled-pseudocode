/*
 * XREFs of ZwQueryInformationFile @ 0x14041B980
 * Callers:
 *     sub_1403CB4C0 @ 0x1403CB4C0 (sub_1403CB4C0.c)
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 *     sub_14055E880 @ 0x14055E880 (sub_14055E880.c)
 *     sub_1406247D0 @ 0x1406247D0 (sub_1406247D0.c)
 *     sub_14064CD50 @ 0x14064CD50 (sub_14064CD50.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_140689D3C @ 0x140689D3C (sub_140689D3C.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_1407ECB78 @ 0x1407ECB78 (sub_1407ECB78.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_1408018EC @ 0x1408018EC (sub_1408018EC.c)
 *     sub_1408570CC @ 0x1408570CC (sub_1408570CC.c)
 *     sub_14093D3A4 @ 0x14093D3A4 (sub_14093D3A4.c)
 *     sub_14095A3E4 @ 0x14095A3E4 (sub_14095A3E4.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 *     sub_14098FBB0 @ 0x14098FBB0 (sub_14098FBB0.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_140A04B04 @ 0x140A04B04 (sub_140A04B04.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
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
