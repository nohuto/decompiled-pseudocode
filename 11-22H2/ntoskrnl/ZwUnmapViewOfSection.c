/*
 * XREFs of ZwUnmapViewOfSection @ 0x14041ABE0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x140208C80 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1402F7C50 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403B0C90 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14069378C (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14069576C (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1409450F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6910 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409F6B50 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140A02670 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140A09D9C (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140A59D88 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140B57088 (EmpCacheBiosDate.c)
 *     CmpSetSystemBiosInformation @ 0x140B9986C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B99C0C (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
