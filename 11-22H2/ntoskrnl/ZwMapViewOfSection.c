/*
 * XREFs of ZwMapViewOfSection @ 0x14041ABA0
 * Callers:
 *     CmSiMapViewOfSection @ 0x140207E98 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403B0C90 (RtlFileMapMapView.c)
 *     DifZwMapViewOfSectionWrapper @ 0x1405F1020 (DifZwMapViewOfSectionWrapper.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1409450F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6910 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6B50 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140A02670 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A2BC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A59AB0 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140B93E6C (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140B9986C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B99C0C (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
