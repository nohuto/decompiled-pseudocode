/*
 * XREFs of ObInsertObject @ 0x14066BA50
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 *     sub_1406B8E18 @ 0x1406B8E18 (sub_1406B8E18.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_140857300 @ 0x140857300 (sub_140857300.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409A6714 @ 0x1409A6714 (sub_1409A6714.c)
 *     sub_140B09078 @ 0x140B09078 (sub_140B09078.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return sub_140729C30(Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
