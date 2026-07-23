/*
 * XREFs of MiMakePageAvoidRead @ 0x1402CE000
 * Callers:
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     MiWriteValidPteVolatile @ 0x140217040 (MiWriteValidPteVolatile.c)
 *     MiReleasePageFileSpace @ 0x14021943C (MiReleasePageFileSpace.c)
 *     MiPfnZeroingNeeded @ 0x14021AF14 (MiPfnZeroingNeeded.c)
 *     MiIdentifyPfn @ 0x14023E4A0 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiAreChargesNeededToLockPage @ 0x1402CDF90 (MiAreChargesNeededToLockPage.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiLockOwnedProtoPage @ 0x1402DD410 (MiLockOwnedProtoPage.c)
 *     MiGetPfnPriority @ 0x1402DF258 (MiGetPfnPriority.c)
 *     MiChargePartitionResidentAvailable @ 0x1402E6278 (MiChargePartitionResidentAvailable.c)
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x1402F2864 (MiGetPagingFileOffset.c)
 *     MiZeroPhysicalPage @ 0x14033905C (MiZeroPhysicalPage.c)
 *     MiUserPdeOrAbove @ 0x14033C430 (MiUserPdeOrAbove.c)
 *     MiIsAddressGlobal @ 0x140347638 (MiIsAddressGlobal.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiLockAndInsertPageInFreeList @ 0x14038A8F4 (MiLockAndInsertPageInFreeList.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046ADD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiBadRefCount @ 0x14064D6B0 (MiBadRefCount.c)
 *     MiBadShareCount @ 0x14064D6FC (MiBadShareCount.c)
 *     MiWaitForFreePage @ 0x140653AB8 (MiWaitForFreePage.c)
 *     MiMapCacheExceptionFilter @ 0x140A308FC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        int a3,
        size_t a4,
        char a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  int NodeShiftedColor; // r9d
  int v12; // eax
  signed __int32 v13; // edx
  unsigned int v14; // r8d
  __int64 Page; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // ebx
  BOOL v20; // esi
  signed __int64 v21; // rdx
  signed __int64 v22; // r8
  __int64 v23; // rcx
  ULONG_PTR v24; // r14
  char v25; // r15
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  char *v32; // rsi
  unsigned __int64 *v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // rbx
  __int64 v37; // rsi
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v39; // rax
  struct _KPRCB *v40; // rdx
  __int64 v41; // rcx
  bool v42; // r15
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  int v45; // ebx
  __int64 v46; // rcx
  void *v47; // r14
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v49; // ett
  volatile signed __int64 *v50; // r14
  char v51; // al
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 *v56; // r13
  unsigned int v57; // r15d
  __int64 v58; // rax
  unsigned __int64 v59; // r8
  signed __int64 v60; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v62; // ebx
  unsigned __int64 v63; // rdx
  volatile signed __int32 *v64; // r14
  __int64 v65; // rdx
  _BYTE *v66; // r9
  __int64 v67; // r15
  int *v68; // rbx
  unsigned __int8 v69; // r14
  int v70; // edi
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // rbx
  char *v74; // r9
  volatile signed __int64 *v75; // rdi
  __int64 v76; // r8
  __int64 v77; // rdx
  ULONG_PTR v78; // r15
  _QWORD *v79; // r12
  unsigned __int64 UltraMapping; // r9
  __int64 v81; // rdi
  __int64 v82; // r13
  __int64 v83; // r15
  int v84; // r8d
  int v85; // edx
  __int64 ValidPte; // rbx
  _QWORD *MmInternal; // r14
  __int64 *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int16 v94; // cx
  bool v95; // zf
  __int16 v96; // cx
  __int64 v97; // r8
  __int64 v98; // rax
  int v99; // edx
  BOOL v100; // ebx
  unsigned __int64 v101; // rdx
  char v102; // al
  __int64 v103; // rcx
  __int64 v104; // rdi
  unsigned __int64 v105; // r9
  struct _KPRCB *v106; // r8
  __int64 v107; // rdx
  signed __int32 v108; // eax
  unsigned __int8 v109; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  size_t v115; // r13
  unsigned int v116; // ebx
  signed __int64 v117; // rcx
  unsigned __int8 v118; // cl
  struct _KPRCB *v119; // r10
  _DWORD *v120; // r9
  int v121; // eax
  struct _KPRCB *v122; // r10
  _DWORD *v123; // r9
  int v124; // edx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v126; // rcx
  struct _LIST_ENTRY *v127; // rcx
  __int64 v128; // rcx
  signed __int64 v129; // rdx
  _DWORD *v130; // r9
  __int64 v131; // rdx
  unsigned __int8 v132; // cl
  struct _KPRCB *v133; // r10
  _DWORD *v134; // r9
  int v135; // eax
  char v136; // al
  char v137; // al
  char v138; // al
  unsigned __int8 v139; // cl
  struct _KPRCB *v140; // r9
  _DWORD *v141; // r8
  int v142; // eax
  unsigned __int8 v143; // cl
  struct _KPRCB *v144; // r9
  _DWORD *v145; // r8
  int v146; // eax
  unsigned __int8 v147; // [rsp+30h] [rbp-188h]
  BOOL v148; // [rsp+34h] [rbp-184h]
  BOOL v149; // [rsp+34h] [rbp-184h]
  __int64 v150; // [rsp+38h] [rbp-180h]
  int v151; // [rsp+40h] [rbp-178h]
  _DWORD Size[3]; // [rsp+44h] [rbp-174h] BYREF
  _BYTE *v153; // [rsp+50h] [rbp-168h]
  int v154; // [rsp+58h] [rbp-160h]
  int v155; // [rsp+5Ch] [rbp-15Ch]
  unsigned __int64 v156; // [rsp+60h] [rbp-158h]
  unsigned __int64 v157; // [rsp+68h] [rbp-150h]
  volatile signed __int32 *v158; // [rsp+70h] [rbp-148h]
  __int64 v159; // [rsp+78h] [rbp-140h]
  unsigned __int64 v160; // [rsp+80h] [rbp-138h]
  unsigned __int64 *v161; // [rsp+88h] [rbp-130h] BYREF
  __int64 v162; // [rsp+90h] [rbp-128h]
  __int64 v163; // [rsp+98h] [rbp-120h]
  __int64 v164; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v165; // [rsp+A8h] [rbp-110h] BYREF
  void *Src; // [rsp+B0h] [rbp-108h] BYREF
  unsigned __int64 v167; // [rsp+B8h] [rbp-100h]
  _DWORD *v168; // [rsp+C0h] [rbp-F8h]
  __int64 v169; // [rsp+C8h] [rbp-F0h]
  __int64 v170; // [rsp+D0h] [rbp-E8h]
  __int64 v171; // [rsp+D8h] [rbp-E0h] BYREF
  __int128 v172; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v173; // [rsp+F0h] [rbp-C8h]
  __int128 v174; // [rsp+100h] [rbp-B8h]
  __int128 v175; // [rsp+110h] [rbp-A8h]
  __int128 v176; // [rsp+120h] [rbp-98h]
  __int128 v177; // [rsp+130h] [rbp-88h]
  __int128 v178; // [rsp+140h] [rbp-78h]
  __int128 v179; // [rsp+150h] [rbp-68h]
  _QWORD v180[2]; // [rsp+168h] [rbp-50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  Size[0] = a3;
  Src = a2;
  v157 = a1;
  v160 = a1;
  v161 = a6;
  v180[0] = a7;
  v147 = 0;
  v172 = 0LL;
  v173 = 0LL;
  *a7 = 0;
  v8 = *a6;
  if ( qword_140C65C40 )
  {
    if ( (v8 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 &= ~qword_140C65C40;
  }
  v170 = v8 >> 16;
  v164 = v8 >> 16;
  v162 = *(_QWORD *)(v8 >> 16);
  v165 = v162;
  v9 = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(v162 + 60) & 0x3FF));
  v168 = (_DWORD *)(v162 + 56);
  if ( ((*(_DWORD *)(v162 + 56) >> 20) & 0x7F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v162 + 56) >> 20) & 0x7F) - 1) << byte_140C65B8D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v12 = (1 << byte_140C65B8E) - 1;
  v13 = v12 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v14 = 0;
  if ( a4 != 4096 )
    v14 = 2;
  Page = MiGetPage(v9, NodeShiftedColor | (unsigned int)v13, v14);
  v156 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v9);
    return 1LL;
  }
  v16 = 48 * Page;
  *(_QWORD *)&Size[1] = 48 * Page;
  v159 = 48 * Page;
  v17 = 48 * Page - 0x220000000000LL;
  v150 = v17;
  v18 = (*a6 >> 5) & 0x1F;
  v169 = v18;
  v155 = v18;
  v19 = 1;
  if ( (_DWORD)v18 )
  {
    if ( (_DWORD)v18 != 31 )
    {
      if ( (unsigned int)v18 >> 3 == 3 && (v18 & 7) != 0 )
      {
        v19 = 2;
      }
      else if ( (unsigned int)v18 >> 3 == 1 )
      {
        v19 = 0;
      }
    }
  }
  else
  {
    v19 = 3;
  }
  v20 = 0;
  v148 = 0;
  v151 = 0;
  if ( a4 != 4096 )
  {
    v20 = MiPfnZeroingNeeded(v17);
    v148 = v20;
    v17 = v150;
  }
  v153 = (_BYTE *)(v16 - 0x21FFFFFFFFDELL);
  if ( *(unsigned __int8 *)(v16 - 0x21FFFFFFFFDELL) >> 6 != v19 )
    MiChangePageAttribute(v17, v19, 0LL);
  v158 = (volatile signed __int32 *)(v16 - 0x21FFFFFFFFE8LL);
  v21 = *(_QWORD *)(v16 - 0x21FFFFFFFFE8LL);
  v22 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v16 - 0x21FFFFFFFFE8LL),
          v21 & 0xC7FFFFFFFFFFFFFFuLL,
          v21);
  if ( v21 != v22 )
  {
    do
    {
      v117 = v22;
      v22 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v16 - 0x21FFFFFFFFE8LL),
              v22 & 0xC7FFFFFFFFFFFFFFuLL,
              v22);
    }
    while ( v117 != v22 );
  }
  v24 = MiReservePtes((__int64)&qword_140C69A40, 1u);
  v167 = v24;
  if ( v24 )
  {
    v25 = 4;
    if ( v156 <= qword_140C65CA0 )
    {
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v27 = (unsigned __int8)*v153 >> 6;
        if ( !v27 || v27 == 3 )
        {
          v25 = 12;
        }
        else if ( v27 == 2 )
        {
          v25 = 28;
        }
      }
    }
    v28 = ((v156 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v25 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v24 < 0xFFFFF68000000000uLL || v24 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_221;
    v29 = (__int64)(v24 << 25) >> 16;
    if ( v24 >= 0xFFFFF6FB40000000uLL && v24 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v28 = v24 == 0xFFFFF6FB7DBEDF68uLL
          ? ((v156 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v25 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
          : ((v156 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v25 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v24, 0xFFFFF68000000000uLL, 0xFFFFF6FB40000000uLL) )
        v28 |= 4uLL;
    }
    if ( v24 <= 0xFFFFF6BFFFFFFF78uLL )
      v28 |= 4uLL;
    if ( v29 < 0xFFFF800000000000uLL )
    {
      v30 = HIBYTE(word_140C66DFC);
    }
    else
    {
      if ( byte_140C6A4D8[((v29 >> 39) & 0x1FF) - 256] == 1
        || v29 >= 0xFFFFF68000000000uLL && v29 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        goto LABEL_41;
      }
      v30 = v29 > qword_140C67170 || v29 < qword_140C6A658 ? (unsigned __int8)word_140C66DFC : HIBYTE(word_140C66DFC);
    }
    if ( v30 )
LABEL_221:
      v28 |= 0x100uLL;
LABEL_41:
    *(_QWORD *)v24 = ((((unsigned __int16)v28 | 0x42) ^ (unsigned __int16)((unsigned __int8)word_140C66DFC << 8)) & 0x100 ^ (v28 | 0x42)) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v31 = (__int64)(v24 << 25) >> 16;
    v32 = (char *)(Size[0] + v31);
    if ( v148 )
    {
      if ( Size[0] )
        memset((void *)v31, 0, Size[0]);
      v115 = 4096 - a4 - Size[0];
      if ( v115 )
        memset(&v32[a4], 0, v115);
    }
    v154 = 0;
    memmove(v32, Src, a4);
    MiReleasePtes((__int64)&qword_140C69A40, (__int64 *)v24, 1u);
    goto LABEL_43;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v150);
    return 4LL;
  }
  if ( v20 )
    MiZeroPhysicalPage(v23, v156, 0LL, v19);
  v151 = 1;
LABEL_43:
  v149 = (BYTE4(PerfGlobalGroupMask) & 1) != 0;
  v33 = (unsigned __int64 *)(((v157 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v167 = (unsigned __int64)v33;
  while ( 1 )
  {
    v34 = *v33;
    v35 = *v33 & 1;
    while ( 1 )
    {
      if ( !v35 || (v34 & 0x200) != 0 )
        goto LABEL_355;
      v36 = (v34 >> 12) & 0xFFFFFFFFFFLL;
      if ( v36 <= qword_140C65CA0 )
      {
        v163 = 48 * v36;
        if ( (*(_QWORD *)(48 * v36 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v37 = 48 * v36 - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v112) = 4;
      else
        v112 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v112;
    }
    LODWORD(v164) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v164);
      while ( *(__int64 *)(v37 + 24) < 0 );
    }
    v39 = *v33;
    if ( (*v33 & 1) == 0 || (v39 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v143 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v143 <= 0xFu && CurrentIrql <= 0xFu && v143 >= 2u )
          {
            v144 = KeGetCurrentPrcb();
            v145 = v144->SchedulerAssist;
            v146 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v95 = (v146 & v145[5]) == 0;
            v145[5] &= v146;
            if ( v95 )
              KiRemoveSystemWorkPriorityKick(v144);
          }
        }
        __writecr8(CurrentIrql);
      }
LABEL_355:
      MiLockAndInsertPageInFreeList(v150);
      return 1LL;
    }
    if ( v36 == ((v39 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        v118 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v118 <= 0xFu && CurrentIrql <= 0xFu && v118 >= 2u )
        {
          v119 = KeGetCurrentPrcb();
          v120 = v119->SchedulerAssist;
          v121 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v95 = (v121 & v120[5]) == 0;
          v120[5] &= v121;
          if ( v95 )
            KiRemoveSystemWorkPriorityKick(v119);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v37) )
    goto LABEL_64;
  v42 = 0;
  v43 = *(_QWORD *)(v37 + 40);
  if ( v43 < 0 && (*(_DWORD *)(v37 + 16) & 0x400LL) != 0 )
  {
    v42 = 1;
LABEL_57:
    v45 = 1;
    goto LABEL_58;
  }
  v44 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
  if ( v44 > 0xFFFFF6BFFFFFFF78uLL || v44 < 0xFFFFF68000000000uLL )
    goto LABEL_57;
  v45 = 1;
  v42 = (*(_BYTE *)(v37 + 35) & 0x20) != 0;
LABEL_58:
  v46 = ((unsigned __int64)v43 >> 43) & 0x3FF;
  v47 = *(void **)(qword_140C674C8 + 8 * v46);
  if ( !v42 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C674C8 + 8 * v46), 1uLL, 4uLL) )
  {
    if ( v47 == &MiSystemPartition )
    {
      v40 = KeGetCurrentPrcb();
      CachedResidentAvailable = v40->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v41 = (unsigned int)(CachedResidentAvailable - 1);
        v49 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v40->CachedResidentAvailable,
                                    v41,
                                    CachedResidentAvailable);
        if ( v49 == CachedResidentAvailable )
          goto LABEL_63;
      }
    }
    v45 = MiChargePartitionResidentAvailable(v47, 1LL, 0xFFFFFFFFLL);
    if ( !v45 && v42 )
      MiReturnCommit(v47, 1LL);
LABEL_63:
    if ( v45 )
LABEL_64:
      ++*(_WORD *)(v37 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v40) = 17;
    MiLockOwnedProtoPage(v37, v40);
  }
  else
  {
    v147 = CurrentIrql;
    v50 = (volatile signed __int64 *)(*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL);
    v159 = (__int64)v50;
    v51 = *(_BYTE *)(v37 + 34);
    if ( (v51 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && (unsigned __int8)v41 <= 0xFu
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v41 >= 2u )
          {
            v122 = KeGetCurrentPrcb();
            v123 = v122->SchedulerAssist;
            v41 = (unsigned int)CurrentIrql + 1;
            v124 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v95 = (v124 & v123[5]) == 0;
            v123[5] &= v124;
            if ( v95 )
              KiRemoveSystemWorkPriorityKick(v122);
          }
        }
        __writecr8(CurrentIrql);
        LODWORD(v160) = 0;
        while ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
        {
          v116 = v160 + 1;
          LODWORD(v160) = v116;
          if ( (v116 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v41) )
          {
            HvlNotifyLongSpinWait(v116);
          }
          else
          {
            _mm_pause();
          }
        }
        MiLockPageInline(v37);
        v51 = *(_BYTE *)(v37 + 34);
      }
      while ( (v51 & 0x20) != 0 );
      LODWORD(v18) = v169;
      v50 = (volatile signed __int64 *)v159;
    }
    *(_BYTE *)(v37 + 34) = v51 | 0x20;
    if ( (*(_QWORD *)(v37 + 24) & 0x4000000000000000LL) == 0 && (*v50 & 0x20) == 0 )
      MiWriteValidPteVolatile(v50, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v52 = *(_QWORD *)v157;
  if ( (*(_QWORD *)v157 & 1) != 0 || (v52 & 0x800) != 0 && (v52 & 0x400) == 0 || (_DWORD)v18 != ((v52 >> 5) & 0x1F) )
  {
    MiUnlockProtoPoolPage(v37, v147);
    MiLockAndInsertPageInFreeList(v150);
    return 1LL;
  }
  LODWORD(v165) = 0;
  while ( _interlockedbittestandset64(v158, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v165);
    while ( *(__int64 *)v158 < 0 );
  }
  v53 = *(_QWORD *)v157;
  if ( v157 >= 0xFFFFF6FB7DBED000uLL
    && v157 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v53 & 1) != 0
    && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v126 = *((_QWORD *)&Flink->Flink + ((v157 >> 3) & 0x1FF));
      if ( (v126 & 0x20) != 0 )
        v53 |= 0x20uLL;
      if ( (v126 & 0x42) != 0 )
        v53 |= 0x42uLL;
    }
  }
  if ( (v53 & 0x400) != 0 )
    v54 = v53 & 0xFFFFFFFFFFFFF7FFuLL;
  else
    v54 = v53 & 0xFFFFFFFFFFFFFFF7uLL;
  v55 = *(_QWORD *)&Size[1];
  v56 = (__int64 *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFF0LL);
  v159 = (__int64)v56;
  *v56 = v54;
  *(_QWORD *)(v150 + 40) |= 0x8000000000000000uLL;
  v57 = 1;
  if ( (_DWORD)v18 )
  {
    if ( (_DWORD)v18 != 31 )
    {
      if ( (unsigned int)v18 >> 3 == 3 && (v18 & 7) != 0 )
      {
        v57 = 2;
      }
      else if ( (unsigned int)v18 >> 3 == 1 )
      {
        v57 = 0;
      }
    }
  }
  else
  {
    v57 = 3;
  }
  *(_WORD *)(v55 - 0x21FFFFFFFFE0LL) = 1;
  v58 = *(_QWORD *)v167;
  if ( v167 >= 0xFFFFF6FB7DBED000uLL
    && v167 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v58 & 1) != 0
    && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
  {
    v127 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v127 )
    {
      v128 = *((_QWORD *)&v127->Flink + ((v167 >> 3) & 0x1FF));
      if ( (v128 & 0x20) != 0 )
        v58 |= 0x20uLL;
      if ( (v128 & 0x42) != 0 )
        v58 |= 0x42uLL;
    }
  }
  v171 = v58;
  v59 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v171) >> 12) & 0xFFFFFFFFFFLL;
  v174 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  *((_QWORD *)&v176 + 1) = *(_QWORD *)(v150 + 40);
  *((_QWORD *)&v179 + 1) = v59 | *((_QWORD *)&v176 + 1) & 0xFFFFFF0000000000uLL;
  v60 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v150 + 40),
          *((signed __int64 *)&v179 + 1),
          *((signed __int64 *)&v176 + 1));
  *((_QWORD *)&v179 + 1) = v60;
  if ( *((_QWORD *)&v176 + 1) != v60 )
  {
    do
    {
      v129 = v60;
      *((_QWORD *)&v176 + 1) = v60;
      *((_QWORD *)&v179 + 1) = v59 | v60 & 0xFFFFFF0000000000uLL;
      v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v150 + 40), *((signed __int64 *)&v179 + 1), v60);
      *((_QWORD *)&v179 + 1) = v60;
    }
    while ( v129 != v60 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v62 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v62 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v63 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
    if ( v63 && v62 >= *(_DWORD *)(v63 + 1076) )
      LOBYTE(v62) = *(_DWORD *)(v63 + 1076);
  }
  LODWORD(Src) = 0;
  v64 = (volatile signed __int32 *)(48 * v59 - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v64, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&Src);
    while ( *(__int64 *)v64 < 0 );
  }
  *(_QWORD *)v64 ^= (*(_QWORD *)v64 ^ ((*(_QWORD *)v64 & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v64, 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)*v153 >> 6 != v57 )
    MiChangePageAttribute(v150, v57, 1LL);
  *(_QWORD *)v158 = *(_QWORD *)v158 & 0xC000000000000000uLL | 1;
  v65 = *(_QWORD *)&Size[1];
  *(_BYTE *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFDDLL) ^= (*(_BYTE *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFDDLL) ^ v62) & 7;
  *(_QWORD *)(v65 - 0x21FFFFFFFFF8LL) = v157;
  v66 = v153;
  *v153 = *v153 & 0xF8 | 6;
  *v66 |= 0x10u;
  if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v150) > 2 )
    *(_BYTE *)(v113 + v114) = *(_BYTE *)(v113 + v114) & 0xF8 | 2;
  if ( (*v168 & 0x20) != 0 || !*(_QWORD *)(v162 + 64) )
    v67 = 0LL;
  else
    v67 = v170;
  v68 = (int *)(v162 + 72);
  v69 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v69 <= 0xFu )
  {
    v130 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v69 == 2 )
      LODWORD(v131) = 4;
    else
      v131 = (-1LL << (v69 + 1)) & 4;
    v130[5] |= v131;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v68, v69);
  }
  else
  {
    Size[0] = 0;
    if ( _interlockedbittestandset(v68, 0x1Fu) )
      Size[0] = ExpWaitForSpinLockExclusiveAndAcquire(v68, v69);
    while ( (*v68 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (*v68 & 0x40000000) == 0 )
        _InterlockedOr(v68, 0x40000000u);
      KeYieldProcessorEx(Size);
    }
  }
  ++*(_QWORD *)(v162 + 32);
  if ( v67 )
    ++*(_DWORD *)(v67 + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v68, retaddr);
  else
    *v68 = 0;
  if ( (_DWORD)KiIrqlFlags )
  {
    v132 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v132 <= 0xFu && v69 <= 0xFu && v132 >= 2u )
    {
      v133 = KeGetCurrentPrcb();
      v134 = v133->SchedulerAssist;
      v135 = ~(unsigned __int16)(-1LL << (v69 + 1));
      v95 = (v135 & v134[5]) == 0;
      v134[5] &= v135;
      if ( v95 )
        KiRemoveSystemWorkPriorityKick(v133);
    }
  }
  __writecr8(v69);
  v70 = v18 | 0x80000000;
  v71 = v156;
  v72 = ((v156 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v70 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
  if ( (v70 & 5) == 4 && v70 < 0 )
    v72 = ((v156 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v70 & 0x1F] & 0xFFF0000000000E7FuLL | 0x163;
  v73 = v72 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  *(_QWORD *)v157 = v73;
  *v161 = v73;
  if ( v149 )
    MiIdentifyPfn(v71, &v172);
  v74 = v153;
  if ( (*v153 & 7) != 6 )
    MiBadShareCount(v150);
  v75 = (volatile signed __int64 *)v158;
  v76 = 0x3FFFFFFFFFFFFFFFLL;
  v77 = (*(_QWORD *)v158 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)v158 ^= (v77 ^ *(_QWORD *)v158) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v77 )
  {
    v78 = v150;
    if ( *(__int64 *)(v150 + 40) < 0 )
    {
      v79 = (_QWORD *)v150;
      UltraMapping = 0LL;
      v81 = *v56;
      v82 = 0LL;
      do
      {
        v83 = ((unsigned int)v79[1] >> 3) & 0x1FF;
        if ( !UltraMapping )
        {
          v84 = 4;
          v85 = *(unsigned __int8 *)(48 * (v79[5] & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFDELL) >> 6;
          if ( !v85 || v85 == 3 )
          {
            v84 = 12;
          }
          else if ( v85 == 2 )
          {
            v84 = 28;
          }
          ValidPte = MiMakeValidPte(0LL, v79[5] & 0xFFFFFFFFFFLL, v84 | 0xA0000000);
          MmInternal = KeGetCurrentPrcb()->MmInternal;
          UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
          v88 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MmInternal[1543] = v88;
          *v88 = ValidPte;
        }
        v76 = 48 * ((*(_QWORD *)(UltraMapping + 8 * v83) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( (_QWORD *)v76 != v79 )
          KeBugCheckEx(
            0x4Eu,
            6uLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v79 + 0x44000000000LL) >> 4),
            (unsigned int)v83 + UltraMapping,
            *(_QWORD *)(UltraMapping + 8 * v83));
        v89 = v81 & 0x3E0 | (((*(_QWORD *)(UltraMapping + 8 * v83) >> 12) & 0xFFFFFFFFFFLL) << 12) | 0x800;
        v77 = qword_140C65C40;
        if ( qword_140C65C40 )
        {
          if ( (qword_140C65C40 & v89) != 0 )
            v89 = v81 & 0x3E0 | (((*(_QWORD *)(UltraMapping + 8 * v83) >> 12) & 0xFFFFFFFFFFLL) << 12) | 0x810;
          else
            v89 |= qword_140C65C40;
        }
        *(_QWORD *)(UltraMapping + 8 * v83) = v89;
        if ( ++v82 == 1 )
          break;
        v79 = (_QWORD *)(48 * (*v79 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      }
      while ( !v82 );
      *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
      *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
      v56 = (__int64 *)v159;
      v75 = (volatile signed __int64 *)v158;
      v74 = v153;
      v78 = v150;
    }
    v90 = *(_QWORD *)&Size[1];
    --*(_WORD *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFE0LL);
    v91 = ((unsigned __int64)*v75 >> 62) & 1;
    if ( *(_WORD *)(v90 - 0x21FFFFFFFFE0LL) )
    {
      v136 = *v74;
      if ( (_DWORD)v91 )
      {
        v137 = v136 | 7;
      }
      else if ( (v136 & 0x10) != 0 )
      {
        v137 = v136 & 0xF8 | 3;
      }
      else if ( (v136 & 8) != 0 )
      {
        v137 = v136 & 0xF8 | 3;
      }
      else
      {
        v137 = v136 & 0xF8 | 2;
      }
      *v74 = v137;
      if ( (*(_DWORD *)v56 & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v56, v77, v76, v74) )
        *(_BYTE *)(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v78 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
    }
    else if ( (_DWORD)v91 )
    {
      v138 = *(_BYTE *)(v90 - 0x21FFFFFFFFDDLL);
      if ( (v138 & 0x10) != 0 )
        *(_BYTE *)(v90 - 0x21FFFFFFFFDDLL) = v138 & 0xEF;
      MiReleasePageFileSpace(*(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v78 + 40) >> 43) & 0x3FFLL)), *v56, 1);
      *(_QWORD *)&Size[1] = v90 >> 4;
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v90 >> 4));
    }
    else
    {
      v92 = *v56;
      if ( (*v56 & 0x400) != 0 )
        v93 = v92 & 0xFFFFFFFFFFFFF7FFuLL;
      else
        v93 = v92 & 0xFFFFFFFFFFFFFFF7uLL;
      *v56 = v93;
      if ( (*v74 & 0x10) != 0 )
      {
        MiInsertPageInList(v78, 8u);
      }
      else
      {
        *v74 = *v74 & 0xF8 | 2;
        MiInsertPageInList(v78, 4u);
      }
    }
  }
  _InterlockedAnd64(v75, 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v161) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v161);
    while ( *(__int64 *)(v37 + 24) < 0 );
  }
  *(_BYTE *)(v37 + 34) &= ~0x20u;
  v94 = *(_WORD *)(v37 + 32);
  if ( !v94 )
    MiBadRefCount(v37, v77, v76);
  v95 = v94 == 1;
  v96 = v94 - 1;
  *(_WORD *)(v37 + 32) = v96;
  if ( !v95 || (*(_QWORD *)(v37 + 40) & 0x20000000000000LL) == 0 )
  {
    v97 = *(_QWORD *)(v37 + 40);
    if ( (v97 & 0x10000000000LL) != 0 || (v97 & 0x20000000000000LL) != 0 )
      goto LABEL_152;
    v98 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v99 = 0;
    if ( !v96 )
      goto LABEL_140;
    if ( v96 == 1 )
    {
      if ( v98 || (*(_BYTE *)(v37 + 34) & 8) != 0 )
LABEL_140:
        v99 = 1;
    }
    else if ( v96 == 2 && v98 && (*(_BYTE *)(v37 + 34) & 8) != 0 )
    {
      goto LABEL_140;
    }
    if ( !v99 )
      goto LABEL_152;
    v100 = v96 == 0;
    v101 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
    if ( v101 > 0xFFFFF6BFFFFFFF78uLL || v101 < 0xFFFFF68000000000uLL )
    {
      v102 = *(_BYTE *)(v37 + 35);
      if ( (v102 & 0x20) != 0 )
      {
        *(_BYTE *)(v37 + 35) = v102 & 0xDF;
        goto LABEL_151;
      }
    }
    v103 = ((unsigned __int64)v97 >> 43) & 0x3FF;
    v104 = *(_QWORD *)(qword_140C674C8 + 8 * v103);
    if ( v97 < 0 && (*(_DWORD *)(v37 + 16) & 0x400LL) != 0
      || v101 <= 0xFFFFF6BFFFFFFF78uLL && v101 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v37 + 35) & 0x20) != 0
      || v100 && (*(_QWORD *)(v37 + 24) & 0x4000000000000000LL) != 0 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C674C8 + 8 * v103), 1LL);
    }
    v105 = 1LL;
    if ( (_UNKNOWN *)v104 == &MiSystemPartition )
    {
      v106 = KeGetCurrentPrcb();
      v107 = (int)v106->CachedResidentAvailable;
      if ( (_DWORD)v107 != -1 )
      {
        if ( (unsigned __int64)(v107 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v108 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v106->CachedResidentAvailable,
                     v107 + 1,
                     v107);
            v95 = (_DWORD)v107 == v108;
            LODWORD(v107) = v108;
            if ( v95 )
              break;
            if ( v108 == -1 || (unsigned __int64)(v108 + 1LL) > 0x100 )
              goto LABEL_335;
          }
LABEL_151:
          if ( !v100 )
            goto LABEL_152;
          goto LABEL_320;
        }
LABEL_335:
        if ( (int)v107 > 192
          && (_DWORD)v107 == _InterlockedCompareExchange(
                               (volatile signed __int32 *)&v106->CachedResidentAvailable,
                               192,
                               v107) )
        {
          v105 = (int)v107 - 192 + 1LL;
        }
        if ( !v105 )
          goto LABEL_151;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v104 + 17280), v105);
    goto LABEL_151;
  }
LABEL_320:
  MiPfnReferenceCountIsZero(v37, 0xAAAAAAAAAAAAAAABuLL * (v163 >> 4));
LABEL_152:
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v109 = v147;
  if ( (_DWORD)KiIrqlFlags )
  {
    v139 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v139 <= 0xFu && v147 <= 0xFu && v139 >= 2u )
    {
      v140 = KeGetCurrentPrcb();
      v141 = v140->SchedulerAssist;
      v109 = v147;
      v142 = ~(unsigned __int16)(-1LL << (v147 + 1));
      v95 = (v142 & v141[5]) == 0;
      v141[5] &= v142;
      if ( v95 )
        KiRemoveSystemWorkPriorityKick(v140);
    }
  }
  __writecr8(v109);
  *(_DWORD *)v180[0] = 0;
  if ( v149 )
  {
    *((_QWORD *)&v173 + 1) |= 4uLL;
    v180[0] = &v172;
    v180[1] = 32LL;
    EtwTraceKernelEvent((int)v180, 1, 0x20000001u, 642, 289413892);
  }
  return v151 != 0 ? 4 : 0;
}
