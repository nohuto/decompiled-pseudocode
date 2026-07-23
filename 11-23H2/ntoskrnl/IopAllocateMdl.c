/*
 * XREFs of IopAllocateMdl @ 0x1402FC37C
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
 *     CcZeroDataInCache @ 0x1402FC1A8 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x140369330 (CcPrepareMdlWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 *     MiZeroPageWrite @ 0x1403C19D4 (MiZeroPageWrite.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x1403D41D0 (HalBuildMdlFromScatterGatherListV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FFC74 (HalpDmaCheckMdlAccessibility.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x14050F010 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcLockSystemCacheBuffer @ 0x140537CB0 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x14053FC78 (HvlGetCoverageData.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405517A4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     MmAllocateMdlForIoSpace @ 0x14061F0A0 (MmAllocateMdlForIoSpace.c)
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642E18 (MiPrepareImagePagesForHotPatch.c)
 *     IopMcCreatePartialMdl @ 0x1409518CC (IopMcCreatePartialMdl.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, int a6)
{
  __int16 v6; // r15
  unsigned __int64 v8; // rdi
  __int16 v9; // r13
  unsigned int v10; // r12d
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v13; // rcx
  unsigned int Number; // eax
  __int64 result; // rax
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _QWORD **v21; // rax
  _QWORD *i; // rdx

  v6 = a1;
  v8 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  v9 = 0;
  v10 = a6 + 48 + 8 * v8;
  if ( v10 > 0xB8 )
    goto LABEL_8;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 8;
  v10 = 184;
  P = CurrentPrcb->PPLookasideList[3].P;
  ++P->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v13 )
    goto LABEL_3;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[3].L;
  ++L->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v13
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v13 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_3:
    LODWORD(v13->Next) = CurrentPrcb->Number;
  }
  if ( v13 )
  {
    LOWORD(Number) = v13->Next;
  }
  else
  {
LABEL_8:
    result = ExAllocatePool2(66LL, v10, 543974477LL);
    v13 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    Number = KeGetPcr()->Prcb.Number;
  }
  *((_WORD *)&v13->Next + 6) = Number;
  v13->Next = 0LL;
  *((_WORD *)&v13->Next + 4) = 8 * (v8 + 6);
  v13[2].Next = (_SLIST_ENTRY *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  *((_DWORD *)&v13[2].Next + 3) = v6 & 0xFFF;
  *((_DWORD *)&v13[2].Next + 2) = a2;
  *((_WORD *)&v13->Next + 5) = v9;
  if ( a5 )
  {
    if ( a3 )
    {
      v21 = *(_QWORD ***)(a5 + 8);
      for ( i = *v21; i; i = (_QWORD *)*i )
        v21 = (_QWORD **)i;
      *v21 = &v13->Next;
    }
    else
    {
      *(_QWORD *)(a5 + 8) = v13;
    }
  }
  return (__int64)v13;
}
