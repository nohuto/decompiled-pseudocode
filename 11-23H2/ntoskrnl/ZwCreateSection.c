/*
 * XREFs of ZwCreateSection @ 0x14041BA30
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402F6268 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1403A7FA4 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403B1500 (RtlFileMapMapView.c)
 *     DifZwCreateSectionWrapper @ 0x1405EF2C0 (DifZwCreateSectionWrapper.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x140694E7C (KsepSdbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x1407A2090 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1407A2A68 (ExpGetGlobalLocaleSection.c)
 *     CmFcpManagerCreateSection @ 0x14080E1E0 (CmFcpManagerCreateSection.c)
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 *     ExInitializeLeapSecondData @ 0x140853810 (ExInitializeLeapSecondData.c)
 *     IopIsNotNativeDriverImage @ 0x140945244 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6AF0 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6D30 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140A02850 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0A4BC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A59CF0 (AslpFileLargeMapCreate.c)
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
