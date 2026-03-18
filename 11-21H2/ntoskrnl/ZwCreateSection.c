/*
 * XREFs of ZwCreateSection @ 0x14041C0A0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x14020B710 (CmSiCreateSectionForFile.c)
 *     RtlFileMapMapView @ 0x1403CB4C0 (RtlFileMapMapView.c)
 *     LdrpMapResourceFile @ 0x1403D79F4 (LdrpMapResourceFile.c)
 *     DifZwCreateSectionWrapper @ 0x14061EE20 (DifZwCreateSectionWrapper.c)
 *     ExpGetGlobalLocaleSection @ 0x1406C421C (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x140784CB0 (NtGetNlsSectionPtr.c)
 *     PiInitializeDDB @ 0x1407EC34C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     CmFcpManagerCreateSection @ 0x140832CF4 (CmFcpManagerCreateSection.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     IopIsNotNativeDriverImage @ 0x1409348AC (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6A1C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6C5C (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x140A04C34 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A05110 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140A0AA8C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140A1A2F8 (AslpFileLargeMapCreate.c)
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
