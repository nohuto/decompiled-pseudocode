/*
 * XREFs of ZwUnmapViewOfSection @ 0x14041B2A0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x140208C80 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1402F7C50 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403B1320 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14069576C (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140945044 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6860 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6AA0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140A025C0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140A09CEC (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140A59D18 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140B57728 (EmpCacheBiosDate.c)
 *     CmpSetSystemBiosInformation @ 0x140B9886C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B98C0C (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
