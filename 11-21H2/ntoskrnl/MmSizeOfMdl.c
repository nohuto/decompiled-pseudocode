/*
 * XREFs of MmSizeOfMdl @ 0x140231480
 * Callers:
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x1409319A0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     PspCreateSecureThread @ 0x1409AF550 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D43FC (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A06B80 (NtStartProfile.c)
 *     PopMarkHiberPhase @ 0x140A4ED84 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
