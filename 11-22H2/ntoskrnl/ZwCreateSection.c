/*
 * XREFs of ZwCreateSection @ 0x14041AFE0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402F5FD8 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1403A7634 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403B0C90 (RtlFileMapMapView.c)
 *     DifZwCreateSectionWrapper @ 0x1405EEDE0 (DifZwCreateSectionWrapper.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x1407A23B0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1407A2D88 (ExpGetGlobalLocaleSection.c)
 *     CmFcpManagerCreateSection @ 0x140810490 (CmFcpManagerCreateSection.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 *     ExInitializeLeapSecondData @ 0x140854420 (ExInitializeLeapSecondData.c)
 *     IopIsNotNativeDriverImage @ 0x1409450F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6910 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6B50 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140A02670 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A2BC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A59AB0 (AslpFileLargeMapCreate.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(SectionHandle);
}
