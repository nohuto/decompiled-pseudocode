/*
 * XREFs of MmSizeOfMdl @ 0x140206EA0
 * Callers:
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140853810 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087F138 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140941DF0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140942CF8 (VslObtainHotPatchUndoTable.c)
 *     PspCreateSecureThread @ 0x1409B1160 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A048B0 (NtStartProfile.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A316B8 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E384 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     PopMarkHiberPhase @ 0x140AA3708 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
