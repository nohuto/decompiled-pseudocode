/*
 * XREFs of MmProbeAndLockPages @ 0x140238770
 * Callers:
 *     sub_1403F11F0 @ 0x1403F11F0 (sub_1403F11F0.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     CcMdlRead @ 0x14073EEB0 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x14073F300 (MmProbeAndLockProcessPages.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140854420 (ExInitializeLeapSecondData.c)
 *     VslValidateDynamicCodePages @ 0x14087F3C8 (VslValidateDynamicCodePages.c)
 *     VslCallEnclave @ 0x1408A4F78 (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140942BA8 (VslObtainHotPatchUndoTable.c)
 *     IopAllocateAndLockMdl @ 0x14094410C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x1409797D0 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988BDC (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1409B1010 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140A046D0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A052C0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A17588 (CmpLockKeyBodyIntoMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiApplyImageHotPatch @ 0x140A353F8 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E144 (MiLoadDataIntoVsmEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F9C0 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DB30 @ 0x140A4DB30 (sub_140A4DB30.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPacket @ 0x140236240 (MiProbeAndLockPacket.c)
 *     MiProbeAndLockComplete @ 0x140238850 (MiProbeAndLockComplete.c)
 *     MiUnlockAndDereferenceVad @ 0x140274970 (MiUnlockAndDereferenceVad.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x140765364 (MiReturnFullProcessCommitment.c)
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
