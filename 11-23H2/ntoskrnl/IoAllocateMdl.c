/*
 * XREFs of IoAllocateMdl @ 0x14022E3B0
 * Callers:
 *     MiCreateMdl @ 0x1406A8F3C (MiCreateMdl.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     CcMdlRead @ 0x14073EB90 (CcMdlRead.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140765084 (WbMakeUserExecutablePagesKernelWritable.c)
 *     BuildQueryDirectoryIrp @ 0x140765A90 (BuildQueryDirectoryIrp.c)
 *     FsRtlKernelFsControlFile @ 0x140772AB0 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x1407CA290 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBE60 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7340 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E85C0 (NtWriteFileGather.c)
 *     HalGetAdapterV3 @ 0x140827830 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827DC0 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941798 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x14094425C (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945CC0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094DF88 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x140966474 (PnprInitializeMappingReserve.c)
 *     AlpcpInitializeCompletionList @ 0x140979920 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988D2C (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409ED4A4 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1409EDCD4 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A34578 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A3A3B4 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x140A425D0 (NtFreeUserPhysicalPages.c)
 *     sub_140A4DD70 @ 0x140A4DD70 (sub_140A4DD70.c)
 *     IovAllocateMdl @ 0x140AC0DD0 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC5480 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140AC7CA4 (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140ACB190 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int16 v6; // si
  CSHORT v8; // r15
  unsigned __int64 v9; // rbx
  unsigned int v10; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbp
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PMDL MdlAddress; // rdx
  struct _MDL *i; // rcx

  v6 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  v10 = 8 * v9 + 48;
  if ( v10 > 0xB8 )
    goto LABEL_12;
  v8 = 8;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 184;
  P = CurrentPrcb->PPLookasideList[3].P;
  ++P->TotalAllocates;
  result = (PMDL)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_3;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[3].L;
  ++L->TotalAllocates;
  result = (PMDL)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (result = (PMDL)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_3:
    LODWORD(result->Next) = CurrentPrcb->Number;
  }
  if ( result )
  {
    LOWORD(Number) = result->Next;
  }
  else
  {
LABEL_12:
    result = (PMDL)ExAllocatePool2(66LL, v10, 543974477LL);
    if ( !result )
      return 0LL;
    Number = KeGetPcr()->Prcb.Number;
  }
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->Size = 8 * (v9 + 6);
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v6 & 0xFFF;
  result->ByteCount = Length;
  result->MdlFlags = v8;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
