/*
 * XREFs of MiRemoveMappedPtes @ 0x1402E6870
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x14021941C (MiReleasePageFileSpace.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiAppendWsleCluster @ 0x140273400 (MiAppendWsleCluster.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140289550 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSection @ 0x14029FB78 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiTryDeleteTransitionPte @ 0x1402F4398 (MiTryDeleteTransitionPte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // r12
  int v5; // eax
  __int64 *v6; // r8
  unsigned __int64 v7; // rdi
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  void *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // bl
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rsi
  ULONG_PTR v25; // r14
  int v26; // eax
  __int64 v27; // rbp
  BOOL v28; // edi
  KIRQL v29; // bl
  __int64 v30; // rdx
  __int64 v31; // r9
  _QWORD *SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int *v43; // [rsp+20h] [rbp-98h]
  unsigned __int64 v44; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v45; // [rsp+30h] [rbp-88h]
  __int64 v46; // [rsp+38h] [rbp-80h]
  void *v47; // [rsp+40h] [rbp-78h]
  __int64 v48; // [rsp+48h] [rbp-70h]
  __int128 v49; // [rsp+50h] [rbp-68h] BYREF
  __int128 v50; // [rsp+60h] [rbp-58h]
  unsigned __int8 v52; // [rsp+C8h] [rbp+10h]
  int v53; // [rsp+D0h] [rbp+18h]
  __int64 v54; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 4;
  v44 = 0LL;
  v54 = 0LL;
  v6 = *(__int64 **)(a1 + 48);
  if ( (v2 & 4) != 0 )
    v5 = 24;
  v7 = *(_QWORD *)(a1 + 88);
  v53 = v5;
  v9 = *v6;
  v10 = *(_QWORD *)(a1 + 32) >> 12;
  v46 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v43 = (unsigned int *)v6;
  v48 = v9;
  v11 = *(_DWORD *)(v9 + 56);
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0LL;
  v50 = 0LL;
  DWORD2(v50) = 4;
  v49 = 0LL;
  if ( (v11 & 0x400) != 0 )
    v14 = &MiSystemPartition;
  else
    v14 = *(void **)(qword_140C673C8 + 8LL * (*(_WORD *)(v9 + 60) & 0x3FF));
  v47 = v14;
  if ( (v11 & 0x420) != 0 )
  {
    v15 = 0LL;
    v45 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24) << 12;
    v43 = MiOffsetToProtos(v9, v15, &v44);
    v45 = v10 + v44;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v9, v15 + (v10 << 12) - 1, 0);
    v25 = (ULONG_PTR)v43;
    MiDecrementLargeSubsections(v43, SubsectionNode);
    v24 = 0LL;
    goto LABEL_26;
  }
  v52 = MiLockWorkingSetShared(a2);
  v16 = v52;
  if ( !v10 )
    goto LABEL_23;
  v17 = v46;
  v18 = 0LL;
  do
  {
    if ( !v13 || (v12 & 0xFFF) == 0 )
    {
      v18 += MiTerminateWsleCluster((__int64 *)&v49);
      if ( v13 )
        MiUnlockPageTableInternal(a2, v13);
      v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v13, 0, v31);
    }
    v19 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v34 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
        v35 = v19 | 0x20;
        if ( (v34 & 0x20) == 0 )
          v35 = *(_QWORD *)v12;
        v19 = v35;
        if ( (v34 & 0x42) != 0 )
          v19 = v35 | 0x42;
      }
    }
    if ( !v19 )
      goto LABEL_20;
    if ( (v19 & 1) != 0 )
    {
      if ( dword_140C67FE8 )
        MI_WSLE_LOG_ACCESS(a2, v12);
      MiAppendWsleCluster((__int64)&v49, a2, v12);
      goto LABEL_20;
    }
    if ( (v19 & 0x400) == 0 )
    {
      if ( (v19 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v17, v19, 1);
        v20 = ZeroPte;
        if ( !MiPteInShadowRange(v12) )
          goto LABEL_18;
        if ( (unsigned int)MiPteHasShadow(v41, v40, v42) )
        {
LABEL_77:
          if ( HIBYTE(word_140C66CFC) || (v20 & 1) == 0 )
            goto LABEL_67;
LABEL_66:
          v20 |= 0x8000000000000000uLL;
LABEL_67:
          *(_QWORD *)v12 = v20;
          MiWritePteShadow(v12, v20);
          goto LABEL_19;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_18;
        }
LABEL_84:
        v20 |= 0x8000000000000000uLL;
        goto LABEL_18;
      }
      v36 = MiTryDeleteTransitionPte(v12);
      if ( v36 == 1 )
        continue;
      if ( v36 == 3 )
        ++v18;
      v20 = ZeroPte;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow(v38, v37, v39) )
        goto LABEL_77;
LABEL_68:
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (v20 & 1) == 0 )
      {
        goto LABEL_18;
      }
      goto LABEL_84;
    }
    v20 = ZeroPte;
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow(v22, v21, v23) )
      {
        if ( HIBYTE(word_140C66CFC) || (ZeroPte & 1) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      goto LABEL_68;
    }
LABEL_18:
    *(_QWORD *)v12 = v20;
LABEL_19:
    v16 = v52;
LABEL_20:
    v12 += 8LL;
    --v10;
    if ( (v12 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(a2)
       || (unsigned int)MiPageTableLockIsContended(a2, v13)
       || KeShouldYieldProcessor()) )
    {
      v18 += MiTerminateWsleCluster((__int64 *)&v49);
      MiUnlockPageTableInternal(a2, v13);
      MiUnlockWorkingSetShared(a2, v16);
      v13 = 0LL;
      MiLockWorkingSetShared(a2);
    }
  }
  while ( v10 );
  v9 = v48;
  v54 = v18;
LABEL_23:
  v24 = MiTerminateWsleCluster((__int64 *)&v49) + v54;
  if ( v13 )
    MiUnlockPageTableInternal(a2, v13);
  MiUnlockWorkingSetShared(a2, v16);
  v25 = (ULONG_PTR)v43;
LABEL_26:
  v26 = *(_DWORD *)(v9 + 56);
  if ( (v26 & 0x20) != 0 || (v26 & 0x400) != 0 )
  {
    v27 = a1;
    v25 = 0LL;
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 && (v26 & 0x20) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v9);
  }
  else
  {
    v27 = a1;
  }
  v28 = *(_QWORD *)(v9 + 64) != 0LL;
  v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
  if ( v25 )
    v4 = MiRemoveViewsFromSection(v25, v45, v53);
  --*(_QWORD *)(v9 + 48);
  --*(_QWORD *)(v9 + 40);
  MiCheckControlArea(v9, v29);
  v30 = *(_QWORD *)(v27 + 40);
  if ( v30 )
  {
    if ( !v24 || (v30 -= v24) != 0 )
      MiReturnCommit(v46, v30);
  }
  if ( v4 )
    MiReturnCrossPartitionSectionCharges(v47, v28, v4);
}
