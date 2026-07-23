/*
 * XREFs of MiGatherMappedPages @ 0x140297FB4
 * Callers:
 *     MiMappedPageWriter @ 0x140391790 (MiMappedPageWriter.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C878 (IoDiskIoAttributionDereference.c)
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiBuildMappedCluster @ 0x14021C0D0 (MiBuildMappedCluster.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcNotifyOfMappedWrite @ 0x1402984D4 (CcNotifyOfMappedWrite.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F4D0C (FsRtlReleaseFileForModWrite.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfnList @ 0x140339E00 (MiDereferenceControlAreaPfnList.c)
 *     MiReferencePageForModifiedWrite @ 0x140349F80 (MiReferencePageForModifiedWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14034A23C (FsRtlAcquireFileForModWriteEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     IoAsynchronousPageWrite @ 0x140369BAC (IoAsynchronousPageWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x14063DA50 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  int v6; // ebp
  __int64 v7; // rbx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  struct _FILE_OBJECT *v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // eax
  int v23; // edx
  __int64 v24; // rax
  _QWORD *v25; // rdi
  unsigned int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int8 v32; // bl
  unsigned int v34; // edx
  int v35; // edx
  int v36; // r8d
  unsigned __int64 v37; // rax
  volatile LONG *v38; // rsi
  unsigned __int64 v39; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  unsigned __int64 v44; // rbx
  __int64 v45; // rbx
  int v46; // r15d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  bool v50; // zf
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  int v59; // eax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  __int64 v68; // [rsp+60h] [rbp-58h] BYREF
  __int64 v69; // [rsp+68h] [rbp-50h]
  __int64 v70; // [rsp+70h] [rbp-48h]
  __int64 v71; // [rsp+78h] [rbp-40h]
  unsigned int v72; // [rsp+C8h] [rbp+10h]
  __int64 v74; // [rsp+D8h] [rbp+20h]
  unsigned int v75; // [rsp+D8h] [rbp+20h]

  v70 = 0LL;
  v3 = a2;
  v68 = 0LL;
  if ( a2 >= 0x10 )
  {
    v3 = 0;
    v5 = (_QWORD *)(a1 + 5328);
    do
    {
      if ( *v5 != 0x3FFFFFFFFFLL )
        goto LABEL_6;
      ++v3;
      v5 += 11;
    }
    while ( v3 < 0x10 );
    if ( v3 == 16 )
      return 0LL;
  }
LABEL_6:
  v6 = 0;
  v69 = a3 + 208;
  if ( *(_BYTE *)(a1 + 1043) )
  {
    v38 = (volatile LONG *)(a1 + 1036);
    v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1036));
    if ( *(_BYTE *)(a1 + 1045) )
    {
      *(_BYTE *)(a1 + 1045) = 0;
      *(_BYTE *)(a1 + 1043) = 0;
      v6 = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v38);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v39 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
        v50 = (v43 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v43;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v39);
  }
  if ( *(_BYTE *)(a1 + 1072) || v6 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v74 = 88LL * v3;
  v7 = *(_QWORD *)(v74 + a1 + 5328);
  if ( v7 == 0x3FFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( v7 != *(_QWORD *)(v74 + a1 + 5328) )
      goto LABEL_37;
    v10 = *(_QWORD *)(v8 + 16);
    if ( qword_140C65B40 && (v10 & 0x10) == 0 )
      v10 &= ~qword_140C65B40;
    v11 = v10 >> 16;
    v12 = *(_QWORD *)v11;
    v13 = *(_DWORD *)(*(_QWORD *)v11 + 56LL);
    if ( (v13 & 0x20) != 0 )
    {
      MiUnlinkPageFromListEx(v8, 0LL);
      v44 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8 + 16) >> 5) & 0x1F;
      if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v8);
        if ( (_bittest((const signed __int32 *)&MiFlags, 0xFu) & ((v44 & 2) != 0)) != 0
          && (*(_DWORD *)(v12 + 92) & 0xC0000) != 0 )
        {
          MiMarkPfnVerified(v8, 32 * ((MiFlags & 0x10000) == 0) + 6);
        }
      }
      v45 = MiSwizzleInvalidPte(32LL * (unsigned int)v44);
      v46 = 0;
      if ( !MiPteInShadowRange(v8 + 16) )
        goto LABEL_71;
      if ( (unsigned int)MiPteHasShadow(v48, v47, v49) )
      {
        v46 = 1;
        if ( !HIBYTE(word_140C66CFC) )
        {
          v50 = (v45 & 1) == 0;
          goto LABEL_69;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v50 = (v45 & 1) == 0;
LABEL_69:
        if ( !v50 )
          v45 |= 0x8000000000000000uLL;
      }
LABEL_71:
      *(_QWORD *)(v8 + 16) = v45;
      if ( v46 )
        MiWritePteShadow(v8 + 16, v45);
      MiDereferenceControlAreaPfnList(v12, 0LL, v49, 3LL);
      v34 = 8;
      goto LABEL_36;
    }
    if ( (v13 & 8) == 0 )
      break;
LABEL_35:
    MiUnlinkPageFromListEx(v8, 0LL);
    v34 = 16;
LABEL_36:
    MiInsertPageInList(v8, v34);
LABEL_37:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v51 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v51 >= 2u )
      {
        v52 = KeGetCurrentPrcb();
        v53 = v52->SchedulerAssist;
        v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v50 = (v54 & v53[5]) == 0;
        v53[5] &= v54;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick(v52);
      }
    }
    __writecr8(v9);
    v7 = *(_QWORD *)(v74 + a1 + 5328);
    if ( v7 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( (*(_DWORD *)(v12 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    goto LABEL_35;
  }
  v14 = *(_QWORD *)(v12 + 120);
  ++*(_DWORD *)(v12 + 76);
  v15 = 8 * v14;
  if ( 8 * v14 && _InterlockedIncrement64((volatile signed __int64 *)(v15 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  MiReferencePageForModifiedWrite(v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v55 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v55 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v55 >= 2u )
    {
      v56 = KeGetCurrentPrcb();
      v57 = v56->SchedulerAssist;
      v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v50 = (v58 & v57[5]) == 0;
      v57[5] &= v58;
      if ( v50 )
        KiRemoveSystemWorkPriorityKick(v56);
    }
  }
  __writecr8(v9);
  v16 = MiReferenceControlAreaFileWithTag(v12, 1666411853LL);
  v50 = *(_BYTE *)(a1 + 1043) == 0;
  v17 = (struct _FILE_OBJECT *)v16;
  v18 = *(_QWORD *)(v16 + 40);
  v71 = v18;
  if ( v50 )
    v19 = CcNotifyOfMappedWrite(v18, v68, 0LL);
  else
    v19 = 0;
  v20 = MiBuildMappedCluster((_QWORD *)v8, v69, v19);
  v69 = v20;
  *(_QWORD *)(a3 + 200) = v20;
  *(_QWORD *)(a3 + 160) = v12;
  v21 = MiStartingOffset(
          v11,
          *(_QWORD *)(48LL * *(_QWORD *)(v20 + 48) - 0x220000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v68 = v21;
  v22 = *(_DWORD *)(v20 + 40);
  v23 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 136) = v22;
  v75 = v22 >> 12;
  *(_DWORD *)(a3 + 140) = (v22 >> 12) - 1;
  v24 = *(unsigned int *)(v20 + 40);
  v25 = (_QWORD *)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v70 = v21 + v24;
  if ( (v17->DeviceObject->Characteristics & 0x10) != 0 )
    v26 = v23 | 2;
  else
    v26 = v23 & 0xFFFFFFFD;
  v72 = 0;
  *(_DWORD *)(a3 + 40) = v26;
  v27 = *(_DWORD *)(v12 + 56);
  if ( (v27 & 4) != 0 )
  {
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
    v29 = -1073741740;
    v72 = 1;
    goto LABEL_30;
  }
  if ( (v27 & 0x10) != 0 )
  {
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
    v29 = -1073741672;
    v72 = 1;
    goto LABEL_30;
  }
  *(_QWORD *)(a3 + 152) = v17;
  if ( (int)FsRtlAcquireFileForModWriteEx(v17) < 0 )
  {
    v29 = -1073741740;
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
LABEL_29:
    *v25 = 0LL;
    goto LABEL_30;
  }
  v28 = CcNotifyOfMappedWrite(v71, v21, *(unsigned int *)(v69 + 40));
  if ( !v28 )
  {
    FsRtlReleaseFileForModWrite(v17);
    ObFastDereferenceObjectDeferDelete(v12 + 64, v17, 1666411853LL);
    v29 = -1073741740;
    v72 = 1;
    goto LABEL_29;
  }
  if ( v28 == 1 )
    *v25 |= 1uLL;
  v35 = 2;
  *(_QWORD *)(a3 + 176) = v21;
  v36 = *(_DWORD *)(a1 + 728);
  v37 = *(_QWORD *)(a1 + 17216);
  if ( v36 )
  {
    if ( v37 < 0x420 )
    {
      v59 = v36 - 1;
      goto LABEL_96;
    }
    *(_DWORD *)(a1 + 728) = 0;
  }
  else
  {
    if ( v37 >= 0x120 )
      goto LABEL_45;
    v59 = v37 < 0xA0 ? 32 : 8;
LABEL_96:
    v35 = 4;
    *(_DWORD *)(a1 + 728) = v59;
  }
LABEL_45:
  __incgsdword(0x2EB4u);
  __addgsdword(0x2EB0u, v75);
  if ( (*(_BYTE *)(v12 + 62) & 0xC) != 0 )
  {
    MiFlushFileOnlyMdl(a3, v69, v68);
    v32 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(a3, a3 + 16, 0LL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v60 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v60 <= 0xFu && v32 <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << (v32 + 1));
        v50 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
    goto LABEL_31;
  }
  v29 = IoAsynchronousPageWrite(
          (_DWORD)v17,
          v69,
          (unsigned int)&v68,
          (unsigned int)MiWriteComplete,
          a3,
          v35,
          0,
          0,
          v15,
          a3 + 16,
          a3 + 32);
  if ( (v29 & 0xC0000000) == 0xC0000000 )
  {
LABEL_30:
    v30 = a3;
    *(_QWORD *)(a3 + 24) = 0LL;
    v31 = a3 + 16;
    *(_DWORD *)(a3 + 16) = v29;
    v32 = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiWriteComplete(v30, v31, v72);
    if ( (_DWORD)KiIrqlFlags )
    {
      v64 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v64 <= 0xFu && v32 <= 0xFu && v64 >= 2u )
      {
        v65 = KeGetCurrentPrcb();
        v66 = v65->SchedulerAssist;
        v67 = ~(unsigned __int16)(-1LL << (v32 + 1));
        v50 = (v67 & v66[5]) == 0;
        v66[5] &= v67;
        if ( v50 )
          KiRemoveSystemWorkPriorityKick(v65);
      }
    }
LABEL_31:
    __writecr8(v32);
  }
  if ( v15 )
    IoDiskIoAttributionDereference(v15);
  return 1LL;
}
