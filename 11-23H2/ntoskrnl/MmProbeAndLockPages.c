/*
 * XREFs of MmProbeAndLockPages @ 0x140238860
 * Callers:
 *     sub_1403F1A30 @ 0x1403F1A30 (sub_1403F1A30.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     MiCopyVirtualMemory @ 0x1406F7B20 (MiCopyVirtualMemory.c)
 *     CcMdlRead @ 0x14073EB90 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x14073EFE0 (MmProbeAndLockProcessPages.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     FsRtlKernelFsControlFile @ 0x140772AB0 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140853810 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087F138 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x1408A4CE8 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140942CF8 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x14094425C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x140979920 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988D2C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409B1160 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7578 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A048B0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A17788 (CmpLockKeyBodyIntoMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D274 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E384 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DD70 @ 0x140A4DD70 (sub_140A4DD70.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140236330 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockComplete @ 0x140238940 (MiProbeAndLockComplete.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  NTSTATUS v6; // eax
  unsigned int v7; // eax
  NTSTATUS v8; // eax
  _BYTE *v9; // rdi
  NTSTATUS v10; // ebx
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
    RtlRaiseStatus(v6);
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
    RtlRaiseStatus(v10);
}
