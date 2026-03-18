/*
 * XREFs of ZwCreateSection @ 0x14041B6A0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402F5FD8 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1403A7DC4 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403B1320 (RtlFileMapMapView.c)
 *     DifZwCreateSectionWrapper @ 0x1405EED50 (DifZwCreateSectionWrapper.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x1407A1EA0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1407A2878 (ExpGetGlobalLocaleSection.c)
 *     CmFcpManagerCreateSection @ 0x14080DF10 (CmFcpManagerCreateSection.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 *     ExInitializeLeapSecondData @ 0x140853510 (ExInitializeLeapSecondData.c)
 *     IopIsNotNativeDriverImage @ 0x140945044 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6860 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6AA0 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140A025C0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A20C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A59A40 (AslpFileLargeMapCreate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
