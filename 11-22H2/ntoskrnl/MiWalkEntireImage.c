/*
 * XREFs of MiWalkEntireImage @ 0x1402DAFE0
 * Callers:
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14079DAF8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiSwitchBaseAddress @ 0x1407D439C (MiSwitchBaseAddress.c)
 *     MiFreeRetpolineImportInfo @ 0x14085EBF4 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiCaptureDirtyBitToPfn @ 0x140282FE0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402858B4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPfnChannel @ 0x1402870B0 (MiGetPfnChannel.c)
 *     MiCheckSlabPage @ 0x1402922C8 (MiCheckSlabPage.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x140296130 (MiCreateDecayPfn.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     MiAreChargesNeededToLockPage @ 0x1402CDF90 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiSetNonResidentPteHeat @ 0x1402D90B0 (MiSetNonResidentPteHeat.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 *     MiInvalidPteConforms @ 0x1402DC440 (MiInvalidPteConforms.c)
 *     MiDeleteTransitionPte @ 0x1402DCE80 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1402DD200 (MiLockProtoPoolPage.c)
 *     MiUseSlabAllocator @ 0x1402DEAC0 (MiUseSlabAllocator.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E14F0 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiStartingOffset @ 0x1402E2310 (MiStartingOffset.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x1402E7F74 (MiReturnFreeZeroPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF318 (MiObtainProtoReference.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiInitializePageFaultPacket @ 0x1402EF73C (MiInitializePageFaultPacket.c)
 *     MiGetPagingFileOffset @ 0x1402F2864 (MiGetPagingFileOffset.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiInsertProtectedStandbyPage @ 0x140334E90 (MiInsertProtectedStandbyPage.c)
 *     MiDecayPfnFullyInitialized @ 0x14033EBB4 (MiDecayPfnFullyInitialized.c)
 *     MiGetSharedProtos @ 0x14036973C (MiGetSharedProtos.c)
 *     MiIsPfnSystemCharged @ 0x1403A5C0C (MiIsPfnSystemCharged.c)
 *     MiTrimSharedPage @ 0x1403A5C5C (MiTrimSharedPage.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     VslApplySecureImageFixups @ 0x14045EEEC (VslApplySecureImageFixups.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDriverPageIsDangling @ 0x14062C618 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiDiscardTransitionPteEx @ 0x140650694 (MiDiscardTransitionPteEx.c)
 *     MiAddPageToHeatRanges @ 0x140653D64 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x14065466C (MiNotifyPageHeat.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x140656140 (MiWalkEntireImagePageNeedsProcessing.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x1406B130C (MiPageHasRelocations.c)
 *     MiRelocateImagePfn @ 0x1407447D0 (MiRelocateImagePfn.c)
 *     MiDereferenceSubsectionProtos @ 0x1407B6248 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1407B6624 (MiFreeSubsectionProtos.c)
 *     MiPrefetchControlArea @ 0x1407DCE8C (MiPrefetchControlArea.c)
 *     MiGetSectionStrongImageReference @ 0x140A43804 (MiGetSectionStrongImageReference.c)
 *     MiGetNextDirectFixupProto @ 0x140A481F0 (MiGetNextDirectFixupProto.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  char v4; // r15
  __int64 v7; // r12
  __int16 v8; // cx
  unsigned int v9; // esi
  __int64 v10; // rcx
  char v11; // al
  bool v12; // zf
  _DWORD *v13; // r10
  struct _KTHREAD *CurrentThread; // r11
  _QWORD *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r14d
  ULONG_PTR v19; // rdi
  _QWORD *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 Flink; // rdx
  ULONG_PTR v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbx
  __int64 v34; // r13
  int v35; // r15d
  unsigned int v36; // edi
  unsigned int v37; // esi
  __int64 v38; // rcx
  unsigned int v39; // esi
  unsigned __int8 v40; // bl
  unsigned int v41; // ebx
  int v42; // r12d
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // rdi
  int v45; // eax
  __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  unsigned __int8 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  _DWORD *v52; // r9
  __int64 v53; // rdx
  int v54; // ebx
  ULONG_PTR v55; // rdi
  int updated; // eax
  __int64 *v57; // rdi
  __int64 result; // rax
  unsigned __int64 v59; // rcx
  __int64 NextDirectFixupProto; // rax
  __int64 v61; // rbx
  __int64 v62; // rcx
  _DWORD *Pool; // rax
  struct _KTHREAD *v64; // rdi
  __int64 v65; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v67; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  int SessionId; // eax
  struct _KTHREAD *v73; // r14
  ULONG_PTR v74; // rbx
  __int64 v75; // rdi
  unsigned int v76; // eax
  unsigned int v77; // ecx
  struct _KPRCB *v78; // rcx
  signed __int32 *v79; // r8
  signed __int32 v80; // eax
  signed __int32 v81; // ett
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  struct _KTHREAD *v86; // rcx
  __int64 SharedProtos; // rax
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  struct _KTHREAD *v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  int v96; // eax
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  int v103; // eax
  __int64 v104; // rax
  int v105; // eax
  int v106; // eax
  int v107; // edi
  int v108; // ebx
  int PfnChannel; // eax
  __int64 v110; // r9
  struct _LIST_ENTRY *v111; // rax
  __int64 v112; // rax
  unsigned __int8 v113; // cl
  struct _KPRCB *v114; // r10
  int v115; // eax
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r10
  int v118; // eax
  unsigned int EffectivePagePriorityThread; // eax
  int v120; // r10d
  unsigned int v121; // r8d
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  struct _KTHREAD *v124; // r13
  __int64 v125; // rdi
  __int64 v126; // rbx
  struct _KTHREAD *v127; // r14
  ULONG_PTR v128; // rbx
  unsigned int v129; // eax
  unsigned int v130; // ecx
  struct _KPRCB *v131; // rcx
  signed __int32 *v132; // r8
  signed __int32 v133; // eax
  signed __int32 v134; // ett
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  unsigned __int8 v140; // al
  unsigned __int8 v141; // bl
  struct _KPRCB *v142; // r9
  _DWORD *v143; // r8
  int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  struct _KTHREAD *v148; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v150; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v151[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v152; // [rsp+44h] [rbp-BCh]
  __int64 SlabPage; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v154; // [rsp+50h] [rbp-B0h]
  __int64 v155; // [rsp+58h] [rbp-A8h]
  __int64 v156; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD *v157; // [rsp+68h] [rbp-98h]
  _DWORD *v158; // [rsp+70h] [rbp-90h]
  int v159; // [rsp+78h] [rbp-88h]
  int v160; // [rsp+7Ch] [rbp-84h]
  PVOID P; // [rsp+80h] [rbp-80h]
  unsigned int v162; // [rsp+88h] [rbp-78h]
  unsigned int v163; // [rsp+8Ch] [rbp-74h]
  __int64 v164; // [rsp+90h] [rbp-70h]
  ULONG_PTR v165; // [rsp+98h] [rbp-68h]
  ULONG_PTR v166; // [rsp+A0h] [rbp-60h]
  unsigned int v167; // [rsp+A8h] [rbp-58h] BYREF
  int v168; // [rsp+ACh] [rbp-54h]
  _QWORD *v169; // [rsp+B0h] [rbp-50h]
  __int64 v170; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v171; // [rsp+C0h] [rbp-40h]
  __int64 v172; // [rsp+C8h] [rbp-38h]
  unsigned int v173; // [rsp+D0h] [rbp-30h]
  unsigned int v174; // [rsp+D4h] [rbp-2Ch]
  int v175; // [rsp+D8h] [rbp-28h] BYREF
  int v176; // [rsp+DCh] [rbp-24h]
  unsigned int v177; // [rsp+E0h] [rbp-20h]
  __int64 v178; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v179; // [rsp+F0h] [rbp-10h]
  __int64 v180; // [rsp+F8h] [rbp-8h]
  ULONG_PTR v181; // [rsp+100h] [rbp+0h]
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+8h]
  int v183; // [rsp+110h] [rbp+10h] BYREF
  int v184; // [rsp+114h] [rbp+14h] BYREF
  int v185; // [rsp+118h] [rbp+18h] BYREF
  ULONG_PTR v186; // [rsp+120h] [rbp+20h]
  __int64 v187; // [rsp+128h] [rbp+28h]
  __int64 v188; // [rsp+130h] [rbp+30h]
  _QWORD v189[4]; // [rsp+138h] [rbp+38h] BYREF
  _KPROCESS *Process; // [rsp+158h] [rbp+58h]
  __int128 v191; // [rsp+160h] [rbp+60h] BYREF
  __int64 v192; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v193; // [rsp+178h] [rbp+78h]
  _DWORD v194[32]; // [rsp+17Ch] [rbp+7Ch] BYREF
  _BYTE v195[144]; // [rsp+200h] [rbp+100h] BYREF

  v4 = a3;
  v162 = a3;
  v181 = a2;
  v166 = a1;
  v7 = 0LL;
  v163 = a4;
  v175 = 0;
  v178 = 0LL;
  v191 = 0LL;
  memset(v194, 0, sizeof(v194));
  v8 = *(_WORD *)(a1 + 60);
  v170 = *(_QWORD *)(a1 + 96);
  v187 = *(_QWORD *)a1;
  v9 = 0;
  v160 = v4 & 8;
  v10 = *(_QWORD *)(qword_140C674C8 + 8LL * (v8 & 0x3FF));
  v11 = *(_BYTE *)(a1 + 62) & 0xC;
  v188 = v10;
  if ( v11 == 4 && (v4 & 8) == 0 )
  {
    v13 = (_DWORD *)(a1 + 56);
LABEL_193:
    v158 = v13;
    v9 = 2;
    goto LABEL_3;
  }
  v12 = (*(_DWORD *)(a1 + 56) & 0x800) == 0;
  v13 = (_DWORD *)(a1 + 56);
  v160 = v4 & 8;
  v158 = (_DWORD *)(a1 + 56);
  if ( !v12 )
  {
    v160 = v4 & 8;
    goto LABEL_193;
  }
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v157 = CurrentThread;
  v179 = 0LL;
  v159 = v4 & 0x20;
  P = &v192;
  v193 = 16;
  v192 = 2LL;
  if ( (v4 & 0x20) != 0 )
  {
    LODWORD(v192) = 1;
    v9 = 0;
  }
  else if ( (v4 & 8) != 0 )
  {
    MiInitializePageColorBase(v10 + 17536, (*v13 >> 20) & 0x7F, &v191);
    v13 = v158;
    LODWORD(v192) = 0;
  }
  v15 = (_QWORD *)(a1 + 128);
  v16 = *(_QWORD *)(a1 + 136);
  v17 = -1LL;
  v154 = a1 + 128;
  v18 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v172 = v16;
  v151[0] = 17;
  v167 = 0;
  v152 = 0;
  v155 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v170 + 56) )
  {
    result = MiGetSectionStrongImageReference(v170);
    v152 = result;
    v18 = result;
    if ( (int)result < 0 )
      return result;
    v15 = (_QWORD *)v154;
    v17 = SlabPage;
    v16 = v172;
    v13 = v158;
    CurrentThread = v157;
  }
  v176 = 0;
  if ( (v4 & 8) != 0 )
  {
    NextDirectFixupProto = MiGetNextDirectFixupProto(a2, 0LL, v16);
    v17 = SlabPage;
    v179 = NextDirectFixupProto;
  }
  if ( (_DWORD)v192 != 2 )
  {
    v61 = 511LL;
    v62 = *(unsigned int *)(v187 + 8);
    if ( (unsigned int)v62 < 0x1FF )
      v61 = (unsigned int)v62;
    if ( (unsigned int)v61 > v193 )
    {
      Pool = (_DWORD *)MiAllocatePool(66LL, 8 * v61 + 16, 1818782029LL);
      v15 = (_QWORD *)v154;
      v17 = SlabPage;
      v16 = v172;
      v13 = v158;
      CurrentThread = v157;
      P = Pool;
      if ( Pool )
      {
        *(_QWORD *)Pool = v192;
        Pool[2] = v61;
      }
      else
      {
        P = &v192;
      }
    }
    if ( (v4 & 0x28) != 0x28 )
    {
      --CurrentThread->SpecialApcDisable;
      v9 |= 0x20u;
      v64 = KeGetCurrentThread();
      v65 = 0LL;
      v173 = 0;
      _disable();
      AbEntrySummary = v64->AbEntrySummary;
      if ( v64->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v62, v64),
            v15 = (_QWORD *)v154,
            v13 = v158,
            CurrentThread = v157,
            AbEntrySummary) )
      {
        _BitScanForward(&v67, AbEntrySummary);
        v173 = v67;
        v64->AbEntrySummary = AbEntrySummary & ~(1 << v67);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v70 = *SchedulerAssist;
          do
          {
            v71 = v70;
            v70 = _InterlockedCompareExchange(SchedulerAssist, v70 & 0xFFDFFFFF, v70);
          }
          while ( v71 != v70 );
          if ( (v70 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v15 = (_QWORD *)v154;
            v13 = v158;
            CurrentThread = v157;
          }
        }
        _enable();
        v65 = (__int64)(&v64[1].Process + 12 * v173);
        if ( (unsigned __int64)&qword_140C6B5D8 - qword_140C65AE8 >= 0x8000000000LL )
        {
          SessionId = -1;
        }
        else
        {
          SessionId = MmGetSessionIdEx((__int64)v64->ApcState.Process);
          v15 = (_QWORD *)v154;
          v13 = v158;
          CurrentThread = v157;
        }
        *(_DWORD *)(v65 + 8) = SessionId;
        *(_QWORD *)v65 = (unsigned __int64)&qword_140C6B5D8 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B5D8, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(&qword_140C6B5D8, 0LL, v65, &qword_140C6B5D8);
        v15 = (_QWORD *)v154;
        v13 = v158;
        CurrentThread = v157;
      }
      v17 = SlabPage;
      v16 = v172;
      if ( v65 )
        *(_BYTE *)(v65 + 18) = 1;
    }
  }
  while ( 1 )
  {
    v19 = v15[1];
    v20 = (_QWORD *)v15[2];
    v169 = v20;
    v21 = (__int64)(v19 - v16) >> 3;
    v12 = (*((_BYTE *)v15 + 34) & 2) == 0;
    v171 = v19;
    v156 = v21;
    if ( v12 )
      break;
    if ( (v4 & 1) != 0 )
      goto LABEL_28;
    if ( (*v13 & 0x8000000) == 0 )
      break;
    if ( (v4 & 0x2A) != 0 )
      goto LABEL_28;
    --CurrentThread->SpecialApcDisable;
    v73 = KeGetCurrentThread();
    v74 = v187 + 40;
    v174 = 0;
    v75 = 0LL;
    _disable();
    v76 = v73->AbEntrySummary;
    if ( v73->AbEntrySummary || (v76 = KiAbTryReclaimOrphanedEntries(v20, v73), v15 = (_QWORD *)v154, v76) )
    {
      _BitScanForward(&v77, v76);
      v174 = v77;
      v73->AbEntrySummary = v76 & ~(1 << v77);
      v78 = KeGetCurrentPrcb();
      v79 = (signed __int32 *)v78->SchedulerAssist;
      if ( v79 )
      {
        _m_prefetchw(v79);
        v80 = *v79;
        do
        {
          v81 = v80;
          v80 = _InterlockedCompareExchange(v79, v80 & 0xFFDFFFFF, v80);
        }
        while ( v81 != v80 );
        if ( (v80 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(v78);
          v15 = (_QWORD *)v154;
        }
      }
      _enable();
      v75 = (__int64)(&v73[1].Process + 12 * v174);
      if ( v74 - qword_140C65AE8 >= 0x8000000000LL )
      {
        v82 = -1;
      }
      else
      {
        v82 = MmGetSessionIdEx((__int64)v73->ApcState.Process);
        v15 = (_QWORD *)v154;
      }
      *(_DWORD *)(v75 + 8) = v82;
      *(_QWORD *)v75 = v74 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(v74, 0LL, v75, v74);
      v15 = (_QWORD *)v154;
    }
    if ( v75 )
      *(_BYTE *)(v75 + 18) = 1;
    if ( !v15[3] )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) == 17 )
        goto LABEL_238;
LABEL_237:
      ExfReleasePushLockShared((signed __int64 *)v74);
      goto LABEL_238;
    }
    SharedProtos = MiGetSharedProtos(v166, v163, v15);
    v88 = SharedProtos;
    if ( SharedProtos )
    {
      ++*(_DWORD *)(SharedProtos + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v74);
      KeAbPostRelease(v74);
      v92 = v157;
      v12 = v157->SpecialApcDisable++ == -1;
      if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v92->ApcState.ApcListHead[0].Flink != &v92->152 )
        KiCheckForKernelApcDelivery(v92, v89, v90, v91);
      v19 = *(_QWORD *)(v88 + 72);
      v9 |= 8u;
      v15 = (_QWORD *)v154;
      v171 = v19;
      break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) != 17 )
      goto LABEL_237;
LABEL_238:
    KeAbPostRelease(v74);
    v86 = v157;
    v12 = v157->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
      KiCheckForKernelApcDelivery(v86, v83, v84, v85);
    v18 = v152;
    v15 = (_QWORD *)v154;
    v20 = v169;
    v17 = SlabPage;
LABEL_28:
    if ( (v9 & 8) != 0 )
    {
      v124 = v157;
      v125 = 0LL;
      v126 = v187;
      v189[0] = 0LL;
      v177 = 0;
      --v157->SpecialApcDisable;
      v127 = KeGetCurrentThread();
      v128 = v126 + 40;
      _disable();
      v129 = v127->AbEntrySummary;
      if ( v127->AbEntrySummary || (v129 = KiAbTryReclaimOrphanedEntries(v20, v127), v15 = (_QWORD *)v154, v129) )
      {
        _BitScanForward(&v130, v129);
        v177 = v130;
        v127->AbEntrySummary = v129 & ~(1 << v130);
        v131 = KeGetCurrentPrcb();
        v132 = (signed __int32 *)v131->SchedulerAssist;
        if ( v132 )
        {
          _m_prefetchw(v132);
          v133 = *v132;
          do
          {
            v134 = v133;
            v133 = _InterlockedCompareExchange(v132, v133 & 0xFFDFFFFF, v133);
          }
          while ( v134 != v133 );
          if ( (v133 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(v131);
            v15 = (_QWORD *)v154;
          }
        }
        _enable();
        v125 = (__int64)(&v127[1].Process + 12 * v177);
        if ( v128 - qword_140C65AE8 >= 0x8000000000LL )
        {
          v135 = -1;
        }
        else
        {
          v135 = MmGetSessionIdEx((__int64)v127->ApcState.Process);
          v15 = (_QWORD *)v154;
        }
        *(_DWORD *)(v125 + 8) = v135;
        *(_QWORD *)v125 = v128 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v128, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v128, 0LL, v125, v128);
        v15 = (_QWORD *)v154;
      }
      if ( v125 )
        *(_BYTE *)(v125 + 18) = 1;
      MiDereferenceSubsectionProtos(v15, v163, v189);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v128, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v128);
      KeAbPostRelease(v128);
      v12 = v124->SpecialApcDisable++ == -1;
      if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v124->ApcState.ApcListHead[0].Flink != &v124->152 )
        KiCheckForKernelApcDelivery(v137, v136, v138, v139);
      MiFreeSubsectionProtos(v189);
      v20 = v169;
      v9 &= ~8u;
      v17 = SlabPage;
      v18 = v152;
    }
    v154 = (ULONG_PTR)v20;
    v15 = v20;
    if ( !v20 )
    {
LABEL_152:
      v57 = (__int64 *)P;
      goto LABEL_153;
    }
    v16 = v172;
    v13 = v158;
    CurrentThread = v157;
  }
  v22 = MiStartingOffset(v15, v19, v163);
  v15 = (_QWORD *)v154;
  v23 = v22;
  Flink = v179;
  v164 = v22;
  v25 = v19 + 8LL * *(unsigned int *)(v154 + 44);
  v186 = v25;
  if ( v179 )
  {
    if ( v179 >= v25 )
    {
      v18 = v152;
      v20 = v169;
      v17 = SlabPage;
      goto LABEL_28;
    }
    v171 = v179;
    v93 = v179 - v19;
    v19 = v179;
    v93 >>= 3;
    v21 = (unsigned int)(v93 + v21);
    v23 += v93 << 12;
    v156 = v21;
    v164 = v23;
  }
  v26 = 0LL;
  v165 = 0LL;
  if ( v19 >= v25 )
  {
LABEL_24:
    if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v151[0]);
      v7 = 0LL;
      v155 = 0LL;
    }
    v17 = SlabPage;
    if ( SlabPage == -1 )
    {
      v18 = v152;
      v15 = (_QWORD *)v154;
      v20 = v169;
    }
    else
    {
      MiReleaseFreshPage(48 * SlabPage - 0x220000000000LL);
      v18 = v152;
      v17 = -1LL;
      v15 = (_QWORD *)v154;
      v20 = v169;
      SlabPage = -1LL;
    }
    goto LABEL_28;
  }
  while ( 1 )
  {
    if ( (v19 & 0xFFF) != 0 )
    {
      if ( v7 )
        goto LABEL_15;
    }
    else if ( v7 )
    {
      MiUnlockProtoPoolPage(v7, v151[0]);
    }
    v51 = (v9 & 2) != 0 ? MiLockProtoPoolPage(v19, v151) : MiCheckProtoPtePageState(v19);
    v155 = v51;
    v7 = v51;
    if ( v51 )
      break;
    if ( (v9 & 2) != 0 )
    {
      MmAccessFault(2uLL, v19, 0, 0LL);
    }
    else
    {
      v59 = (unsigned __int64)(4096 - (unsigned int)(v19 & 0xFFF)) >> 3;
      v23 += v59 << 12;
      v21 = (unsigned int)(v59 + v21);
      v19 += 8 * v59;
LABEL_22:
      v164 = v23;
      v156 = v21;
      v171 = v19;
    }
LABEL_23:
    v26 = 0LL;
    v7 = v155;
    if ( v19 >= v186 )
      goto LABEL_24;
  }
  v26 = 0LL;
LABEL_15:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          v27 = *(_QWORD *)v19;
          v28 = *(_QWORD *)v19;
          if ( (*(_QWORD *)v19 & 1) != 0 )
            break;
          if ( (*(_QWORD *)v19 & 0xC00LL) != 0x800 )
            goto LABEL_17;
          if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v19, Flink, v26, v15) )
          {
            v28 = v27;
            if ( qword_140C65C40 && (v27 & 0x10) == 0 )
              v28 = v27 & ~qword_140C65C40;
            break;
          }
        }
        v30 = (v28 >> 12) & 0xFFFFFFFFFFLL;
        if ( v30 > qword_140C65CA0 )
          continue;
        break;
      }
      Flink = 6 * v30;
      if ( !_bittest64((const signed __int64 *)(48 * v30 - 0x21FFFFFFFFD8LL), 0x36u) )
        continue;
      break;
    }
    v31 = 48 * v30 - 0x220000000000LL;
    v183 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v183);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
      v26 = 0LL;
    }
    if ( *(_QWORD *)v19 != v27 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v31 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    v31 = MiLockSpecialPurposeMemoryCachedPage(v31, 0LL, v26, v15);
  if ( !v31 )
  {
LABEL_17:
    if ( !v160 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_19;
      v178 = MI_READ_PTE_LOCK_FREE(v19);
      if ( (v178 & 0x400) != 0 || !(unsigned int)MiGetPagingFileOffset(&v178, Flink, v26, v15) )
        goto LABEL_19;
      MiUnlockProtoPoolPage(v7, v151[0]);
      v29 = 0LL;
      v155 = 0LL;
      if ( (v4 & 2) == 0 || (unsigned int)MiPageHasRelocations(*(_QWORD *)(v170 + 32), (unsigned int)v21, 1LL) )
      {
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v157, Flink, v26, v15);
        if ( EffectivePagePriorityThread > 5 )
          EffectivePagePriorityThread = 5;
        if ( v19 == v165 )
        {
          v121 = 4096;
        }
        else
        {
          v165 = v19;
          v121 = (unsigned int)((__int64)(v186 - v19) >> 3) << 12;
        }
        if ( (int)MiPrefetchControlArea(v166, v120, v121, EffectivePagePriorityThread, 2, v163) < 0 )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v152 = 0;
        v23 = v164;
        goto LABEL_23;
      }
LABEL_20:
      if ( !v179 )
      {
        v19 += 8LL;
        v21 = (unsigned int)(v21 + 1);
        v23 = v164 + 4096;
        goto LABEL_22;
      }
      v122 = MiGetNextDirectFixupProto(v181, (unsigned int)++v176, v26);
      v179 = v122;
      Flink = v122;
      if ( v122 )
      {
        if ( v122 >= v186 )
        {
          v7 = v155;
          goto LABEL_24;
        }
        v123 = (__int64)(v122 - v19) >> 3;
        v21 = (unsigned int)(v123 + v21);
        v23 = (v123 << 12) + v164;
        v156 = v21;
        v164 = v23;
        if ( v29 && ((Flink ^ v19) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          MiUnlockProtoPoolPage(v29, v151[0]);
          Flink = v179;
          v155 = 0LL;
        }
        v19 = Flink;
        v171 = Flink;
        goto LABEL_23;
      }
      if ( v29 )
        MiUnlockProtoPoolPage(v29, v151[0]);
      v18 = v152;
LABEL_417:
      v17 = SlabPage;
      goto LABEL_152;
    }
    dword_140C65910 = 121;
LABEL_401:
    MiUnlockProtoPoolPage(v7, v151[0]);
    v18 = -1073740023;
    goto LABEL_417;
  }
  v32 = *(_QWORD *)v19;
  if ( MiPteInShadowRange(v19)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v94 = *(_QWORD *)(Flink + 8 * ((v19 >> 3) & 0x1FF));
      if ( (v94 & 0x20) != 0 )
        v32 |= 0x20uLL;
      if ( (v94 & 0x42) != 0 )
        v32 |= 0x42uLL;
    }
  }
  v178 = v32;
  v33 = v32 & 1;
  if ( (v32 & 1) != 0 )
  {
    v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v178);
  }
  else if ( qword_140C65C40 && (v32 & 0x10) == 0 )
  {
    v32 &= ~qword_140C65C40;
  }
  v34 = (v32 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v4 & 4) != 0 )
  {
    if ( (unsigned int)MiIsPfnSystemCharged(v31) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v31 + 35) &= ~0x20u;
    }
    goto LABEL_170;
  }
  if ( (v4 & 1) != 0 && ((*(_QWORD *)(v31 + 40) >> 60) & 7) == 3
    || (v26 = *(_QWORD *)(v31 + 16), (v26 & 0x400) == 0) && (v4 & 0x20) == 0 && (v9 & 2) == 0 )
  {
LABEL_170:
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_116;
  }
  Flink = *(unsigned __int8 *)(v31 + 35);
  if ( (Flink & 0x40) != 0 && v160 )
  {
    dword_140C65910 = 122;
    goto LABEL_270;
  }
  if ( (Flink & 0x10) != 0 )
  {
    if ( !v160 )
      goto LABEL_170;
    dword_140C65910 = 123;
LABEL_270:
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_401;
  }
  if ( !v33 && (*(_BYTE *)(v31 + 34) & 0x20) != 0 )
  {
    memset(v195, 0, 0x88uLL);
    if ( !v159 )
    {
      if ( (v4 & 2) == 0 || (*v158 & 2) != 0 )
      {
        MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v195);
        v175 = 1;
        MiObtainProtoReference(v7, 1LL);
        MiWaitForCollidedFaultComplete((unsigned int)v195, v31, v7, v151[0], (__int64)&v175);
        LODWORD(v21) = v156;
        v23 = v164;
        v155 = 0LL;
        v152 = 0;
        goto LABEL_23;
      }
      MiDeleteTransitionPte(v19, v31);
      goto LABEL_116;
    }
    goto LABEL_170;
  }
  if ( v159 )
  {
    if ( v33 )
      goto LABEL_170;
    v95 = v26 >> 11;
    if ( (v26 & 0x400) == 0 )
      v95 = v26 >> 3;
    if ( (v95 & 1) == 0 )
      goto LABEL_170;
  }
  v35 = 8;
  v168 = 8;
  if ( !v33 )
  {
    if ( (Flink & 8) != 0 )
    {
      v35 = Flink & 7;
      v168 = v35;
    }
    if ( (MiUnlinkPageFromListEx(v31, 0LL) & 3) == 0 )
    {
      *(_QWORD *)(v31 + 24) &= 0xC000000000000000uLL;
      goto LABEL_60;
    }
    MiDiscardTransitionPteEx(v31, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = v162;
    LODWORD(v21) = v156;
    if ( (v9 & 2) != 0 )
    {
      v23 = v164;
      goto LABEL_23;
    }
LABEL_19:
    v29 = v155;
    goto LABEL_20;
  }
LABEL_60:
  v36 = v162;
  if ( (v162 & 0x21) != 1
    || *(char *)(v31 + 35) < 0
    || !(unsigned int)MiUseSlabAllocator(v188, v154, *(_QWORD *)(v31 + 16), &v167)
    || (v54 = v167, v167 > 3)
    || (v96 = MiCheckSlabPfnBitmap(v31, 1LL), v96 && (unsigned int)MiCheckSlabPage(v31, v54)) )
  {
    v37 = v9 & 0xFFFFFFEF;
  }
  else
  {
    v37 = v9 | 0x10;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v31) || (unsigned int)MiChargeForLockedPage(v38, 1LL) )
    ++*(_WORD *)(v31 + 32);
  if ( v159 )
  {
    v39 = v37 & 0xFFFFFF3F | 0x40;
  }
  else
  {
    if ( (v37 & 0x100) != 0 || (HvlEnlightenments & 0x200000) == 0 )
      goto LABEL_68;
    v97 = *(_QWORD *)(v31 + 16);
    v98 = v97 >> 11;
    if ( (v97 & 0x400) == 0 )
      v98 = v97 >> 3;
    if ( (v98 & 1) != 0 )
      v39 = v37 | 0x40;
    else
LABEL_68:
      v39 = v37 & 0xFFFFFFBF;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v184 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v184);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  *(_BYTE *)(v7 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v7) )
    MiPfnReferenceCountIsZero(v7, 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v40 = v151[0];
  if ( v151[0] != 17 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v151[0] <= 0xFu && CurrentIrql >= 2u )
      {
        v100 = KeGetCurrentPrcb();
        v101 = v100->SchedulerAssist;
        v40 = v151[0];
        v102 = ~(unsigned __int16)(-1LL << (v151[0] + 1));
        v12 = (v102 & v101[5]) == 0;
        v101[5] &= v102;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v100);
      }
    }
    __writecr8(v40);
  }
  v41 = v156;
  v155 = 0LL;
  if ( (v39 & 0x40) != 0 )
  {
    v103 = MiWalkEntireImagePageNeedsProcessing(v170, (unsigned int)v156, v36);
    v42 = v159;
    if ( v103 )
    {
      if ( v159 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(P, v34, 3LL) )
          MiNotifyPageHeat(P);
        v39 |= 0x80u;
      }
      else
      {
        MiWalkEntireImage(v166, v181, v36 | 0x20, v163);
        v39 |= 0x100u;
      }
    }
  }
  else
  {
    v42 = v159;
  }
  v43 = *(_QWORD *)(v31 + 40);
  if ( (v43 & 0x20000000000000LL) != 0 )
    v9 = v39 | 1;
  else
    v9 = v39 & 0xFFFFFFFE;
  if ( v42 )
  {
    v152 = 0;
    goto LABEL_86;
  }
  if ( !v160 )
  {
    if ( (v36 & 2) != 0 )
    {
      v44 = v166;
      if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v166 + 92) & 0xC0000) != 0 && ((v43 >> 60) & 7) == 3 )
      {
        v105 = VslApplySecureImageFixups(*(_QWORD *)(v170 + 56), v41, v34);
        v152 = v105;
        if ( v105 < 0 )
          KeBugCheckEx(0x1Au, 0xD8A18uLL, v105, v34, v44);
      }
      else
      {
        v45 = MiRelocateImagePfn(v166, v181, 0LL, v150, 65);
        v152 = v45;
        if ( v45 )
        {
          if ( v45 == 1 )
            v152 = 0;
        }
        else
        {
          v9 |= 4u;
        }
      }
    }
    else if ( (v36 & 0x10) != 0 )
    {
      v55 = v166;
      if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(v166 + 92) & 0xC0000) != 0 && ((v43 >> 60) & 7) == 3 )
      {
        v106 = VslApplySecureImageFixups(*(_QWORD *)(v170 + 56), v41, v34);
        v152 = v106;
        if ( v106 < 0 )
          KeBugCheckEx(0x1Au, 0xD9A18uLL, v106, v34, v55);
      }
      else
      {
        updated = MiUpdateImagePfnImportRelocations(v166, v181, v41, v34, BugCheckParameter4);
        v152 = updated;
        if ( updated )
        {
          if ( updated == 1 )
            v152 = 0;
        }
        else
        {
          v9 |= 4u;
        }
      }
    }
    else
    {
      v152 = MiValidateImagePfn(
               v166,
               v164,
               (_DWORD)Process,
               v41,
               BugCheckParameter4,
               (*(unsigned __int16 *)(v154 + 32) >> 1) & 0x1F,
               v34,
               0x4000000);
    }
LABEL_86:
    if ( v35 != 8 && !BugCheckParameter2 && (v9 & 1) == 0 )
      BugCheckParameter2 = (ULONG_PTR)MiCreateDecayPfn();
    if ( (v9 & 0x10) != 0 && SlabPage == -1 )
    {
      v107 = *v158;
      v108 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v31 + 0x220000000000LL) >> 4)) + 2);
      PfnChannel = MiGetPfnChannel(v31);
      v110 = 2LL;
      v150 = 0;
      if ( (v107 & 0x7F00000) != 0 )
        v110 = 0LL;
      SlabPage = MiGetSlabPage(
                   v188,
                   v167,
                   (PfnChannel << byte_140C65B8E) | (v108 << byte_140C65B8D) | dword_140C65BF8 & (unsigned int)v34,
                   v110,
                   (__int64 *)0xFFFFFFFFFFFFFFFFLL);
      if ( SlabPage == -1 )
        v9 &= ~0x10u;
    }
    v46 = 0LL;
    v47 = 0LL;
    v180 = 0LL;
    v48 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v48 == 2 )
        LODWORD(v53) = 4;
      else
        v53 = (-1LL << (v48 + 1)) & 4;
      v52[5] |= v53;
    }
    v185 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v185);
      while ( *(__int64 *)(v31 + 24) < 0 );
    }
    v49 = *(_QWORD *)(v31 + 24) >> 62;
    v151[0] = v48;
    if ( (v49 & 1) != 0 )
    {
      if ( (v9 & 0x10) != 0 )
        v9 &= ~0x10u;
    }
    else if ( (v9 & 0x80u) != 0 )
    {
      MiSetNonResidentPteHeat((unsigned __int64 *)(v31 + 16), 0);
    }
    if ( *(char *)(v31 + 35) < 0 )
      v9 &= ~0x10u;
    if ( (v162 & 0x10) != 0 || (v162 & 0x22) == 2 )
    {
      v50 = *(_QWORD *)(v31 + 16);
      if ( MiPteInShadowRange(v31 + 16)
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        v111 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v111 )
        {
          v112 = *((_QWORD *)&v111->Flink + (((unsigned __int64)(v31 + 16) >> 3) & 0x1FF));
          if ( (v112 & 0x20) != 0 )
            v50 |= 0x20uLL;
          if ( (v112 & 0x42) != 0 )
            v50 |= 0x42uLL;
        }
      }
      v178 = v50;
      if ( (v50 & 0x400) != 0 )
      {
        v46 = 0LL;
      }
      else
      {
        v47 = MiCaptureDirtyBitToPfn(v31);
        v46 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v31 + 40) >> 43) & 0x3FFLL));
        v180 = v46;
      }
      v35 = v168;
    }
    if ( (v9 & 0x10) != 0 && (*(_BYTE *)(v31 + 34) & 7) == 6 )
    {
      MiTrimSharedPage(v31, v48, 0LL);
      if ( (*(_QWORD *)(v31 + 24) & 0x4000000000000000LL) != 0 )
        v9 &= ~0x10u;
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(v31) )
    {
      if ( (v9 & 1) == 0
        && v35 != 8
        && (!_bittest64((const signed __int64 *)(v31 + 24), 0x3Eu) & (unsigned __int8)~(*(_BYTE *)(v31 + 34) >> 4)) != 0
        && (v9 & 0x10) == 0 )
      {
        if ( BugCheckParameter2 )
          MiInsertProtectedStandbyPage(BugCheckParameter2, v31);
        else
          MiPfnReferenceCountIsZero(v31, v34);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v113 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v113 <= 0xFu && v48 <= 0xFu && v113 >= 2u )
          {
            v114 = KeGetCurrentPrcb();
            Flink = -1LL << (v48 + 1);
            v15 = v114->SchedulerAssist;
            v115 = ~(unsigned __int16)Flink;
            v12 = (v115 & *((_DWORD *)v15 + 5)) == 0;
            v26 = (unsigned int)v115 & *((_DWORD *)v15 + 5);
            *((_DWORD *)v15 + 5) = v26;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(v114);
          }
        }
        __writecr8(v48);
        v151[0] = 17;
        goto LABEL_107;
      }
      MiPfnReferenceCountIsZero(v31, v34);
    }
    if ( (v9 & 0x10) != 0 )
    {
      v116 = *(_BYTE *)(v31 + 34) & 7;
      if ( v116 >= 2u && v116 <= 3u && !*(_WORD *)(v31 + 32) && *(char *)(v31 + 35) >= 0 )
      {
        if ( (unsigned int)MiCheckSlabPfnBitmap(48 * SlabPage - 0x220000000000LL, 1LL) )
        {
          MiCheckSlabPfnBitmap(v31, 1LL);
          MiReplaceTransitionPage(v31);
          *(_QWORD *)(v31 + 16) = ZeroPte;
          SlabPage = -1LL;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v31 + 16));
          MiReturnFreeZeroPage(v31, 0LL);
        }
        v46 = v180;
      }
    }
LABEL_107:
    if ( v151[0] != 17 )
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v47 )
      MiReleasePageFileInfo(v46, v47, 1);
    if ( v151[0] != 17 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        Flink = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)Flink <= 0xFu
          && v151[0] <= 0xFu
          && (unsigned __int8)Flink >= 2u )
        {
          v117 = KeGetCurrentPrcb();
          v15 = v117->SchedulerAssist;
          Flink = -1LL << (v151[0] + 1);
          v118 = ~(unsigned __int16)Flink;
          v12 = (v118 & *((_DWORD *)v15 + 5)) == 0;
          v26 = (unsigned int)v118 & *((_DWORD *)v15 + 5);
          *((_DWORD *)v15 + 5) = v26;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v117);
        }
      }
      __writecr8(v151[0]);
      v151[0] = 17;
    }
    v18 = v152;
    if ( v152 < 0 )
    {
      v17 = SlabPage;
      v57 = (__int64 *)P;
      dword_140C65910 = (v152 != -1073741670) + 113;
      goto LABEL_153;
    }
    v19 = v171;
    v4 = v162;
LABEL_116:
    LODWORD(v21) = v156;
    goto LABEL_19;
  }
  if ( !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v170 + 32), v41, 1LL) )
    goto LABEL_86;
  v57 = (__int64 *)P;
  v104 = MiSplitDirectMapPage(v154, &v191, v34, P);
  if ( v104 != -1 )
  {
    v31 = 48 * v104 - 0x220000000000LL;
    v34 = v104;
    goto LABEL_86;
  }
  dword_140C65910 = 120;
  v151[0] = MiLockPageInline(v31);
  if ( (unsigned int)MiRemoveLockedPageCharge(v31) )
    MiPfnReferenceCountIsZero(v31, v34);
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags && (v140 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v140 <= 0xFu )
  {
    v141 = v151[0];
    if ( v151[0] <= 0xFu && v140 >= 2u )
    {
      v142 = KeGetCurrentPrcb();
      v143 = v142->SchedulerAssist;
      v141 = v151[0];
      v144 = ~(unsigned __int16)(-1LL << (v151[0] + 1));
      v12 = (v144 & v143[5]) == 0;
      v143[5] &= v144;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v142);
    }
  }
  else
  {
    v141 = v151[0];
  }
  __writecr8(v141);
  v17 = SlabPage;
  v18 = -1073740023;
LABEL_153:
  if ( BugCheckParameter2 )
  {
    MiDecayPfnFullyInitialized(BugCheckParameter2);
    v17 = SlabPage;
  }
  if ( *((_DWORD *)v57 + 1) )
  {
    MiNotifyPageHeat(v57);
    v17 = SlabPage;
  }
  if ( (v9 & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B5D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B5D8);
    KeAbPostRelease((ULONG_PTR)&qword_140C6B5D8);
    v148 = v157;
    v12 = v157->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v148->ApcState.ApcListHead[0].Flink != &v148->152 )
      KiCheckForKernelApcDelivery(v148, v145, v146, v147);
    v17 = SlabPage;
  }
  if ( v57 != &v192 )
  {
    ExFreePoolWithTag(v57, 0);
    v17 = SlabPage;
  }
  if ( v17 != -1 )
    MiReleaseFreshPage(48 * v17 - 0x220000000000LL);
  return v18;
}
