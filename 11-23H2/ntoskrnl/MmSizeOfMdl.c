/*
 * XREFs of MmSizeOfMdl @ 0x140206EA0
 * Callers:
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1407B5E60 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140853510 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087EEF8 (VslValidateDynamicCodePages.c)
 *     VslCreateSecureSection @ 0x140941BF0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140942AF8 (VslObtainHotPatchUndoTable.c)
 *     PspCreateSecureThread @ 0x1409B0F60 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7378 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A04620 (NtStartProfile.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A31408 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A316A0 (MiRotateToFrameBuffer.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E0D4 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F950 (MiQueryMemoryPhysicalContiguity.c)
 *     PopMarkHiberPhase @ 0x140AA3898 (PopMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
