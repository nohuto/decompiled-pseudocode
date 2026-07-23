/*
 * XREFs of MiMigratePfn @ 0x140262FC0
 * Callers:
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140217260 (MiLocateAddress.c)
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiCopyPfnEntryEx @ 0x140219D80 (MiCopyPfnEntryEx.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiNodeFromFaultPacket @ 0x140261040 (MiNodeFromFaultPacket.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x140274A90 (MiObtainFaultCharges.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140287758 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DAF84 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
 *     MiIsPfnCommitNotCharged @ 0x1402DC180 (MiIsPfnCommitNotCharged.c)
 *     MiLockProtoPoolPage @ 0x1402DD200 (MiLockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x1402E12E4 (MiGetInPageSupportBlock.c)
 *     MiFinalizePageAttribute @ 0x1402E15E4 (MiFinalizePageAttribute.c)
 *     MiReturnFreeZeroPage @ 0x1402E7F74 (MiReturnFreeZeroPage.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiUpdateTransitionPteFrame @ 0x140330A1C (MiUpdateTransitionPteFrame.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 *     MiCapturePageFileInfoInline @ 0x1403487C4 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x14035F870 (MiReturnFaultCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMigratePfn(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int8 v4; // cf
  unsigned int *p_PageColor; // r13
  unsigned int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // ebx
  unsigned __int64 v16; // rbp
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r12
  unsigned __int64 v19; // rax
  __int64 **Address; // rax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // r15d
  int v25; // ebp
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 **v28; // r10
  unsigned __int32 v29; // r15d
  unsigned int *v30; // rbp
  unsigned int *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ebp
  ULONG_PTR Page; // rax
  __int64 v36; // r8
  __int64 **v37; // rcx
  __int64 v38; // r15
  ULONG_PTR v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int *v43; // rbx
  __int64 v44; // rbp
  __int64 v45; // r13
  unsigned int v46; // ebx
  _QWORD *v47; // r12
  __int64 v48; // rax
  __int64 updated; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  ULONG_PTR v55; // rcx
  ULONG_PTR v56; // r12
  __int16 v57; // si
  __int64 v58; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v60; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v62; // zf
  int v63; // [rsp+20h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+28h] [rbp-60h]
  __int64 **v65; // [rsp+30h] [rbp-58h]
  __int64 v66; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v67; // [rsp+98h] [rbp+10h] BYREF
  __int64 v68; // [rsp+A0h] [rbp+18h]
  __int64 *v69; // [rsp+A8h] [rbp+20h]

  v69 = a4;
  v68 = a3;
  v4 = _bittest64((const signed __int64 *)(a2 + 40), 0x35u);
  p_PageColor = *(unsigned int **)(a1 + 56);
  v67 = *(_QWORD *)a1;
  v66 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    return a2;
  v8 = 1;
  if ( (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL)
    || (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return a2;
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 < 0 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    if ( (v11 & 0x400) != 0 )
    {
      if ( (v10 & 0x20000000000000LL) != 0 )
        return a2;
      if ( qword_140C65C40 && (v11 & 0x10) == 0 )
        v11 &= ~qword_140C65C40;
      v12 = v11 >> 16;
      v13 = *(_QWORD *)v12;
      if ( v12 != *(_QWORD *)v12 + 128LL
        && (*(_DWORD *)(v13 + 56) & 0x20) != 0
        && (*(_DWORD *)(v13 + 92) & 0x20000) != 0 )
      {
        return a2;
      }
    }
  }
  v14 = 0LL;
  v15 = MiNodeFromFaultPacket(a1);
  if ( !v15 )
  {
    v16 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_QWORD *)(a1 + 16) & 1) == 0 )
      v16 = 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
      goto LABEL_32;
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v19 = Process[1].ActiveProcessors.StaticBitmap[28];
    if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_39;
    if ( !v16 && !*(_QWORD *)(v19 + 408) && !*(_QWORD *)(v19 + 416) && !*(_BYTE *)(v19 + 340) )
      goto LABEL_31;
    MiLockVadTree(1LL);
    Address = MiLocateAddress(*(_QWORD *)a1);
    LOBYTE(v21) = 17;
    v65 = Address;
    MiUnlockVadTree(1LL, v21);
    if ( !v65
      || (v22 = *((_DWORD *)v65 + 12), (v15 = (v22 >> 12) & 0x7F) == 0)
      && ((v22 & 0x200000) != 0 || (v27 = *v65[9]) == 0 || (v15 = (*(_DWORD *)(v27 + 56) >> 20) & 0x7F) == 0) )
    {
LABEL_39:
      if ( v16 && CurrentThread->ApcStateIndex == 1 )
        v15 = Process->IdealNode[CurrentThread->AffinityPrimaryGroup] + 1;
      if ( !v15 )
        goto LABEL_31;
    }
  }
  *(_DWORD *)(a1 + 80) |= 0x10000u;
  if ( !v15 )
  {
LABEL_31:
    v8 = 1;
LABEL_32:
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    goto LABEL_33;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 1;
  NodeShiftedColor = (v15 - 1) << byte_140C65B8D;
LABEL_33:
  v25 = (1 << byte_140C65B8E) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v26 = NodeShiftedColor >> byte_140C65B8D;
  if ( v26 == *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 8) )
    return a2;
  v28 = *(__int64 ***)(qword_140C674C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v65 = v28;
  v29 = v25 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) | NodeShiftedColor;
  v30 = (unsigned int *)(qword_140C65B98 + 4LL * v26 * (unsigned __int16)KeNumberNodes);
  v31 = &v30[(unsigned __int16)KeNumberNodes];
  if ( v30 < v31 )
  {
    while ( 1 )
    {
      v32 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
      v33 = *v30;
      if ( (_DWORD)v33 == *(_DWORD *)(v32 + 8) )
        return a2;
      v28 = v65;
      if ( *(_OWORD *)&v65[2][3176 * v33 + 2844] == 0LL && ++v30 < v31 )
        continue;
      break;
    }
  }
  if ( *(__int64 *)(a2 + 40) >= 0 || (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v8 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged(a2) )
      v8 = 5;
  }
  v34 = 1;
  if ( !MiObtainFaultCharges(v28, 1LL, v8) )
    return a2;
  if ( (v66 & 1) != 0 && *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v67) == 12 )
    v34 = 9;
  Page = MiGetPage(v65, v29, v34);
  BugCheckParameter3 = Page;
  if ( Page == -1LL )
  {
    v36 = v8;
    v37 = v65;
LABEL_61:
    MiReturnFaultCharges(v37, 1LL, v36);
    return a2;
  }
  v38 = 48 * Page - 0x220000000000LL;
  v39 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * Page) >> 4);
  if ( v26 != *(_DWORD *)(MiSearchNumaNodeTable(v39) + 8) )
  {
    v43 = (unsigned int *)(qword_140C65B98 + 4LL * v26 * (unsigned __int16)KeNumberNodes);
    if ( v43 < v31 )
    {
      while ( *v43 != *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 8) )
      {
        if ( *v43 != *(_DWORD *)(MiSearchNumaNodeTable(v39) + 8) && ++v43 < v31 )
          continue;
        goto LABEL_67;
      }
      goto LABEL_69;
    }
  }
LABEL_67:
  v44 = v68;
  if ( v68 )
  {
    v45 = MiGetInPageSupportBlock(6LL);
    if ( !v45 )
    {
LABEL_69:
      MiLockNestedPageAtDpcInline(v38, v40, v41, v42);
      MiReturnFreeZeroPage(v38, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = v65;
      v36 = v8;
      goto LABEL_61;
    }
  }
  else
  {
    v45 = 0LL;
  }
  v46 = *(unsigned __int8 *)(a2 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v38, v40, v41, v42);
  MiFinalizePageAttribute(v38, v46, 1LL);
  MiCopyPfnEntryEx(v38, (__int128 *)a2);
  *(_WORD *)(v38 + 32) = 1;
  *(_QWORD *)(v38 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v45 )
  {
    *(_DWORD *)(v45 + 192) |= 0x20u;
    *(_BYTE *)(v38 + 34) |= 0x20u;
    *(_QWORD *)v38 = v45 + 32;
    *(_QWORD *)(v45 + 248) = v38;
  }
  v47 = (_QWORD *)(*(_QWORD *)(v38 + 8) | 0x8000000000000000uLL);
  v48 = MI_READ_PTE_LOCK_FREE(v47);
  updated = MiUpdateTransitionPteFrame(v48, BugCheckParameter3);
  if ( (unsigned int)MiPteInShadowRange(v47) )
  {
    if ( (unsigned int)MiPteHasShadow(v51, v50, v52) )
    {
      if ( !HIBYTE(word_140C66DFC) && (updated & 1) != 0 )
        updated |= 0x8000000000000000uLL;
      *v47 = updated;
      MiWritePteShadow(v47, updated);
      goto LABEL_83;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (updated & 1) != 0 )
    {
      updated |= 0x8000000000000000uLL;
    }
  }
  *v47 = updated;
LABEL_83:
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v44 )
  {
    MiLockNestedPageAtDpcInline(v44, v50, v52, v53);
    MiAddLockedPageCharge(v44, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v54) = 17;
    MiUnlockProtoPoolPage(v44, v54);
    v55 = BugCheckParameter3;
    *v69 = v45;
    MiCopyPage(v55, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiLockProtoPoolPage(v47, 0LL);
    LODWORD(v66) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v66);
      while ( *(__int64 *)(v44 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v44);
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LODWORD(v67) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v67);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    v56 = BugCheckParameter3;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        v60 = KeGetCurrentPrcb();
        SchedulerAssist = v60->SchedulerAssist;
        v62 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v62 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    __writecr8(2uLL);
    v56 = BugCheckParameter3;
    MiCopyPage(BugCheckParameter3, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiLockPageInline(a2);
  }
  MiSetPfnIdentity(a2, 0);
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v63 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v63);
    while ( *(__int64 *)(v38 + 24) < 0 );
  }
  v57 = *(_WORD *)(v38 + 32);
  *(_BYTE *)(v38 + 34) &= ~0x20u;
  *(_QWORD *)v38 = 0LL;
  MiRemoveLockedPageCharge(v38);
  if ( !v45 )
    return v38;
  *(_DWORD *)(v45 + 192) &= ~0x20u;
  if ( (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) == 0 )
    return v38;
  if ( v57 == 1 )
  {
    if ( (*(_DWORD *)(v38 + 16) & 0x400LL) == 0 )
      v14 = MiCapturePageFileInfoInline(v38 + 16, 0LL, 1LL);
    MiInsertPageInFreeOrZeroedList(v56);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v44 )
  {
    LOBYTE(v58) = 2;
    MiUnlockProtoPoolPage(v44, v58);
  }
  if ( v14 )
    MiReleasePageFileInfo(v65, v14, 1LL);
  return 0LL;
}
