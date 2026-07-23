/*
 * XREFs of CcPinFileData @ 0x140263B20
 * Callers:
 *     CcZeroDataInCache @ 0x1402FC1A8 (CcZeroDataInCache.c)
 *     CcPinRead @ 0x1406F5AD0 (CcPinRead.c)
 *     CcPinMappedData @ 0x1406F6060 (CcPinMappedData.c)
 *     CcMapData @ 0x1406F6220 (CcMapData.c)
 *     CcPreparePinWrite @ 0x140765180 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x140765354 (CcMapDataCommon.c)
 * Callees:
 *     CcAllocateInitializeBcb @ 0x140207370 (CcAllocateInitializeBcb.c)
 *     KeReleaseGuardedMutex @ 0x1402285D0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     CcGetBcbListHeadLargeOffset @ 0x140261280 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140263670 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x140265080 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x140265420 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x1402BC1F0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExAcquireSharedStarveExclusive @ 0x140348FB0 (ExAcquireSharedStarveExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x140538434 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140538600 (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14060AA74 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v9; // r12
  unsigned int v11; // edx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v19; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // di
  _QWORD *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edi
  __int64 v30; // rbx
  char v31; // r15
  __int64 v32; // rsi
  __int64 v33; // r10
  __int64 v34; // rcx
  _QWORD *BcbListHeadLargeOffset; // rsi
  __int64 v36; // rsi
  __int16 v37; // cx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rax
  ULONG_PTR v41; // rdi
  char v42; // r13
  _QWORD *v43; // r13
  _QWORD *v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // r8d
  int v48; // r15d
  unsigned int v49; // r10d
  __int64 v50; // rdi
  _DWORD *v51; // rax
  unsigned int v52; // ebx
  bool v53; // zf
  char v54; // al
  unsigned int v55; // r15d
  _QWORD *v56; // rax
  struct _ERESOURCE *v57; // rcx
  __int16 v58; // dx
  __int16 v59; // ax
  unsigned __int8 v60; // dl
  struct _KTHREAD *v61; // r8
  unsigned __int8 v62; // dl
  struct _KTHREAD *v63; // r8
  char v64; // al
  __int64 v65; // r8
  int v66; // esi
  _QWORD *v67; // rax
  __int64 v68; // rax
  char v69; // al
  unsigned __int64 v70; // rbx
  unsigned __int32 v71; // eax
  unsigned __int8 v72; // cl
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // edx
  struct _ERESOURCE *v76; // rcx
  __int16 v77; // dx
  __int16 v78; // ax
  unsigned __int8 v79; // dl
  struct _KTHREAD *v80; // r8
  unsigned __int8 v81; // dl
  struct _KTHREAD *v82; // r8
  __int64 v83; // rdi
  __int16 v84; // cx
  struct _KTHREAD *v85; // r13
  NTSTATUS v86; // r8d
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdi
  unsigned int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // r12
  unsigned int v92; // ecx
  __int64 v93; // rcx
  struct _KTHREAD *v94; // rdi
  __int64 v95; // rbx
  unsigned int v96; // eax
  unsigned int v97; // ecx
  struct _KPRCB *v98; // rcx
  signed __int32 *v99; // r8
  signed __int32 v100; // eax
  signed __int32 v101; // ett
  int v102; // eax
  unsigned __int8 v103; // di
  unsigned __int64 v104; // rbx
  unsigned __int32 v105; // eax
  unsigned __int8 v106; // cl
  struct _KPRCB *v107; // r10
  _DWORD *v108; // r9
  int v109; // eax
  unsigned __int64 v110; // rbx
  unsigned __int32 v111; // eax
  unsigned __int8 v112; // cl
  struct _KPRCB *v113; // r10
  _DWORD *v114; // r9
  int v115; // edx
  struct _ERESOURCE *v116; // rcx
  __int16 v117; // dx
  __int16 v118; // ax
  unsigned __int8 v119; // dl
  struct _KTHREAD *v120; // r8
  unsigned __int8 v121; // dl
  struct _KTHREAD *v122; // r8
  __int64 v123; // rax
  __int64 v124; // rbx
  struct _KEVENT *v125; // rcx
  unsigned __int64 v126; // rbx
  unsigned __int32 v127; // eax
  unsigned __int8 v128; // cl
  struct _KPRCB *v129; // r10
  _DWORD *v130; // r9
  int v131; // eax
  __int64 v132; // rbx
  struct _KEVENT *v133; // rcx
  unsigned __int8 v135; // [rsp+30h] [rbp-E8h]
  int v136; // [rsp+34h] [rbp-E4h]
  int v137; // [rsp+3Ch] [rbp-DCh]
  _QWORD *v138; // [rsp+40h] [rbp-D8h]
  int v139; // [rsp+48h] [rbp-D0h]
  __int64 v140; // [rsp+50h] [rbp-C8h] BYREF
  int v141; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v142; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v143; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int v144; // [rsp+70h] [rbp-A8h]
  int v145; // [rsp+74h] [rbp-A4h]
  unsigned int v146; // [rsp+78h] [rbp-A0h]
  __int64 v147; // [rsp+80h] [rbp-98h]
  __int64 v148; // [rsp+88h] [rbp-90h]
  int v149; // [rsp+90h] [rbp-88h]
  NTSTATUS v150; // [rsp+94h] [rbp-84h]
  __int64 v151; // [rsp+98h] [rbp-80h]
  __int64 v152; // [rsp+A0h] [rbp-78h]
  __int64 v153; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v154; // [rsp+B0h] [rbp-68h]
  __int64 v155; // [rsp+B8h] [rbp-60h]
  __int64 v156; // [rsp+C0h] [rbp-58h]
  int v157; // [rsp+C8h] [rbp-50h]
  __int64 v158; // [rsp+D0h] [rbp-48h]
  char v159; // [rsp+120h] [rbp+8h] BYREF
  _QWORD *v160; // [rsp+128h] [rbp+10h]
  char v161; // [rsp+130h] [rbp+18h]
  char v162; // [rsp+138h] [rbp+20h]

  v162 = a4;
  v160 = a2;
  v9 = a3;
  v11 = a6;
  v147 = 0LL;
  v139 = 0;
  v141 = 0;
  v140 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v148 = v12;
  v156 = v12;
  if ( (signed __int64)(a3 + *a2) > *(_QWORD *)(v12 + 32) )
    KeBugCheckEx(0x34u, 0x145uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  v136 = v11 & 4;
  if ( (v11 & 4) != 0 )
  {
    v141 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v12, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v12, *a2, (unsigned int)&v140, (unsigned int)&v141, (v11 >> 6) & 1, 0);
  }
  v15 = v12 + 288;
  v144 = 0;
  v158 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v14, CurrentThread)) != 0 )
  {
    _BitScanForward(&v19, AbEntrySummary);
    v144 = v19;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v19);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v22 = *SchedulerAssist;
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v17 = (__int64)(&CurrentThread[1].Process + 12 * v144);
    if ( v15 - qword_140C659E8 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *(_DWORD *)(v17 + 8) = SessionId;
    *(_QWORD *)v17 = v15 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( (_DWORD)v158 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
    ExpAcquireFastMutexContended(v15, v17);
  if ( v17 )
    *(_BYTE *)(v17 + 18) = 1;
  *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v15 + 48) = CurrentIrql;
  v137 = 1;
  v143 = 0LL;
  v142 = 0LL;
  v26 = v160;
  v27 = *v160;
  v28 = HIDWORD(*v160);
  v29 = v28;
  v30 = *v160 + v9;
  v147 = v30;
  v151 = 0LL;
  v31 = 0;
  v32 = v27 + 0x80000;
  v33 = v148;
  v34 = *(_QWORD *)(v148 + 32);
  if ( v34 <= 0x200000 || (*(_DWORD *)(v148 + 152) & 0x200) == 0 )
  {
    v29 = v28;
    goto LABEL_31;
  }
  if ( v34 > 0x2000000 )
  {
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v148, v27 + 0x80000, 1);
    v26 = v160;
    v33 = v148;
    goto LABEL_32;
  }
  if ( v32 >= v34 )
  {
LABEL_31:
    BcbListHeadLargeOffset = (_QWORD *)(v148 + 16);
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v148 + 36) )
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v148 + 88) + 0xFFFFFFFFLL + 16 * (v32 >> 19));
  else
    BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v148 + 88)
                                      + 8 * ((unsigned __int64)(unsigned int)v34 >> 18)
                                      + 16 * (v32 >> 19));
LABEL_32:
  v36 = *BcbListHeadLargeOffset - 16LL;
  v151 = v36;
  if ( v29 || (v37 = *(_WORD *)v36, *(_WORD *)v36 != 765) || *(_DWORD *)(v36 + 36) )
  {
    while ( *(_WORD *)v36 == 765 && *v26 < *(_QWORD *)(v36 + 32) )
    {
      v40 = *(_QWORD *)(v36 + 8);
      if ( *v26 >= v40 )
      {
LABEL_48:
        v31 = 1;
        break;
      }
      if ( v30 >= v40 )
        v30 = *(_QWORD *)(v36 + 8);
      v147 = v30;
      v36 = *(_QWORD *)(v36 + 16) - 16LL;
      v151 = v36;
    }
  }
  else
  {
    v38 = v147;
    while ( v37 == 765 && *(_DWORD *)v26 < *(_DWORD *)(v36 + 32) )
    {
      v39 = *(_DWORD *)(v36 + 8);
      if ( *(_DWORD *)v26 >= v39 )
        goto LABEL_48;
      if ( v38 >= v39 )
        v38 = *(_DWORD *)(v36 + 8);
      LODWORD(v147) = v38;
      v36 = *(_QWORD *)(v36 + 16) - 16LL;
      v151 = v36;
      v37 = *(_WORD *)v36;
      v30 = v147;
    }
  }
  v41 = v36;
  v138 = (_QWORD *)v36;
  v42 = a6;
  if ( v31 )
  {
    v69 = v162;
    if ( (*(_DWORD *)(v33 + 152) & 0x200) == 0 )
      v69 = 1;
    v162 = v69;
    if ( !*(_QWORD *)(v36 + 184) )
    {
      v44 = a8;
      *a8 -= (unsigned int)(*(_DWORD *)v26 - *(_DWORD *)(v36 + 8));
      v143 = *(_QWORD *)(v36 + 8);
      v142 = *(unsigned int *)(v36 + 4);
      if ( (v42 & 1) != 0 )
      {
        ++*(_DWORD *)(v36 + 64);
        *(_QWORD *)(v15 + 8) = 0LL;
        v70 = *(unsigned __int8 *)(v15 + 48);
        v71 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
        if ( v71 )
          ExpReleaseFastMutexContended(v15, v71);
        if ( (_DWORD)KiIrqlFlags )
        {
          v72 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v72 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v72 >= 2u )
          {
            v73 = KeGetCurrentPrcb();
            v74 = v73->SchedulerAssist;
            v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
            v53 = (v75 & v74[5]) == 0;
            v74[5] &= v75;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(v73);
          }
        }
        __writecr8(v70);
        KeAbPostRelease(v15);
        v137 = 0;
        if ( !v162 )
        {
          v76 = (struct _ERESOURCE *)(v36 + 72);
          if ( (v42 & 2) != 0 )
          {
            ExAcquireResourceExclusiveLite(v76, 1u);
          }
          else
          {
            v77 = *(_WORD *)(v36 + 98);
            v78 = v77 & 0x41;
            if ( FeatureFastResource2 )
            {
              if ( v78 == 1 )
                KeBugCheckEx(0x1C6u, 0xFuLL, v36 + 72, 0LL, 0LL);
              if ( (v77 & 1) != 0 )
              {
                v79 = KeGetCurrentIrql();
                v80 = KeGetCurrentThread();
                if ( v79 > 1u )
                  KeBugCheckEx(0x1C6u, 0LL, v79, 1uLL, 0LL);
                if ( (v80->ApcState.InProgressFlags & 2) != 0 )
                  KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
                if ( !v79 && (v80->MiscFlags & 0x400) == 0 && !v80->WaitBlock[3].SpareLong )
                  KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
            }
            else
            {
              if ( v78 == 1 )
                KeBugCheckEx(0x1C6u, 0xFuLL, v36 + 72, 0LL, 0LL);
              if ( (v77 & 1) != 0 )
              {
                v81 = KeGetCurrentIrql();
                v82 = KeGetCurrentThread();
                if ( v81 > 1u )
                  KeBugCheckEx(0x1C6u, 0LL, v81, 1uLL, 0LL);
                if ( (v82->ApcState.InProgressFlags & 2) != 0 )
                  KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
                if ( !v81 && (v82->MiscFlags & 0x400) == 0 && !v82->WaitBlock[3].SpareLong )
                  KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
            }
            if ( (*(_BYTE *)(v36 + 98) & 1) != 0 )
              ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v76);
            else
              ExpAcquireSharedStarveExclusive((__int64)v76, 1);
          }
        }
        if ( v136 )
        {
          v43 = v160;
          v135 = 1;
          v41 = v36;
        }
        else
        {
          v83 = *v44;
          v84 = *v44;
          v85 = KeGetCurrentThread();
          v149 = 0;
          v157 = 0;
          v86 = 0;
          v150 = 0;
          v159 = 1;
          v87 = ((v84 & 0xFFF) + (unsigned __int64)(unsigned int)v142 + 4095) >> 12;
          v145 = v87;
          v88 = v83 & 0xFFFFFFFFFFFFF000uLL;
          v154 = v88;
          LODWORD(v153) = BYTE4(v85[1].Queue) + 2 * LODWORD(v85[1].WaitListEntry.Flink);
          while ( (_DWORD)v87 )
          {
            BYTE4(v85[1].Queue) = 1;
            v89 = v87 - 1;
            if ( (unsigned int)(v87 - 1) > LODWORD(v85[1].WaitListEntry.Flink) )
            {
              if ( v89 > 0xF )
                v89 = 15;
              LODWORD(v85[1].WaitListEntry.Flink) = v89;
            }
            v149 = 0;
            v90 = (unsigned int)((_DWORD)v87 << 12);
            v91 = (unsigned int)v90;
            v86 = MmCheckCachedPageStates(v88, v90, 0LL, &v159);
            v150 = v86;
            if ( v86 < 0 )
              break;
            v88 += v91;
            v154 = v88;
            LODWORD(v87) = 0;
            v145 = 0;
          }
          v92 = v153;
          BYTE4(v85[1].Queue) = v153 & 1;
          v93 = v92 >> 1;
          LODWORD(v85[1].WaitListEntry.Flink) = v93;
          if ( v86 < 0 )
            RtlRaiseStatus(v86);
          v146 = 0;
          v152 = 0LL;
          v94 = KeGetCurrentThread();
          v95 = 0LL;
          v155 = 0LL;
          _disable();
          v96 = v94->AbEntrySummary;
          if ( v94->AbEntrySummary || (v96 = KiAbTryReclaimOrphanedEntries(v93, v94)) != 0 )
          {
            _BitScanForward(&v97, v96);
            v146 = v97;
            v94->AbEntrySummary = v96 & ~(unsigned __int8)(1 << v97);
            v98 = KeGetCurrentPrcb();
            v99 = (signed __int32 *)v98->SchedulerAssist;
            if ( v99 )
            {
              _m_prefetchw(v99);
              v100 = *v99;
              do
              {
                v101 = v100;
                v100 = _InterlockedCompareExchange(v99, v100 & 0xFFDFFFFF, v100);
              }
              while ( v101 != v100 );
              if ( (v100 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v98);
            }
            _enable();
            v95 = (__int64)(&v94[1].Process + 12 * v146);
            v155 = v95;
            if ( v15 - qword_140C659E8 >= 0x8000000000LL )
              v102 = -1;
            else
              v102 = MmGetSessionIdEx(v94->ApcState.Process);
            *(_DWORD *)(v95 + 8) = v102;
            *(_QWORD *)v95 = v15 & 0x7FFFFFFFFFFFFFFCLL;
          }
          v153 = v152;
          if ( (_DWORD)v152 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v94);
          v103 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
            ExpAcquireFastMutexContended(v15, v95);
          if ( v95 )
            *(_BYTE *)(v95 + 18) = 1;
          *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v15 + 48) = v103;
          v44 = a8;
          if ( !*(_QWORD *)(v36 + 184) )
          {
            *(_QWORD *)(v36 + 184) = *a8;
            *(_QWORD *)(v36 + 56) = v140;
            v140 = 0LL;
          }
          *(_QWORD *)(v15 + 8) = 0LL;
          v104 = *(unsigned __int8 *)(v15 + 48);
          v105 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
          if ( v105 )
            ExpReleaseFastMutexContended(v15, v105);
          if ( (_DWORD)KiIrqlFlags )
          {
            v106 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v106 <= 0xFu && (unsigned __int8)v104 <= 0xFu && v106 >= 2u )
            {
              v107 = KeGetCurrentPrcb();
              v108 = v107->SchedulerAssist;
              v109 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v104 + 1));
              v53 = (v109 & v108[5]) == 0;
              v108[5] &= v109;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v107);
            }
          }
          __writecr8(v104);
          KeAbPostRelease(v15);
          v43 = v160;
          *v44 = *(_QWORD *)(v36 + 184) + (unsigned int)(*(_DWORD *)v160 - *(_DWORD *)(v36 + 8));
          v135 = 1;
          v41 = v36;
        }
        goto LABEL_232;
      }
      if ( !v162 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v36 + 72), 0) )
      {
        v41 = 0LL;
        v138 = 0LL;
        v135 = 0;
        v43 = v160;
        goto LABEL_232;
      }
      ++*(_DWORD *)(v36 + 64);
      ExReleaseFastMutex((PFAST_MUTEX)v15);
      v137 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v36 + 4), 0LL, 0LL, *v44) )
      {
        v135 = 0;
        v43 = v160;
        goto LABEL_232;
      }
      ExAcquireFastMutex((PFAST_MUTEX)v15);
      if ( !*(_QWORD *)(v36 + 184) )
      {
        *(_QWORD *)(v36 + 184) = *v44;
        *(_QWORD *)(v36 + 56) = v140;
        v140 = 0LL;
      }
      ExReleaseFastMutex((PFAST_MUTEX)v15);
      goto LABEL_230;
    }
    if ( (a6 & 1) == 0 )
    {
      if ( !v162 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v36 + 72), 0) )
        goto LABEL_51;
      ++*(_DWORD *)(v36 + 64);
      ExReleaseFastMutex((PFAST_MUTEX)v15);
      v137 = 0;
      goto LABEL_229;
    }
    ++*(_DWORD *)(v36 + 64);
    *(_QWORD *)(v15 + 8) = 0LL;
    v110 = *(unsigned __int8 *)(v15 + 48);
    v111 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v111 )
      ExpReleaseFastMutexContended(v15, v111);
    if ( (_DWORD)KiIrqlFlags )
    {
      v112 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v112 <= 0xFu && (unsigned __int8)v110 <= 0xFu && v112 >= 2u )
      {
        v113 = KeGetCurrentPrcb();
        v114 = v113->SchedulerAssist;
        v115 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v110 + 1));
        v53 = (v115 & v114[5]) == 0;
        v114[5] &= v115;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v113);
      }
    }
    __writecr8(v110);
    KeAbPostRelease(v15);
    v137 = 0;
    if ( !v162 )
    {
      v116 = (struct _ERESOURCE *)(v36 + 72);
      if ( (v42 & 2) != 0 )
      {
        ExAcquireResourceExclusiveLite(v116, 1u);
        v41 = v36;
LABEL_229:
        v44 = a8;
LABEL_230:
        v43 = v160;
        v68 = *(_QWORD *)(v36 + 184) + (unsigned int)(*(_DWORD *)v160 - *(_DWORD *)(v36 + 8));
        goto LABEL_231;
      }
      v117 = *(_WORD *)(v36 + 98);
      v118 = v117 & 0x41;
      if ( FeatureFastResource2 )
      {
        if ( v118 == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v36 + 72, 0LL, 0LL);
        if ( (v117 & 1) != 0 )
        {
          v119 = KeGetCurrentIrql();
          v120 = KeGetCurrentThread();
          if ( v119 > 1u )
            KeBugCheckEx(0x1C6u, 0LL, v119, 1uLL, 0LL);
          if ( (v120->ApcState.InProgressFlags & 2) != 0 )
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !v119 && (v120->MiscFlags & 0x400) == 0 && !v120->WaitBlock[3].SpareLong )
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        if ( v118 == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v36 + 72, 0LL, 0LL);
        if ( (v117 & 1) != 0 )
        {
          v121 = KeGetCurrentIrql();
          v122 = KeGetCurrentThread();
          if ( v121 > 1u )
            KeBugCheckEx(0x1C6u, 0LL, v121, 1uLL, 0LL);
          if ( (v122->ApcState.InProgressFlags & 2) != 0 )
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !v121 && (v122->MiscFlags & 0x400) == 0 && !v122->WaitBlock[3].SpareLong )
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
      }
      if ( (*(_BYTE *)(v36 + 98) & 1) != 0 )
      {
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v116);
        v41 = v36;
        goto LABEL_229;
      }
      ExpAcquireSharedStarveExclusive((__int64)v116, 1);
    }
    v41 = v36;
    goto LABEL_229;
  }
  if ( (a6 & 8) != 0 )
  {
LABEL_51:
    v41 = 0LL;
    v138 = 0LL;
    v135 = 0;
    v43 = v160;
    v44 = a8;
LABEL_232:
    v66 = v136;
    goto LABEL_233;
  }
  v45 = *v26;
  v143 = v45;
  v46 = v30 - v45;
  HIDWORD(v142) = HIDWORD(v46);
  v47 = v45 & 0xFFF;
  v48 = v46 + v47;
  LODWORD(v142) = v46 + v47;
  v49 = v47 + v141;
  v141 += v47;
  v50 = v148;
  if ( (v162 || (*(_DWORD *)(v148 + 152) & 4) != 0) && (v51 = (_DWORD *)(v148 + 152), !a5) )
  {
    v52 = 0;
  }
  else
  {
    v51 = (_DWORD *)(v148 + 152);
    v52 = 2;
    v139 = 2;
    if ( (v45 & 0xFFF) == 0 )
    {
      if ( (unsigned int)v9 >= 0x1000 )
        v52 = 3;
      v139 = v52;
    }
    if ( (v48 & 0xFFF) == 0 )
    {
      v52 |= 4u;
      v139 = v52;
    }
  }
  v53 = (*v51 & 0x200) == 0;
  v54 = v162;
  if ( v53 )
    v54 = 1;
  v162 = v54;
  v55 = (v48 + 4095) & 0xFFFFF000;
  LODWORD(v142) = v55;
  v44 = a8;
  *a8 -= v45 & 0xFFF;
  LODWORD(v143) = v143 & 0xFFFFF000;
  if ( v55 > v49 )
    v55 = v49;
  LODWORD(v142) = v55;
  if ( (v42 & 1) == 0 )
  {
    v67 = CcAllocateInitializeBcb(v50, v36, &v143, &v142);
    v41 = (ULONG_PTR)v67;
    v138 = v67;
    if ( !v67 )
      goto LABEL_103;
    if ( !v162 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v67 + 9), 0) )
      KeBugCheckEx(0x34u, 0x2027AuLL, v41, 0LL, 0LL);
    ExReleaseFastMutex((PFAST_MUTEX)v15);
    v137 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v55, v52, 0LL, *v44) )
    {
LABEL_103:
      v135 = 0;
      v43 = v160;
      goto LABEL_232;
    }
    ExAcquireFastMutex((PFAST_MUTEX)v15);
    if ( !*(_QWORD *)(v41 + 184) )
    {
      *(_QWORD *)(v41 + 184) = *v44;
      *(_QWORD *)(v41 + 56) = v140;
      v140 = 0LL;
    }
    ExReleaseFastMutex((PFAST_MUTEX)v15);
    v43 = v160;
    v68 = *(_QWORD *)(v41 + 184) + (unsigned int)(*(_DWORD *)v160 - *(_DWORD *)(v41 + 8));
LABEL_231:
    *v44 = v68;
    v135 = 1;
    goto LABEL_232;
  }
  v56 = CcAllocateInitializeBcb(v50, v36, &v143, &v142);
  v41 = (ULONG_PTR)v56;
  v138 = v56;
  if ( !v56 )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v15);
    RtlRaiseStatus(-1073741670);
  }
  if ( v162 )
    goto LABEL_97;
  v57 = (struct _ERESOURCE *)(v56 + 9);
  if ( (v42 & 2) == 0 )
  {
    v58 = *((_WORD *)v56 + 49);
    v59 = v58 & 0x41;
    if ( FeatureFastResource2 )
    {
      if ( v59 == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v57, 0LL, 0LL);
      if ( (v58 & 1) == 0 )
        goto LABEL_93;
      v60 = KeGetCurrentIrql();
      v61 = KeGetCurrentThread();
      if ( v60 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v60, 2uLL, 0LL);
      if ( v60 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
      if ( (v61->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !v60 && (v61->MiscFlags & 0x400) == 0 && !v61->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    else
    {
      if ( v59 == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v57, 0LL, 0LL);
      if ( (v58 & 1) == 0 )
        goto LABEL_93;
      v62 = KeGetCurrentIrql();
      v63 = KeGetCurrentThread();
      if ( v62 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v62, 2uLL, 0LL);
      if ( v62 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
      if ( (v63->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !v62 && (v63->MiscFlags & 0x400) == 0 && !v63->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    v41 = (ULONG_PTR)v138;
    v52 = v139;
    v55 = v142;
LABEL_93:
    if ( (v57->ReservedLowFlags & 1) != 0 )
      v64 = ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v57);
    else
      v64 = ExpAcquireSharedStarveExclusive((__int64)v57, 0);
    v161 = v64;
    if ( !v64 )
      KeBugCheckEx(0x34u, 0x2021AuLL, v41, 0LL, 0LL);
    goto LABEL_97;
  }
  if ( !ExAcquireResourceExclusiveLite(v57, 0) )
    KeBugCheckEx(0x34u, 0x20213uLL, v41, 0LL, 0LL);
LABEL_97:
  ExReleaseFastMutex((PFAST_MUTEX)v15);
  v137 = 0;
  v66 = v136;
  if ( v136 )
  {
    v43 = v160;
    v135 = 1;
  }
  else
  {
    LOBYTE(v65) = 1;
    CcMapAndRead(v55, v52, v65, *v44);
    ExAcquireFastMutex((PFAST_MUTEX)v15);
    if ( !*(_QWORD *)(v41 + 184) )
    {
      *(_QWORD *)(v41 + 184) = *v44;
      *(_QWORD *)(v41 + 56) = v140;
      v140 = 0LL;
    }
    ExReleaseFastMutex((PFAST_MUTEX)v15);
    v43 = v160;
    *v44 = *(_QWORD *)(v41 + 184) + (unsigned int)(*(_DWORD *)v160 - *(_DWORD *)(v41 + 8));
    v135 = 1;
  }
LABEL_233:
  if ( (a6 & 6) == 6 && v41 && *(_QWORD *)(v41 + 184) )
  {
    v123 = *(_QWORD *)(v41 + 56);
    v124 = *(_QWORD *)(v123 + 8);
    if ( (unsigned __int16)_InterlockedExchangeAdd((volatile signed __int32 *)(v123 + 16), 0xFFFFFFFF) == 1 )
    {
      v125 = *(struct _KEVENT **)(v124 + 192);
      if ( v125 )
        KeSetEvent(v125, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v124 + 552));
    }
    *(_QWORD *)(v41 + 184) = 0LL;
    *(_QWORD *)(v41 + 56) = 0LL;
    v41 = (ULONG_PTR)v138;
  }
  if ( v137 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    v126 = *(unsigned __int8 *)(v15 + 48);
    v127 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
    if ( v127 )
      ExpReleaseFastMutexContended(v15, v127);
    if ( (_DWORD)KiIrqlFlags )
    {
      v128 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v128 <= 0xFu && (unsigned __int8)v126 <= 0xFu && v128 >= 2u )
      {
        v129 = KeGetCurrentPrcb();
        v130 = v129->SchedulerAssist;
        v131 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v126 + 1));
        v53 = (v131 & v130[5]) == 0;
        v130[5] &= v131;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v129);
      }
    }
    __writecr8(v126);
    KeAbPostRelease(v15);
    v41 = (ULONG_PTR)v138;
  }
  if ( v140 )
  {
    v132 = *(_QWORD *)(v140 + 8);
    if ( (unsigned __int16)_InterlockedExchangeAdd((volatile signed __int32 *)(v140 + 16), 0xFFFFFFFF) == 1 )
    {
      v133 = *(struct _KEVENT **)(v132 + 192);
      if ( v133 )
        KeSetEvent(v133, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v132 + 552));
    }
    v41 = (ULONG_PTR)v138;
  }
  if ( v66 )
    CcDereferenceFileOffset(v148, *v43);
  if ( v135 )
  {
    *a7 = v41;
    *a9 = *(_QWORD *)(v41 + 32);
    return v135;
  }
  else
  {
    *v44 = 0LL;
    if ( v41 )
      CcUnpinFileDataEx((char *)v41, v162, 0);
    return 0LL;
  }
}
