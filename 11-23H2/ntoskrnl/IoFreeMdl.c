/*
 * XREFs of IoFreeMdl @ 0x1402AD270
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x140262440 (CcCopyBytesToUserBuffer.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     IopUnlockAndFreeMdl @ 0x14028D1BC (IopUnlockAndFreeMdl.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     CcZeroDataInCache @ 0x1402FC1A8 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x140369330 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14036BA2C (CcMdlWriteComplete2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x1403C19D4 (MiZeroPageWrite.c)
 *     HalPutScatterGatherListV2 @ 0x1403CEB18 (HalPutScatterGatherListV2.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1403D41D0 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FFC74 (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14050F010 (HalBuildMdlFromScatterGatherListV3.c)
 *     HalPutScatterGatherListV3 @ 0x14050F7D8 (HalPutScatterGatherListV3.c)
 *     HalpDmaFreeChildAdapter @ 0x1405116C0 (HalpDmaFreeChildAdapter.c)
 *     HalFlushAdapterBuffersEx @ 0x140514930 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140514BC0 (HalMapTransferEx.c)
 *     CcLockSystemCacheBuffer @ 0x140537CB0 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x140538F40 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x14053FC78 (HvlGetCoverageData.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405517A4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopMcReleaseMdl @ 0x14055F834 (IopMcReleaseMdl.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     DifIoFreeMdlWrapper @ 0x1405DF960 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140641714 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642E18 (MiPrepareImagePagesForHotPatch.c)
 *     MiDeleteImageCreationMdls @ 0x1406A7448 (MiDeleteImageCreationMdls.c)
 *     CcMdlRead @ 0x14073EB90 (CcMdlRead.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140765084 (WbMakeUserExecutablePagesKernelWritable.c)
 *     CcMdlReadComplete2 @ 0x1407C3B3C (CcMdlReadComplete2.c)
 *     sub_1407D91F8 @ 0x1407D91F8 (sub_1407D91F8.c)
 *     FsRtlpFreeMdlChain @ 0x14093F108 (FsRtlpFreeMdlChain.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940670 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940710 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941798 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409448E0 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094E560 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140965FEC (PnprFreeMappingReserve.c)
 *     AlpcpFreeCompletionList @ 0x1409798C4 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x140979920 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988D2C (PopReadPagesFromHiberFile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A34578 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140A347F0 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A3A3B4 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140A3BF50 (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x140A425D0 (NtFreeUserPhysicalPages.c)
 *     sub_140A4DD70 @ 0x140A4DD70 (sub_140A4DD70.c)
 *     ViAllocateMapRegisterFile @ 0x140AC7CA4 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140AC8AB0 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
