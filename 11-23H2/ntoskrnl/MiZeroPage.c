/*
 * XREFs of MiZeroPage @ 0x1402D0C80
 * Callers:
 *     MiZeroLocalPages @ 0x1402CF7D0 (MiZeroLocalPages.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiLargePageFreeToZero @ 0x1402871D0 (MiLargePageFreeToZero.c)
 *     MiGetPfnChannel @ 0x140287460 (MiGetPfnChannel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiZeroEngineMemory @ 0x1402D1510 (MiZeroEngineMemory.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiSetZeroPageThreadPriority @ 0x14035438C (MiSetZeroPageThreadPriority.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiFreeUltraMapping @ 0x1403C6788 (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiHugeRangeFreeToZero @ 0x1406211D4 (MiHugeRangeFreeToZero.c)
 *     MiLockHugePfn @ 0x140621944 (MiLockHugePfn.c)
 *     MiFreeListPageContentsChanged @ 0x14064DC34 (MiFreeListPageContentsChanged.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14064DDA8 (MiFreeZeroPageSlistSufficient.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 *     MiZeroPageMakeHot @ 0x14065615C (MiZeroPageMakeHot.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroPage(_BYTE *a1, _QWORD *a2)
{
  _QWORD *v3; // r12
  __int64 v4; // r8
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned int *v7; // r14
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 *v16; // r15
  char v17; // al
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r15
  unsigned __int64 i; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r15d
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // r14
  int v32; // ecx
  __int64 v33; // r8
  ULONG_PTR v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  ULONG_PTR v37; // r14
  __int64 v38; // r15
  _DWORD *v40; // r9
  __int64 v41; // rdx
  BOOL v42; // edx
  unsigned __int64 v43; // r8
  unsigned __int64 OldIrql; // rbx
  int v45; // eax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rcx
  volatile signed __int64 *v51; // r10
  struct _KTHREAD *v52; // r9
  _KPROCESS **v53; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v55; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v58; // eax
  signed __int32 v59; // ett
  int SessionId; // eax
  volatile LONG *v61; // rbx
  __int64 *v62; // r14
  int v63; // ebx
  int v64; // r14d
  unsigned int v65; // r14d
  _QWORD *v66; // rax
  _QWORD *v67; // r15
  unsigned __int8 v68; // cl
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  bool v72; // zf
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 v77; // cl
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  struct _KTHREAD *v84; // rcx
  char v85; // [rsp+48h] [rbp-1E8h]
  __int64 v86; // [rsp+50h] [rbp-1E0h]
  int v87; // [rsp+58h] [rbp-1D8h]
  int v88; // [rsp+5Ch] [rbp-1D4h]
  int v89; // [rsp+60h] [rbp-1D0h]
  unsigned __int64 v90; // [rsp+60h] [rbp-1D0h]
  __int64 v91; // [rsp+68h] [rbp-1C8h]
  struct _KTHREAD *v92; // [rsp+68h] [rbp-1C8h]
  unsigned int v93; // [rsp+70h] [rbp-1C0h]
  int v94; // [rsp+74h] [rbp-1BCh]
  unsigned __int8 v95; // [rsp+78h] [rbp-1B8h]
  unsigned int v96; // [rsp+80h] [rbp-1B0h]
  _BYTE *v97; // [rsp+88h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-1A0h]
  int v100; // [rsp+A0h] [rbp-190h]
  PVOID P; // [rsp+A8h] [rbp-188h]
  unsigned int v102; // [rsp+B0h] [rbp-180h]
  int v103; // [rsp+B4h] [rbp-17Ch]
  unsigned int v104; // [rsp+B8h] [rbp-178h]
  __int64 v105; // [rsp+C0h] [rbp-170h]
  __int64 v106; // [rsp+C8h] [rbp-168h]
  unsigned __int64 v107; // [rsp+D0h] [rbp-160h]
  __int64 v108; // [rsp+D8h] [rbp-158h]
  __int64 v109; // [rsp+E0h] [rbp-150h]
  int v110[4]; // [rsp+E8h] [rbp-148h] BYREF
  _QWORD *v111; // [rsp+F8h] [rbp-138h]
  __int64 v112; // [rsp+108h] [rbp-128h]
  struct _KTHREAD *v113; // [rsp+110h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp-118h] BYREF
  _QWORD v115[24]; // [rsp+138h] [rbp-F8h] BYREF

  v3 = a1;
  v111 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v86 = 0LL;
  v5 = *((_QWORD *)a1 + 25);
  v106 = v5;
  v97 = a1;
  v6 = *((_QWORD *)a1 + 5);
  v7 = (unsigned int *)(a1 + 64);
  v8 = *((unsigned int *)a1 + 16);
  v93 = v8;
  v9 = (unsigned int)v8;
  v105 = (unsigned int)v8;
  if ( (unsigned int)v8 < 3 )
  {
    v10 = MiLargePageSizes[v8];
    if ( !(_DWORD)v8 )
    {
      v4 = *((_QWORD *)a1 + 43);
      v86 = v4;
      v6 = *(_QWORD *)(v4 + 312) + ((unsigned __int64)*((unsigned __int16 *)a1 + 168) << 21);
      a1 = (_BYTE *)v4;
      v97 = (_BYTE *)v4;
      v10 = 512LL;
    }
    if ( (HvlEnlightenments & 0x200000) != 0 && a1[72] )
    {
      MiZeroPageMakeHot(v5, (unsigned int)v8, v3, a2);
      a1 = v97;
      v9 = v105;
      v4 = v86;
    }
    ++dword_140C130D0[v9];
  }
  else
  {
    v10 = 1LL;
    ++dword_140C130DC;
    v105 = (unsigned int)v8;
  }
  v11 = v4;
  if ( a1 == (_BYTE *)v3 )
    ++dword_140C13100[v9];
  v104 = MiZeroEngineMemory(v3[11], 1LL, v6, v10 << 12);
  v87 = 1;
  v12 = 1;
  v103 = 1;
  v89 = 0;
  v88 = 0;
  v94 = 0;
  BugCheckParameter2 = 0LL;
  v96 = 0;
  CurrentThread = KeGetCurrentThread();
  v113 = CurrentThread;
  if ( (HvlEnlightenments & 0x8400000) != 0
    && (v93 <= 1 || (HvlEnlightenments & 0x8000000) == 0)
    && !CurrentThread->Priority
    && !v97[68]
    && !v97[71]
    && !v97[70] )
  {
    v94 = 1;
    v96 = MiSetZeroPageThreadPriority(v3, 1LL);
    --CurrentThread->SpecialApcDisable;
    v51 = a2 + 27;
    v112 = 0LL;
    v52 = KeGetCurrentThread();
    v92 = v52;
    v53 = 0LL;
    _disable();
    AbEntrySummary = v52->AbEntrySummary;
    if ( v52->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v50, v52), v51 = a2 + 27, v52 = v92, AbEntrySummary) )
    {
      _BitScanForward(&v55, AbEntrySummary);
      v102 = v55;
      v52->AbEntrySummary = AbEntrySummary & ~(1 << v55);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v58 = *SchedulerAssist;
        do
        {
          v59 = v58;
          v58 = _InterlockedCompareExchange(SchedulerAssist, v58 & 0xFFDFFFFF, v58);
        }
        while ( v59 != v58 );
        if ( (v58 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v51 = a2 + 27;
          v52 = v92;
        }
      }
      _enable();
      v53 = &v52[1].Process + 12 * v102;
      if ( (unsigned __int64)v51 - qword_140C659E8 >= 0x8000000000LL )
      {
        SessionId = -1;
      }
      else
      {
        SessionId = MmGetSessionIdEx((__int64)v52->ApcState.Process);
        v51 = a2 + 27;
        v52 = v92;
      }
      *((_DWORD *)v53 + 2) = SessionId;
      *v53 = (_KPROCESS *)((unsigned __int64)v51 & 0x7FFFFFFFFFFFFFFCLL);
    }
    if ( (_DWORD)v112 )
    {
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v52);
      v51 = a2 + 27;
    }
    if ( _InterlockedCompareExchange64(v51, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v51, 0LL, v53, v51);
    if ( v53 )
      *((_BYTE *)v53 + 18) = 1;
  }
  v91 = 0LL;
  v14 = 0x3FFFFFLL;
  v108 = 0x3FFFFFLL;
  P = 0LL;
  if ( v86 )
  {
    v89 = 1;
    if ( *(_BYTE *)(v86 + 68) )
    {
      v14 = *(_QWORD *)(v11 + 176);
      v108 = v14;
      v91 = qword_140C67DF0 + 8 * (v14 & 0x3FFFFF);
      v5 = 0LL;
    }
    else
    {
      v5 = 48LL * *(_QWORD *)(v11 + 176) - 0x220000000000LL;
    }
    v106 = v5;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2[2] + 25408LL * *(unsigned int *)(v86 + 320) + 23024), &LockHandle);
  }
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v95 = CurrentIrql;
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v40 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v41) = 4;
      else
        v41 = (-1LL << (CurrentIrql + 1)) & 4;
      v40[5] |= v41;
    }
    v110[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v110);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
  }
  else
  {
    v95 = MiLockHugePfn(v91);
  }
  v16 = (unsigned __int64 *)v97;
  if ( v86 )
  {
    v87 = 0;
    v12 = 0;
    if ( !v97[70] )
    {
      if ( ++*(_DWORD *)(v86 + 328) != 512 )
      {
        v103 = 0;
        goto LABEL_11;
      }
      v12 = 1;
    }
    v87 = v12;
    v45 = *(_DWORD *)(v86 + 324);
    if ( v45 == 1 )
    {
      v46 = *(_QWORD *)(v86 + 80);
      v47 = *(_QWORD **)(v86 + 88);
      if ( *(_QWORD *)(v46 + 8) != v86 + 80 || *v47 != v86 + 80 )
        __fastfail(3u);
      *v47 = v46;
      *(_QWORD *)(v46 + 8) = v47;
      v12 = 1;
      P = (PVOID)v86;
    }
    else
    {
      *(_DWORD *)(v86 + 324) = v45 - 1;
      v87 = v12;
    }
  }
LABEL_11:
  v17 = v97[70];
  v85 = v17;
  if ( v12 )
  {
    if ( v89 )
    {
      v48 = v3[43];
      v49 = *(_QWORD *)(v48 + 312);
      *(_QWORD *)(v48 + 312) = 0LL;
      MiFreeUltraMapping(v49);
      MiDeleteUltraThreadContext(v48 + 184);
    }
    else
    {
      v18 = *v7;
      v100 = *v7;
      v19 = v3[4];
      v109 = v19;
      memset(v115, 0, 0xB8uLL);
      for ( i = v19; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      v21 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v107 = v21;
      if ( v18 <= 1 )
      {
        v43 = 2 - v18;
        do
        {
          v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v43;
        }
        while ( v43 );
        v107 = v21;
      }
      if ( (unsigned int)v18 <= 2 )
        v22 = MiPtesToSupportLargePageSizes[v18];
      else
        v22 = 1LL;
      v90 = v22;
      v23 = 0;
      if ( v22 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          v25 = ZeroPte;
          v26 = (unsigned __int64 *)(v21 + 8 * v24);
          if ( MiPteInShadowRange((unsigned __int64)v26) )
          {
            if ( (unsigned int)MiPteHasShadow(v28, v27, v29) )
            {
              v30 = 1;
              if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
                v25 = ZeroPte | 0x8000000000000000uLL;
              goto LABEL_23;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v30 = 0;
              if ( (ZeroPte & 1) != 0 )
                v25 = ZeroPte | 0x8000000000000000uLL;
              goto LABEL_23;
            }
          }
          v30 = 0;
LABEL_23:
          *v26 = v25;
          if ( v30 )
            MiWritePteShadow(v26, v25);
          v24 = ++v23;
          v21 = v107;
          if ( v23 >= v90 )
          {
            v14 = v108;
            v5 = v106;
            v3 = v111;
            LODWORD(v18) = v100;
            break;
          }
        }
      }
      if ( (!qword_140C684F8 || i < qword_140C684F8 || i >= qword_140C684F8 + (BitMapHeader.SizeOfBitMap << 30))
        && (unsigned int)v18 <= 1 )
      {
        LODWORD(v115[1]) = 20;
        v115[3] = 0LL;
        MiInsertLargeTbFlushEntry((__int64)v115, 2 - v18, v109);
        MiFlushTbList((int *)v115);
      }
      v16 = (unsigned __int64 *)v97;
    }
    v17 = v85;
  }
  v31 = v86;
  if ( v86 && v103 )
    v3[43] = 0LL;
  v32 = v87;
  if ( v87 || P )
  {
    if ( *((_BYTE *)v16 + 73) )
    {
      v61 = &dword_140C67260;
      v62 = &qword_140C67268;
    }
    else
    {
      if ( !*((_BYTE *)v16 + 68) )
      {
        *((_BYTE *)v16 + 69) = 0;
        goto LABEL_37;
      }
      v61 = &dword_140C67270;
      v62 = &qword_140C67278;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(v61);
    RtlAvlRemoveNode((unsigned __int64 *)v62, v16);
    *((_BYTE *)v16 + 69) = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel(v61);
    v31 = v86;
    v17 = v85;
    v32 = v87;
  }
LABEL_37:
  if ( v17 )
  {
    ++dword_140C130F0[v105];
    ++dword_140C130CC;
    goto LABEL_78;
  }
  ++dword_140C130E0[v105];
  ++dword_140C130C0;
  if ( !v32 )
  {
LABEL_78:
    v37 = 0LL;
    goto LABEL_48;
  }
  v33 = v5 + 0x220000000000LL;
  if ( v5 )
  {
    v34 = 0xAAAAAAAAAAAAAAABuLL * (v33 >> 4);
    BugCheckParameter2 = v34;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v93 == 3 )
  {
    ++dword_140C130C4;
    v3[3] = 0LL;
    *(_BYTE *)(v5 + 34) &= ~8u;
    v35 = 128LL;
    v36 = qword_140C65B40;
    if ( qword_140C65B40 )
    {
      if ( (qword_140C65B40 & 0x80) != 0 )
        v35 = 144LL;
      else
        v35 = qword_140C65B40 | 0x80;
    }
    *(_QWORD *)(v5 + 16) = v35;
    if ( *((_BYTE *)v16 + 71) )
    {
      v37 = BugCheckParameter2;
      MiFreeListPageContentsChanged(BugCheckParameter2, v36, v33, 0xAAAAAAAAAAAAAAABuLL);
      goto LABEL_48;
    }
    if ( !v94 )
      goto LABEL_47;
    v63 = *(unsigned __int8 *)(v5 + 34) >> 6;
    v64 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v33 >> 4)) + 2);
    v65 = ((unsigned int)MiGetPfnChannel(v5) << byte_140C65A8E) | dword_140C65AF8 & BugCheckParameter2 | (v64 << byte_140C65A8D);
    v66 = a2;
    v67 = (_QWORD *)(a2[312] + 88 * (v65 + (unsigned __int64)(unsigned int)(dword_140C65AFC * v63)));
    if ( v63 == 1 )
    {
      if ( !(unsigned int)MiFreeZeroPageSlistSufficient(a2, v65, 0LL) )
      {
LABEL_47:
        v37 = BugCheckParameter2;
        MiUnlinkFreeOrZeroedPage(BugCheckParameter2);
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
LABEL_48:
        v38 = v86;
        goto LABEL_49;
      }
      v66 = a2;
    }
    if ( *v67 >= (unsigned __int64)(unsigned int)(4 * *((_DWORD *)v66 + 4128)) )
      v88 = 1;
    goto LABEL_47;
  }
  v42 = 0;
  if ( v94 )
  {
    v42 = *((_BYTE *)v16 + 71) == 0;
    v88 = v42;
  }
  if ( !v31 || !*(_BYTE *)(v31 + 68) )
  {
    MiLargePageFreeToZero(v34, v93, v42, *((_BYTE *)v16 + 71));
    v37 = BugCheckParameter2;
    goto LABEL_48;
  }
  v38 = v86;
  *(_BYTE *)(v86 + 70) = 1;
  *(_QWORD *)(v86 + 24) = 0LL;
  MiHugeRangeFreeToZero(a2, v14, v33, 0xAAAAAAAAAAAAAAABuLL);
  v37 = BugCheckParameter2;
LABEL_49:
  if ( v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v68 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v68 <= 0xFu && v95 <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = v69->SchedulerAssist;
        v71 = ~(unsigned __int16)(-1LL << (v95 + 1));
        v72 = (v71 & v70[5]) == 0;
        v70[5] &= v71;
        if ( v72 )
          KiRemoveSystemWorkPriorityKick(v69);
      }
    }
    __writecr8(v95);
  }
  if ( v38 )
  {
    if ( *(_BYTE *)(v38 + 68) )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140C67DF8 + 4 * ((((v91 - qword_140C67DF0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v91 - qword_140C67DF0) >> 3) & 0x1F)));
      if ( (_DWORD)KiIrqlFlags )
      {
        v73 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v73 <= 0xFu && v95 <= 0xFu && v73 >= 2u )
        {
          v74 = KeGetCurrentPrcb();
          v75 = v74->SchedulerAssist;
          v76 = ~(unsigned __int16)(-1LL << (v95 + 1));
          v72 = (v76 & v75[5]) == 0;
          v75[5] &= v76;
          if ( v72 )
            KiRemoveSystemWorkPriorityKick(v74);
        }
      }
      __writecr8(v95);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v77 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v77 <= 0xFu && LockHandle.OldIrql <= 0xFu && v77 >= 2u )
      {
        v78 = KeGetCurrentPrcb();
        v79 = v78->SchedulerAssist;
        v80 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v72 = (v80 & v79[5]) == 0;
        v79[5] &= v80;
        if ( v72 )
          KiRemoveSystemWorkPriorityKick(v78);
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v88 )
    MiChangePageHeatImmediate(v37, v93, 0LL);
  if ( v94 )
  {
    if ( _InterlockedCompareExchange64(a2 + 27, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a2 + 27);
    KeAbPostRelease((ULONG_PTR)(a2 + 27));
    v84 = v113;
    v72 = v113->SpecialApcDisable++ == -1;
    if ( v72 && ($C71981A45BEB2B45F82C232A7085991E *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
      KiCheckForKernelApcDelivery(v84, v81, v82, v83);
    MiSetZeroPageThreadPriority(v3, v96);
  }
  return v104;
}
