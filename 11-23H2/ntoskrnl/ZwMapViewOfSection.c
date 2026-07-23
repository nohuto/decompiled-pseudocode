/*
 * XREFs of ZwMapViewOfSection @ 0x14041B5F0
 * Callers:
 *     CmSiMapViewOfSection @ 0x140207E98 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403B1500 (RtlFileMapMapView.c)
 *     DifZwMapViewOfSectionWrapper @ 0x1405F1500 (DifZwMapViewOfSectionWrapper.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140945244 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6AF0 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6D30 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140A02850 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A4BC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A59CF0 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140B92E6C (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140B9886C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B98C0C (CmpSetVideoBiosInformation.c)
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
