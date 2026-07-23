/*
 * XREFs of ZwOpenFile @ 0x14041BDC0
 * Callers:
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 *     sub_14055E880 @ 0x14055E880 (sub_14055E880.c)
 *     sub_140621A40 @ 0x140621A40 (sub_140621A40.c)
 *     sub_14062CAEC @ 0x14062CAEC (sub_14062CAEC.c)
 *     sub_14064CD50 @ 0x14064CD50 (sub_14064CD50.c)
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 *     sub_14066119C @ 0x14066119C (sub_14066119C.c)
 *     sub_1406BB6BC @ 0x1406BB6BC (sub_1406BB6BC.c)
 *     sub_1406C421C @ 0x1406C421C (sub_1406C421C.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     sub_14076185C @ 0x14076185C (sub_14076185C.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 *     sub_1407ECB78 @ 0x1407ECB78 (sub_1407ECB78.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_1408018EC @ 0x1408018EC (sub_1408018EC.c)
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 *     sub_140803D90 @ 0x140803D90 (sub_140803D90.c)
 *     sub_140803EC0 @ 0x140803EC0 (sub_140803EC0.c)
 *     sub_140804060 @ 0x140804060 (sub_140804060.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     sub_14084565C @ 0x14084565C (sub_14084565C.c)
 *     sub_14085D06C @ 0x14085D06C (sub_14085D06C.c)
 *     sub_14090AB48 @ 0x14090AB48 (sub_14090AB48.c)
 *     sub_140919908 @ 0x140919908 (sub_140919908.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 *     sub_14092AAC4 @ 0x14092AAC4 (sub_14092AAC4.c)
 *     sub_1409348AC @ 0x1409348AC (sub_1409348AC.c)
 *     IoAttachDevice @ 0x140935E60 (IoAttachDevice.c)
 *     sub_1409440D0 @ 0x1409440D0 (sub_1409440D0.c)
 *     sub_140944390 @ 0x140944390 (sub_140944390.c)
 *     sub_140946830 @ 0x140946830 (sub_140946830.c)
 *     sub_14095A3E4 @ 0x14095A3E4 (sub_14095A3E4.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     sub_1409FC9E0 @ 0x1409FC9E0 (sub_1409FC9E0.c)
 *     sub_1409FCC0C @ 0x1409FCC0C (sub_1409FCC0C.c)
 *     sub_1409FEC6C @ 0x1409FEC6C (sub_1409FEC6C.c)
 *     sub_140A047F0 @ 0x140A047F0 (sub_140A047F0.c)
 *     sub_140A05110 @ 0x140A05110 (sub_140A05110.c)
 *     sub_140A0AA8C @ 0x140A0AA8C (sub_140A0AA8C.c)
 *     sub_140A14C28 @ 0x140A14C28 (sub_140A14C28.c)
 *     sub_140A14CE0 @ 0x140A14CE0 (sub_140A14CE0.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 *     sub_140A1DCEC @ 0x140A1DCEC (sub_140A1DCEC.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 *     sub_140B2AFB8 @ 0x140B2AFB8 (sub_140B2AFB8.c)
 *     sub_140B3116C @ 0x140B3116C (sub_140B3116C.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 *     sub_140B4F790 @ 0x140B4F790 (sub_140B4F790.c)
 *     sub_140B54680 @ 0x140B54680 (sub_140B54680.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, *(_QWORD *)&DesiredAccess);
}
