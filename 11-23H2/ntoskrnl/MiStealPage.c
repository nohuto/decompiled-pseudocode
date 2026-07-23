/*
 * XREFs of MiStealPage @ 0x1403BC5BC
 * Callers:
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiCopyPfnEntryEx @ 0x140219D60 (MiCopyPfnEntryEx.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MiHyperSpaceSize @ 0x14025D7A4 (MiHyperSpaceSize.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiCopyPage @ 0x1402840A0 (MiCopyPage.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiSetPfnPteFrame @ 0x1402E1830 (MiSetPfnPteFrame.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiWriteValidPteNewPage @ 0x1402EB2DC (MiWriteValidPteNewPage.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348B00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiLockStealSystemVm @ 0x140398C2C (MiLockStealSystemVm.c)
 *     MiSmallVaStillMapsFrame @ 0x1403A9170 (MiSmallVaStillMapsFrame.c)
 *     MiVaIsPageFileHash @ 0x1403BC560 (MiVaIsPageFileHash.c)
 *     MiUnlockStealVm @ 0x1403BDC60 (MiUnlockStealVm.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     KeSwapDirectoryTableBase @ 0x1403D7E14 (KeSwapDirectoryTableBase.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting @ 0x14041A4B0 (Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiPrepareToStealNonPagedPool @ 0x14061DE84 (MiPrepareToStealNonPagedPool.c)
 *     MiReplacePageOfProtoPool @ 0x14061DF30 (MiReplacePageOfProtoPool.c)
 */

__int64 __fastcall MiStealPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        ULONG_PTR *a6)
{
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r8
  unsigned __int64 LeafVa; // r9
  ULONG_PTR v14; // r11
  unsigned __int64 v15; // r10
  int v16; // r10d
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // r10d
  unsigned int v21; // ebx
  int v23; // edx
  int v24; // ecx
  char v25; // al
  __int64 v26; // rcx
  unsigned int v27; // r8d
  char v28; // al
  unsigned int v29; // edi
  __int64 v30; // rcx
  ULONG_PTR v31; // r14
  unsigned int v32; // r13d
  int v33; // eax
  int v34; // edi
  unsigned int v35; // ebx
  int v36; // ebx
  ULONG_PTR Page; // rax
  __int64 PageChain; // r15
  _QWORD *v39; // rax
  unsigned __int64 v40; // r12
  int v41; // ebx
  signed __int64 v42; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  bool v47; // zf
  int v48; // r14d
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int8 v53; // al
  bool v54; // cf
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  int v58; // r14d
  __int64 v59; // r8
  BOOL HasShadow; // eax
  int v61; // r11d
  __int64 *v62; // rax
  unsigned int v63; // eax
  unsigned __int64 v64; // r14
  int v65; // eax
  __int64 IsPageFileHash; // rax
  KIRQL v67; // r13
  ULONG_PTR v68; // rbx
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int8 v73; // al
  __int16 v74; // cx
  unsigned __int8 v75; // cl
  char v76; // cl
  unsigned __int8 v77; // al
  bool v78; // cf
  unsigned __int8 v79; // cl
  struct _KPRCB *v80; // r10
  int v81; // eax
  _DWORD *v82; // r9
  __int64 v83; // rbx
  unsigned __int64 v84; // rax
  __int16 v85; // ax
  int v86; // ecx
  volatile LONG *SharedVm; // rbx
  _KPROCESS *v88; // rax
  __int16 v89; // bx
  __int16 v90; // r13
  unsigned __int64 v91; // rbx
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r10
  _DWORD *v94; // r9
  int v95; // eax
  ULONG_PTR v96; // rbx
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
  int v100; // eax
  struct _LIST_ENTRY *v101; // rcx
  unsigned __int64 v102; // rax
  int v103; // r13d
  ULONG_PTR v104; // rdi
  __int64 v105; // r8
  __int64 *v106; // rcx
  unsigned int v107; // eax
  char v108; // dl
  unsigned __int8 v109; // al
  KIRQL v110; // bl
  struct _KPRCB *v111; // r10
  _DWORD *v112; // r9
  int v113; // eax
  char v114; // al
  char v115; // al
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r9
  _DWORD *v118; // r8
  int v119; // eax
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r10
  _DWORD *v122; // r9
  int v123; // eax
  unsigned __int64 v124; // rbx
  unsigned __int8 v125; // al
  struct _KPRCB *v126; // r9
  _DWORD *v127; // r8
  int v128; // eax
  unsigned __int8 v129; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL v130; // [rsp+41h] [rbp-BFh]
  int v131; // [rsp+44h] [rbp-BCh]
  unsigned int v132; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h]
  __int64 *v134; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v135; // [rsp+60h] [rbp-A0h]
  __int64 v136; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter2a; // [rsp+70h] [rbp-90h]
  __int64 v138; // [rsp+78h] [rbp-88h]
  int v139; // [rsp+80h] [rbp-80h]
  __int64 v140; // [rsp+88h] [rbp-78h]
  __int64 v141; // [rsp+90h] [rbp-70h]
  _KPROCESS *v142; // [rsp+98h] [rbp-68h]
  int v143; // [rsp+A0h] [rbp-60h]
  int v144; // [rsp+A8h] [rbp-58h] BYREF
  int v145; // [rsp+ACh] [rbp-54h] BYREF
  unsigned __int64 v146; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v147; // [rsp+B8h] [rbp-48h]
  ULONG_PTR *v148; // [rsp+C0h] [rbp-40h]
  _QWORD v149[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *Process; // [rsp+100h] [rbp+0h]
  __int64 v152; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v154[15]; // [rsp+120h] [rbp+20h] BYREF
  ULONG_PTR v155; // [rsp+198h] [rbp+98h]
  _QWORD v156[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v140 = a4;
  v148 = a6;
  v129 = 0;
  v130 = 0;
  ++MiCont;
  memset((char *)v154 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 8);
  v10 = 0LL;
  v147 = 0LL;
  v141 = 0LL;
  v143 = 0;
  v139 = 0;
  LODWORD(v154[0]) = a3;
  v155 = -1LL;
  v134 = (__int64 *)(v9 | 0x8000000000000000uLL);
  v11 = (__int64)((v9 | 0x8000000000000000uLL) << 25) >> 16;
  v135 = v11;
  LeafVa = MiGetLeafVa(v11);
  if ( v11 < v15 || v11 > 0xFFFFF6FFFFFFFFFFuLL )
    v16 = LODWORD(v154[1]) | 1;
  else
    v16 = LODWORD(v154[1]) | 8;
  LODWORD(v154[1]) = v16;
  BugCheckParameter3 = v14;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  BugCheckParameter2a = v17;
  if ( a6 )
    *a6 = v14;
  v18 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL;
  v142 = 0LL;
  v19 = *(_QWORD *)(qword_140C673C8 + 8 * v18);
  v138 = v19;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C6A558 && LeafVa <= qword_140C67070 )
  {
    v20 = v16 | 8;
    LODWORD(v154[1]) = v20;
    if ( (v20 & 1) != 0 )
    {
      v16 = v20 | 2;
      if ( v11 >= qword_140C67068 && v11 < qword_140C67068 + MiHyperSpaceSize() )
        v16 |= 0x100u;
    }
    else
    {
      v16 = v20 | 4;
    }
LABEL_15:
    v16 |= 0x1000u;
    LODWORD(v154[1]) = v16;
  }
  if ( (v16 & 0x1000) == 0 )
  {
    v21 = MiLockStealSystemVm(BugCheckParameter2, a2, (unsigned __int64)v134, (__int64)v154);
    if ( v21 != 1 )
      goto LABEL_18;
    v23 = v154[6];
    v27 = 1;
    v131 = 0;
    v136 = v154[3];
    v28 = *(_BYTE *)(v154[3] + 184LL) & 7;
    v132 = 1;
    if ( v28 == 7 )
    {
      if ( (a3 & 0x10000000) != 0 )
      {
        ++dword_140C136EC;
        v29 = 0;
LABEL_54:
        v31 = BugCheckParameter3;
        goto LABEL_55;
      }
      v132 = 2;
    }
    else if ( ((v28 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v154[6]) == 1 )
        v27 = 2;
      v132 = v27;
    }
    if ( LODWORD(v154[6]) == 3 )
    {
      if ( (v154[1] & 1) != 0 )
        v24 = LODWORD(v154[1]) | 0xA;
      else
        v24 = LODWORD(v154[1]) | 0xC;
      LODWORD(v154[1]) = v24;
LABEL_23:
      if ( (a3 & 0x10000000) != 0 )
      {
        if ( (v24 & 0x20) != 0 || (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0 || v23 == 2 || (v24 & 8) != 0 )
        {
          ++dword_140C136F4;
          goto LABEL_53;
        }
        v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v134);
        v26 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
        if ( v26 == v17 )
        {
          ++dword_140C136F0;
LABEL_53:
          v29 = v131;
          goto LABEL_54;
        }
        if ( (v25 & 0x42) != 0 )
        {
          ++dword_140C136F4;
          goto LABEL_53;
        }
        if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
        {
          v31 = BugCheckParameter3;
        }
        else
        {
          if ( (MiGetWsleContents(v26, v11) & 0xF) == 8 )
            goto LABEL_53;
          memset(v156, 0, 0xB8uLL);
          LODWORD(v156[0]) = MiTbFlushType(v136);
          WORD2(v156[0]) = 4;
          v156[2] = 0LL;
          LODWORD(v156[1]) = 20;
          v156[3] = 0LL;
          if ( dword_140C67FE8 )
            MI_WSLE_LOG_ACCESS(v30, (unsigned __int64)v134);
          MiInsertTbFlushEntry((__int64)v156, v11, 1LL, 0);
          v31 = BugCheckParameter3;
          if ( !MiFreeWsleList(v136, (__int64)v156, 0) )
          {
            v29 = 2;
            goto LABEL_55;
          }
        }
        goto LABEL_71;
      }
      v32 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
      if ( a5 == -1 )
      {
        v36 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
              + 2);
        v35 = ((unsigned int)MiGetPfnChannel(BugCheckParameter2) << byte_140C65A8E) | dword_140C65AF8 & v17 | (v36 << byte_140C65A8D);
        v34 = (a3 >> 8) & 0x10000;
        if ( (a3 & 0x2000000) != 0 )
          v34 |= 0x20000u;
      }
      else
      {
        v33 = dword_140C65AF8 & v17;
        v34 = 48;
        v35 = v33 | a5 & ~dword_140C65AF8;
      }
      v31 = -1LL;
      if ( v155 == -1LL )
      {
        Page = MiGetPage(v19, v35, v34);
        BugCheckParameter3 = Page;
        if ( Page == -1LL )
        {
          v29 = v131;
          ++dword_140C13674;
          v31 = -1LL;
          goto LABEL_55;
        }
        PageChain = 48 * Page - 0x220000000000LL;
      }
      else
      {
        v39 = MiSearchNumaNodeTable(BugCheckParameter2a);
        v146 = 1LL;
        PageChain = MiGetPageChain(v19, v136, v135, *((_DWORD *)v39 + 2) + 1, v32, v34, v155, &v146);
        if ( !PageChain )
        {
          ++dword_140C13678;
LABEL_71:
          v29 = v131;
LABEL_55:
          MiUnlockStealVm(v154);
          if ( v10 )
            MiReleaseFreshPage(v10);
          MiLockPageInline(BugCheckParameter2);
          if ( v29 == 1 )
          {
            if ( v148 )
              *v148 = v31;
            ++dword_140C13624;
            return v29;
          }
          if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
          {
            if ( v29 != 2 )
              return v29;
          }
          else
          {
            v131 = 2;
            v29 = 2;
          }
          if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
            return 0;
          else
            ++dword_140C13628;
          return v29;
        }
        BugCheckParameter3 = 0xAAAAAAAAAAAAAAABuLL * ((PageChain + 0x220000000000LL) >> 4);
      }
      if ( PageChain == BugCheckParameter2 )
      {
        v29 = 1;
        goto LABEL_54;
      }
      v40 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
      if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) )
      {
        v41 = LODWORD(v154[1]) | 0x2000;
        LODWORD(v154[1]) |= 0x2000u;
      }
      else
      {
        v41 = v154[1];
      }
      v42 = 0LL;
      if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v40 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
            v47 = (v46 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v46;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v40);
        ++dword_140C13664;
        goto LABEL_337;
      }
      v48 = v154[6];
      if ( ((*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (*(_BYTE *)BugCheckParameter2 & 1) == 0)
        && LODWORD(v154[6]) != 2
        && (v41 & 0x26) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v49 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v49 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            v51 = v50->SchedulerAssist;
            v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
            v47 = (v52 & v51[5]) == 0;
            v51[5] &= v52;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        __writecr8(v40);
        ++dword_140C13668;
        goto LABEL_337;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6
        || v138 != *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v120 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v120 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v120 >= 2u )
          {
            v121 = KeGetCurrentPrcb();
            v122 = v121->SchedulerAssist;
            v123 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
            v47 = (v123 & v122[5]) == 0;
            v122[5] &= v123;
            if ( v47 )
              KiRemoveSystemWorkPriorityKick(v121);
          }
        }
        __writecr8(v40);
        ++dword_140C13670;
        goto LABEL_337;
      }
      if ( (v41 & 0x20) == 0 )
        v42 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v134);
      if ( v48 != 3 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v132 == 1 )
      {
        if ( (v41 & 0x10) == 0 )
        {
          ++dword_140C1367C;
          goto LABEL_109;
        }
        v41 |= 0x208u;
        LODWORD(v154[1]) = v41;
      }
      if ( v48 != 2 )
      {
        if ( (v41 & 0x20) != 0 )
        {
          v42 = MiPrepareToStealNonPagedPool(BugCheckParameter2, v134, 0LL);
          if ( !v42 )
          {
LABEL_109:
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !(_DWORD)KiIrqlFlags
              || (v53 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) == 0)
              || v53 > 0xFu
              || (unsigned __int8)v40 > 0xFu )
            {
LABEL_117:
              __writecr8(v40);
LABEL_337:
              v10 = PageChain;
LABEL_338:
              if ( v10 )
              {
                v124 = (unsigned __int8)MiLockPageInline(v10);
                *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( (_DWORD)KiIrqlFlags )
                {
                  v125 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                    && v125 <= 0xFu
                    && (unsigned __int8)v124 <= 0xFu
                    && v125 >= 2u )
                  {
                    v126 = KeGetCurrentPrcb();
                    v127 = v126->SchedulerAssist;
                    v128 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v124 + 1));
                    v47 = (v128 & v127[5]) == 0;
                    v127[5] &= v128;
                    if ( v47 )
                      KiRemoveSystemWorkPriorityKick(v126);
                  }
                }
                __writecr8(v124);
              }
              goto LABEL_53;
            }
            v54 = v53 < 2u;
LABEL_114:
            if ( !v54 )
            {
              v55 = KeGetCurrentPrcb();
              v56 = v55->SchedulerAssist;
              v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
              v47 = (v57 & v56[5]) == 0;
              v56[5] &= v57;
              if ( v47 )
                KiRemoveSystemWorkPriorityKick(v55);
            }
            goto LABEL_117;
          }
        }
        else if ( ((v41 & 8) == 0 || (v41 & 0x100) != 0) && ((v42 & 0x42) != 0 || (v41 & 0x2000) != 0) )
        {
          if ( (v41 & 0x100) != 0 )
          {
            MiWriteValidPteNewProtection((unsigned __int64)v134, v42 & 0xFFFFFFFFFFFFFFBDuLL);
          }
          else
          {
            v58 = 0;
            LODWORD(v154[1]) = v41 | 0x40;
            if ( MiPteInShadowRange((unsigned __int64)v134) )
            {
              HasShadow = MiPteHasShadow();
              v61 = 1;
              if ( HasShadow )
                v58 = 1;
            }
            else
            {
              v61 = 1;
            }
            v62 = v134;
            *v134 = v42 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            if ( v58 )
              MiWritePteShadow((__int64)v62, v42 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, v59);
            v143 = v61;
          }
          v63 = MiTbFlushType(v136);
          v64 = v135;
          KeFlushSingleTb(v135, v63, v132);
LABEL_139:
          v65 = v132;
          if ( v132 == 1 )
          {
            if ( (v154[1] & 4) != 0 )
              v65 = 2;
            v132 = v65;
          }
          MiLockNestedPageAtDpcInline(PageChain);
          MiFinalizePageAttribute(PageChain, v32, 1u);
          if ( LODWORD(v154[6]) == 2 )
          {
            IsPageFileHash = MiVaIsPageFileHash(v138, v64);
            v141 = IsPageFileHash;
            if ( !IsPageFileHash )
            {
              v67 = v130;
              goto LABEL_148;
            }
            v130 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
            v67 = v130;
            if ( v141 != MiVaIsPageFileHash(v138, v64)
              || (v68 = BugCheckParameter2a, !MiSmallVaStillMapsFrame(v64, BugCheckParameter2a)) )
            {
              IsPageFileHash = v141;
LABEL_148:
              ++dword_140C13658;
              if ( IsPageFileHash )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 232));
                if ( (_DWORD)KiIrqlFlags )
                {
                  v69 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu && v67 <= 0xFu && v69 >= 2u )
                  {
                    v70 = KeGetCurrentPrcb();
                    v71 = v70->SchedulerAssist;
                    v72 = ~(unsigned __int16)(-1LL << (v67 + 1));
                    v47 = (v72 & v71[5]) == 0;
                    v71[5] &= v72;
                    if ( v47 )
                      KiRemoveSystemWorkPriorityKick(v70);
                  }
                }
                __writecr8(v67);
              }
              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !(_DWORD)KiIrqlFlags )
                goto LABEL_117;
              v73 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v73 > 0xFu || (unsigned __int8)v40 > 0xFu )
                goto LABEL_117;
              v54 = v73 < 2u;
              goto LABEL_114;
            }
          }
          else
          {
            v68 = BugCheckParameter2a;
          }
          MiCopyPfnEntryEx(PageChain, (__int128 *)BugCheckParameter2);
          if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == v68 )
            MiSetPfnPteFrame(PageChain, BugCheckParameter3);
          _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v74 = v154[1];
          if ( (v154[1] & 0x20) == 0 && LODWORD(v154[6]) != 2 )
          {
            if ( (v154[1] & 0x200) != 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (_DWORD)KiIrqlFlags )
              {
                v75 = KeGetCurrentIrql();
                if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v75 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v75 >= 2u )
                {
                  v76 = v40 + 1;
                  goto LABEL_196;
                }
              }
              goto LABEL_198;
            }
            if ( ((LODWORD(v154[1]) >> 3) & 1) == 0 && !v132 || (v154[1] & 0xA) == 0xA || (v154[1] & 0x100) != 0 )
            {
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !(_DWORD)KiIrqlFlags )
                goto LABEL_198;
              v77 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v77 > 0xFu || (unsigned __int8)v40 > 0xFu )
                goto LABEL_198;
              v78 = v77 < 2u;
              goto LABEL_194;
            }
            if ( ((LODWORD(v154[1]) >> 3) & 1) != 0 && (v154[1] & 2) == 0 && !v132
              || LODWORD(v154[6]) == 3 && (v154[1] & 4) != 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !(_DWORD)KiIrqlFlags )
                goto LABEL_198;
              v79 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || v79 > 0xFu || (unsigned __int8)v40 > 0xFu )
                goto LABEL_198;
              v78 = v79 < 2u;
LABEL_194:
              if ( !v78 )
              {
                v76 = v40 + 1;
LABEL_196:
                v80 = KeGetCurrentPrcb();
                v81 = ~(unsigned __int16)(-1LL << v76);
                v82 = v80->SchedulerAssist;
                v47 = (v81 & v82[5]) == 0;
                v82[5] &= v81;
                if ( v47 )
                  KiRemoveSystemWorkPriorityKick(v80);
              }
LABEL_198:
              __writecr8(v40);
              v74 = v154[1];
              LOBYTE(v40) = 17;
            }
          }
          if ( (v74 & 0x200) != 0 )
          {
            v138 = MiLockProtoPoolPage(v135, &v129);
            v83 = v138;
            if ( !v138 )
            {
              ++dword_140C13680;
LABEL_202:
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(PageChain + 16));
              goto LABEL_337;
            }
            if ( *(_WORD *)(v138 + 32) > 2u )
            {
              ++dword_140C13684;
LABEL_205:
              MiUnlockProtoPoolPage(v83, v129);
              goto LABEL_202;
            }
            v42 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v134);
            if ( (v42 & 0x42) != 0 )
            {
              v144 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v83 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v144);
                while ( *(__int64 *)(v83 + 24) < 0 );
              }
              if ( *(_WORD *)(v83 + 32) > 2u )
              {
                ++dword_140C13684;
                _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_205;
              }
              MiWriteValidPteNewProtection((unsigned __int64)v134, v42 & 0xFFFFFFFFFFFFFFBDuLL);
              KeFlushSingleTb(v135, 0, 1u);
              v84 = MiCaptureDirtyBitToPfn(v83);
              _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v84 )
                MiReleasePageFileInfo(
                  *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v83 + 40) >> 43) & 0x3FFLL)),
                  v84,
                  1);
              v145 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(PageChain + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v145);
                while ( *(__int64 *)(PageChain + 24) < 0 );
              }
              MiCaptureDirtyBitToPfn(PageChain);
              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v74 = v154[1];
            v68 = BugCheckParameter2a;
          }
          else
          {
            v129 = 17;
            v138 = 0LL;
          }
          if ( (v74 & 0x200) != 0 )
          {
            if ( (unsigned int)MiReplacePageOfProtoPool(v135, v68, BugCheckParameter3, v140) )
              goto LABEL_236;
          }
          else
          {
            if ( (LODWORD(v154[6]) != 3 || (v74 & 4) == 0) && ((v74 & 8) == 0 || (v74 & 2) != 0 || v132) )
            {
              if ( (_BYTE)v40 == 17 )
              {
                v85 = 0;
              }
              else
              {
                LODWORD(v140) = 4;
                MiLockNestedPageAtDpcInline(PageChain);
                v74 = v154[1];
                v85 = v140;
              }
              v89 = v85 | 2;
              if ( (v74 & 0x2000) == 0 )
                v89 = v85;
              MiCopyPage(BugCheckParameter3, BugCheckParameter2a, v89);
              if ( (v89 & 4) != 0 )
                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v90 = v154[1];
              if ( (v154[1] & 0x20) == 0 && (_BYTE)v40 != 17 )
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              goto LABEL_259;
            }
            v152 = 0LL;
            v149[1] = v135;
            CurrentThread = KeGetCurrentThread();
            v149[4] = BugCheckParameter3;
            v149[0] = v136;
            v149[3] = v68;
            Flink = 0LL;
            v149[2] = v140;
            Process = CurrentThread->ApcState.Process;
            if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == v68 )
            {
              if ( (*(_BYTE *)(v136 + 187) & 2) != 0
                || _interlockedbittestandset((volatile signed __int32 *)&v142[2].Header.WaitListHead.Flink + 1, 1u) )
              {
                goto LABEL_247;
              }
              v86 = LODWORD(v154[1]) | 0x400;
              LODWORD(v154[1]) |= 0x400u;
              if ( Process->DirectoryTableBase >> 12 != v68 )
              {
                HIDWORD(v152) = 1;
                Flink = Process[1].ProcessListEntry.Flink;
                LODWORD(v154[1]) = v86 | 0x4000;
              }
              MiReleaseFaultState((__int64)&v154[3], 0x11u, 0LL);
              KeSwapDirectoryTableBase(Process, HIDWORD(v152), v149);
              SharedVm = (volatile LONG *)MiGetSharedVm(v136);
              ExAcquireSpinLockExclusive(SharedVm);
              v88 = v142;
              *((_DWORD *)SharedVm + 1) = 0;
              _InterlockedAnd((volatile signed __int32 *)&v88[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
            }
            else
            {
              MiReplacePageTablePage((unsigned __int64)v149);
            }
            if ( (int)v152 >= 0 )
            {
LABEL_236:
              if ( (v154[1] & 0x200) != 0 )
              {
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
                MiLockNestedPageAtDpcInline(PageChain);
              }
              else
              {
                ++dword_140C13630;
                v91 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
                *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( (_DWORD)KiIrqlFlags )
                {
                  v92 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                    && v92 <= 0xFu
                    && (unsigned __int8)v91 <= 0xFu
                    && v92 >= 2u )
                  {
                    v93 = KeGetCurrentPrcb();
                    v94 = v93->SchedulerAssist;
                    v95 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v91 + 1));
                    v47 = (v95 & v94[5]) == 0;
                    v94[5] &= v95;
                    if ( v47 )
                      KiRemoveSystemWorkPriorityKick(v93);
                  }
                }
                __writecr8(v91);
                LOBYTE(v40) = 17;
              }
              v90 = v154[1];
LABEL_259:
              v96 = v42 ^ (v42 ^ (BugCheckParameter3 << 12)) & 0xFFFFFFFFFF000LL;
              if ( (v90 & 0x20) != 0 )
              {
                v96 |= 0x20uLL;
                MiLockNestedPageAtDpcInline(PageChain);
                if ( (MiFlags & 0x2000000) != 0 )
                  _mm_lfence();
                if ( v42 != _InterlockedCompareExchange64(v134, v96, v42) )
                {
                  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(PageChain + 16));
                  *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    v97 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                      && v97 <= 0xFu
                      && (unsigned __int8)v40 <= 0xFu
                      && v97 >= 2u )
                    {
                      v98 = KeGetCurrentPrcb();
                      v99 = v98->SchedulerAssist;
                      v100 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                      v47 = (v100 & v99[5]) == 0;
                      v99[5] &= v100;
                      if ( v47 )
                        KiRemoveSystemWorkPriorityKick(v98);
                    }
                  }
                  __writecr8((unsigned __int8)v40);
                  goto LABEL_337;
                }
                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v90 = v154[1];
                *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
LABEL_297:
                if ( (v90 & 0x200) != 0 )
                {
                  if ( (unsigned int)Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting()
                    && v139 )
                  {
                    MiWriteValidPteNewProtection((unsigned __int64)v134, v96 | 0x42);
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  MiUnlockProtoPoolPage(v138, v129);
                  LOBYTE(v40) = 17;
                }
                else if ( (v90 & 0x10) != 0 && (v90 & 0x40) == 0 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
                if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
                {
                  v108 = 12;
                  if ( (_BYTE)v40 == 17 )
                    v108 = 8;
                  MiClearPfnImageVerified(BugCheckParameter2, v108);
                }
                if ( LODWORD(v154[6]) == 2 )
                {
                  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v141 + 232));
                  if ( (_DWORD)KiIrqlFlags
                    && (v109 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
                    && v109 <= 0xFu )
                  {
                    v110 = v130;
                    if ( v130 <= 0xFu && v109 >= 2u )
                    {
                      v111 = KeGetCurrentPrcb();
                      v112 = v111->SchedulerAssist;
                      v113 = ~(unsigned __int16)(-1LL << (v130 + 1));
                      v47 = (v113 & v112[5]) == 0;
                      v112[5] &= v113;
                      if ( v47 )
                        KiRemoveSystemWorkPriorityKick(v111);
                    }
                  }
                  else
                  {
                    v110 = v130;
                  }
                  __writecr8(v110);
                }
                if ( (_BYTE)v40 == 17 )
                  LOBYTE(v40) = MiLockPageInline(BugCheckParameter2);
                MiSetPfnIdentity(BugCheckParameter2, 0);
                v114 = *(_BYTE *)(BugCheckParameter2 + 34);
                *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x8000000000000000uLL;
                *(_BYTE *)(BugCheckParameter2 + 34) = v114 & 0xC7;
                v115 = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
                *(_WORD *)(BugCheckParameter2 + 32) = 0;
                *(_BYTE *)(BugCheckParameter2 + 35) = v115;
                *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( (_DWORD)KiIrqlFlags )
                {
                  v116 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                    && v116 <= 0xFu
                    && (unsigned __int8)v40 <= 0xFu
                    && v116 >= 2u )
                  {
                    v117 = KeGetCurrentPrcb();
                    v118 = v117->SchedulerAssist;
                    v119 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                    v47 = (v119 & v118[5]) == 0;
                    v118[5] &= v119;
                    if ( v47 )
                      KiRemoveSystemWorkPriorityKick(v117);
                  }
                }
                __writecr8((unsigned __int8)v40);
                v10 = v147;
                v29 = 1;
                goto LABEL_54;
              }
              if ( (v90 & 0x400) != 0 )
              {
                if ( (v90 & 0x4000) != 0 )
                {
                  v101 = v142[1].ProcessListEntry.Flink;
                  if ( !v101
                    || (v102 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v101 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                        ((v102 >> 12) & 0xFFFFFFFFFFLL) != BugCheckParameter3) )
                  {
                    v131 = 2;
                    v10 = BugCheckParameter2;
                    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
                    goto LABEL_338;
                  }
                }
                goto LABEL_295;
              }
              if ( (v90 & 0x40) == 0 )
              {
                if ( (v90 & 0x200) != 0 )
                {
                  if ( (unsigned int)Feature_Servicing_MmStPoolCorruptionRaceCondition__private_IsEnabledNoReporting()
                    && (v96 & 0x42) != 0 )
                  {
                    v96 &= 0xFFFFFFFFFFFFFFBDuLL;
                    v139 = 1;
                  }
                }
                else if ( (v90 & 0x10) != 0 )
                {
                  MiLockNestedPageAtDpcInline(PageChain);
                }
                MiWriteValidPteNewPage(v134, v96, 0);
                goto LABEL_294;
              }
              v103 = 0;
              v104 = v42 ^ (v42 ^ (BugCheckParameter3 << 12)) & 0xFFFFFFFFFF000LL;
              if ( MiPteInShadowRange((unsigned __int64)v134) )
              {
                if ( MiPteHasShadow() )
                {
                  v103 = 1;
                  if ( !HIBYTE(word_140C66CFC) )
                  {
LABEL_283:
                    if ( (v96 & 1) != 0 )
                      v104 = v96 | 0x8000000000000000uLL;
                  }
                }
                else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                {
                  goto LABEL_283;
                }
              }
              v106 = v134;
              *v134 = v104;
              if ( v103 )
                MiWritePteShadow((__int64)v106, v104, v105);
LABEL_294:
              v90 = v154[1];
LABEL_295:
              if ( !v143 )
              {
                v107 = MiTbFlushType(v136);
                KeFlushSingleTb(v135, v107, v132);
                v90 = v154[1];
              }
              goto LABEL_297;
            }
          }
LABEL_247:
          if ( (v154[1] & 0x200) != 0 )
            MiUnlockProtoPoolPage(v138, v129);
          goto LABEL_202;
        }
      }
      v64 = v135;
      goto LABEL_139;
    }
LABEL_22:
    LOBYTE(v24) = v154[1];
    goto LABEL_23;
  }
  LOBYTE(v12) = a2;
  v21 = MiLockStealUserVm(v19, BugCheckParameter2, v12, v134, v154);
  if ( v21 == 1 )
  {
    v23 = v154[6];
    v131 = 0;
    v132 = 0;
    v142 = KeGetCurrentThread()->ApcState.Process;
    v136 = v154[3];
    goto LABEL_22;
  }
LABEL_18:
  ++dword_140C13688;
  dword_140C1368C = -1431655765 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  MiLockPageInline(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    return 0;
  return v21;
}
