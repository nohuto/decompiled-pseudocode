/*
 * XREFs of MiRemoveMappedPtes @ 0x140274860
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiTryDeleteTransitionPte @ 0x140239CA8 (MiTryDeleteTransitionPte.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiRemoveViewsFromSection @ 0x140286884 (MiRemoveViewsFromSection.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiAppendWsleCluster @ 0x1402CF100 (MiAppendWsleCluster.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  int v10; // edx
  ULONG_PTR *v11; // rax
  __int64 v12; // rbx
  unsigned __int8 v13; // bl
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rbx
  ULONG_PTR v18; // rsi
  int v19; // eax
  __int64 v20; // rbp
  BOOL v21; // edi
  KIRQL v22; // bl
  __int64 result; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rax
  __int64 SubsectionNode; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+28h] [rbp-90h] BYREF
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  _OWORD v37[6]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v39; // [rsp+C8h] [rbp+10h]
  __int64 v40; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0LL;
  v32 = 0LL;
  v40 = 0LL;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = **(_QWORD **)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 32) >> 12;
  BugCheckParameter2 = *(_QWORD *)(a1 + 48);
  v34 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v36 = v6;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v37, 0, 32);
  v9 = 0LL;
  v10 = *(_DWORD *)(v6 + 56);
  if ( (v10 & 0x400) != 0 )
    v11 = &MiSystemPartition;
  else
    v11 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(v6 + 60) & 0x3FF));
  v35 = v11;
  if ( (v10 & 0x420) != 0 )
  {
    v12 = 0LL;
    v33 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = MiOffsetToProtos(v6, v12, &v32);
    v33 = v7 + v32;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v6, v12 + (v7 << 12) - 1, 0LL);
    v18 = BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    goto LABEL_24;
  }
  v39 = MiLockWorkingSetShared(a2);
  v13 = v39;
  if ( !v7 )
    goto LABEL_21;
  v14 = v34;
  v15 = 0LL;
  do
  {
    if ( !v9 || (v8 & 0xFFF) == 0 )
    {
      v15 += MiTerminateWsleCluster(v37);
      if ( v9 )
        MiUnlockPageTableInternal(a2, v9);
      v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v9, 0LL);
    }
    v16 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v28 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        v29 = v16 | 0x20;
        if ( (v28 & 0x20) == 0 )
          v29 = *(_QWORD *)v8;
        v16 = v29;
        if ( (v28 & 0x42) != 0 )
          v16 = v29 | 0x42;
      }
    }
    if ( !v16 )
      goto LABEL_18;
    if ( (v16 & 1) != 0 )
    {
      if ( dword_140C52B68 )
        MI_WSLE_LOG_ACCESS(a2, v8);
      MiAppendWsleCluster(v37, a2, v8);
      goto LABEL_18;
    }
    if ( (v16 & 0x400) == 0 )
    {
      if ( (v16 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v14, v16, 1LL);
        v17 = ZeroPte;
        if ( !(unsigned int)MiPteInShadowRange(v8) )
          goto LABEL_16;
        if ( (unsigned int)MiPteHasShadow() )
        {
LABEL_77:
          if ( HIBYTE(word_140C51864) || (v17 & 1) == 0 )
            goto LABEL_67;
LABEL_66:
          v17 |= 0x8000000000000000uLL;
LABEL_67:
          *(_QWORD *)v8 = v17;
          MiWritePteShadow(v8, v17);
          goto LABEL_17;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
          || (ZeroPte & 1) == 0 )
        {
          goto LABEL_16;
        }
LABEL_84:
        v17 |= 0x8000000000000000uLL;
        goto LABEL_16;
      }
      v30 = MiTryDeleteTransitionPte(v8);
      if ( v30 == 1 )
        continue;
      if ( v30 == 3 )
        ++v15;
      v17 = ZeroPte;
      if ( !(unsigned int)MiPteInShadowRange(v8) )
        goto LABEL_16;
      if ( (unsigned int)MiPteHasShadow() )
        goto LABEL_77;
LABEL_68:
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
        || (v17 & 1) == 0 )
      {
        goto LABEL_16;
      }
      goto LABEL_84;
    }
    v17 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v8) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( HIBYTE(word_140C51864) || (ZeroPte & 1) == 0 )
          goto LABEL_67;
        goto LABEL_66;
      }
      goto LABEL_68;
    }
LABEL_16:
    *(_QWORD *)v8 = v17;
LABEL_17:
    v13 = v39;
LABEL_18:
    v8 += 8LL;
    --v7;
    if ( (v8 & 0x78) == 0 )
    {
      v25 = (*(_BYTE *)(a2 + 184) & 7) == 2 ? &unk_140C53D00 : (_DWORD *)(a2 + 192);
      if ( (*v25 & 0x40000000) != 0 || (unsigned int)MiPageTableLockIsContended(a2, v9) || KeShouldYieldProcessor() )
      {
        v15 += MiTerminateWsleCluster(v37);
        MiUnlockPageTableInternal(a2, v9);
        MiUnlockWorkingSetShared(a2, v13);
        v9 = 0LL;
        MiLockWorkingSetShared(a2);
      }
    }
  }
  while ( v7 );
  v6 = v36;
  v40 = v15;
LABEL_21:
  v40 += MiTerminateWsleCluster(v37);
  if ( v9 )
    MiUnlockPageTableInternal(a2, v9);
  MiUnlockWorkingSetShared(a2, v13);
  v18 = BugCheckParameter2;
LABEL_24:
  v19 = *(_DWORD *)(v6 + 56);
  if ( (v19 & 0x20) != 0 || (v19 & 0x400) != 0 )
  {
    v20 = a1;
    v18 = 0LL;
    if ( (v19 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v6);
  }
  else
  {
    v20 = a1;
  }
  v21 = *(_QWORD *)(v6 + 64) != 0LL;
  v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
  if ( v18 )
    v3 = MiRemoveViewsFromSection(v18);
  --*(_QWORD *)(v6 + 48);
  --*(_QWORD *)(v6 + 40);
  result = MiCheckControlArea(v6, v22);
  v24 = *(_QWORD *)(v20 + 40);
  if ( v24 )
  {
    if ( !v40 || (v24 -= v40) != 0 )
      result = MiReturnCommit(v34, v24);
  }
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v35, v21, v3);
  return result;
}
