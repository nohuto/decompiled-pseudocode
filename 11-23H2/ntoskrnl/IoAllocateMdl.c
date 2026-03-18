/*
 * XREFs of IoAllocateMdl @ 0x14022E2A0
 * Callers:
 *     MiCreateMdl @ 0x1406A8F3C (MiCreateMdl.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     CcMdlRead @ 0x14073E9A0 (CcMdlRead.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140764E94 (WbMakeUserExecutablePagesKernelWritable.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     FsRtlKernelFsControlFile @ 0x1407728C0 (FsRtlKernelFsControlFile.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     HalGetAdapterV3 @ 0x140827530 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827AC0 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941598 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x14094405C (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094DD88 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x140966274 (PnprInitializeMappingReserve.c)
 *     AlpcpInitializeCompletionList @ 0x140979720 (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140988B2C (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409ED214 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1409EDA44 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A05210 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A342C8 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A3A104 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 *     sub_140A4DAC0 @ 0x140A4DAC0 (sub_140A4DAC0.c)
 *     IovAllocateMdl @ 0x140AC0DE0 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC5490 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140AC7CB4 (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140ACB1A0 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
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
