/*
 * XREFs of IoFreeMdl @ 0x1402ACFE0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140251210 (IopBuildDeviceIoControlRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1402621B0 (CcCopyBytesToUserBuffer.c)
 *     IopDropIrp @ 0x14028CDC8 (IopDropIrp.c)
 *     IopUnlockAndFreeMdl @ 0x14028CF2C (IopUnlockAndFreeMdl.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x140369190 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14036B88C (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371BF0 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x1403C17F4 (MiZeroPageWrite.c)
 *     HalPutScatterGatherListV2 @ 0x1403CE938 (HalPutScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1403D3FF0 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FF724 (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14050EAC0 (HalBuildMdlFromScatterGatherListV3.c)
 *     HalPutScatterGatherListV3 @ 0x14050F288 (HalPutScatterGatherListV3.c)
 *     HalpDmaFreeChildAdapter @ 0x140511170 (HalpDmaFreeChildAdapter.c)
 *     HalFlushAdapterBuffersEx @ 0x1405143E0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140514670 (HalMapTransferEx.c)
 *     CcLockSystemCacheBuffer @ 0x140537760 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1405389F0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x14053F5B8 (HvlGetCoverageData.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405510E4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopMcReleaseMdl @ 0x14055F174 (IopMcReleaseMdl.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     DifIoFreeMdlWrapper @ 0x1405DF3F0 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1406411C4 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MiDeleteImageCreationMdls @ 0x1406A7448 (MiDeleteImageCreationMdls.c)
 *     CcMdlRead @ 0x14073E9A0 (CcMdlRead.c)
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140764E94 (WbMakeUserExecutablePagesKernelWritable.c)
 *     CcMdlReadComplete2 @ 0x1407C386C (CcMdlReadComplete2.c)
 *     sub_1407D8F28 @ 0x1407D8F28 (sub_1407D8F28.c)
 *     FsRtlpFreeMdlChain @ 0x14093EF08 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940470 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940510 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941598 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409446E0 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanupEx @ 0x140944978 (IopExceptionCleanupEx.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094E360 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140965DEC (PnprFreeMappingReserve.c)
 *     AlpcpFreeCompletionList @ 0x1409796C4 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x140979720 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988B2C (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A05210 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A342C8 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140A34540 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A3A104 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140A3BCA0 (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 *     sub_140A4DAC0 @ 0x140A4DAC0 (sub_140A4DAC0.c)
 *     ViAllocateMapRegisterFile @ 0x140AC7CB4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140AC8AC0 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v2 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0
      || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v2]) == 0LL) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PMDL))P->FreeEx)(Mdl);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
