/*
 * XREFs of MmProbeAndLockPages @ 0x140238790
 * Callers:
 *     sub_1403F1850 @ 0x1403F1850 (sub_1403F1850.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     MiCopyVirtualMemory @ 0x1406F7910 (MiCopyVirtualMemory.c)
 *     CcMdlRead @ 0x14073E9A0 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x14073EDF0 (MmProbeAndLockProcessPages.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407728C0 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1407B5E60 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140853510 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087EEF8 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x1408A4A98 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140942AF8 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x14094405C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x140979720 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988B2C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409B0F60 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7378 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A04620 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A05210 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A174D8 (CmpLockKeyBodyIntoMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A316A0 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E0D4 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F950 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DAC0 @ 0x140A4DAC0 (sub_140A4DAC0.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140236260 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockComplete @ 0x140238870 (MiProbeAndLockComplete.c)
 *     MiUnlockAndDereferenceVad @ 0x140274A90 (MiUnlockAndDereferenceVad.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x140764E54 (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  _BYTE *v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  signed __int32 v15; // [rsp+20h] [rbp-D8h]
  _QWORD v16[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v16, 0, sizeof(v16));
  LOBYTE(v15) = AccessMode != 0;
  v6 = MiProbeAndLockPrepare(
         (__int64)v16,
         (__int64)MemoryDescriptorList,
         (unsigned __int64)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset,
         MemoryDescriptorList->ByteCount,
         v15,
         Operation != IoReadAccess,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket((__int64)v16);
  v8 = MiProbeAndLockComplete(v16, v7, 3LL);
  v9 = (_BYTE *)v16[16];
  v10 = v8;
  if ( v16[16] )
  {
    v11 = *(unsigned int *)(v16[16] + 52LL);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v12 = v16[14] + (v11 | ((unsigned __int64)*(unsigned __int8 *)(v16[16] + 34LL) << 31));
    v13 = v16[15];
    *(_DWORD *)(v16[16] + 52LL) ^= (v12 ^ *(_DWORD *)(v16[16] + 52LL)) & 0x7FFFFFFF;
    v9[34] = v12 >> 31;
    v14 = v13 - v16[14];
    if ( v14 )
      MiReturnFullProcessCommitment(v16[11], v14);
    MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
}
