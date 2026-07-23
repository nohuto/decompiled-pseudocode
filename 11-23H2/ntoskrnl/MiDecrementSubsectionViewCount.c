/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x14029FD60
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140218EF0 (MiDeleteSubsectionPages.c)
 *     MiDeleteControlArea @ 0x1402199D0 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiAppendSubsectionChain @ 0x140293568 (MiAppendSubsectionChain.c)
 *     MiRemoveViewsFromSection @ 0x14029FB78 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x14029FCC0 (MiDecrementSubsections.c)
 *     MmPurgeSection @ 0x1402DCB60 (MmPurgeSection.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpControlAreaRefs @ 0x14062644C (MiUpControlAreaRefs.c)
 *     MiExtendSection @ 0x1407069E4 (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140214D6C (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402ED6A0 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14066B618 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14066B9E4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(__int64 *BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  __int16 v7; // dx
  _KPROCESS *Process; // rax
  void *v9; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v4 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2) )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v9 = 0LL;
    }
    else if ( (v7 & 0x80u) != 0 )
    {
      v9 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = (v7 & 0x100) != 0
         ? *(void **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(Process[1].Affinity.StaticBitmap[25] + 366))
         : *(void **)(qword_140C673C8 + 8LL * Process[1].IdealProcessor[25]);
    }
    if ( v9 != *(void **)(qword_140C673C8 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v11 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v12 = *(_DWORD *)(v11 + 48) & 0x3FFFFFFF;
      if ( v12 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v12 - 1));
        if ( v12 == 1 )
          v4 = MiComputeCrossPartitionSectionCharges(v13);
      }
    }
  }
  if ( *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x20) == 0 && (*(_BYTE *)(v3 + 34) & 1) == 0 )
  {
    v5 = *(_QWORD *)(v3 + 96);
    if ( !v5 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v3, 0LL, 0LL);
    *(_QWORD *)(v3 + 96) = v5 - 1;
  }
  return v4;
}
