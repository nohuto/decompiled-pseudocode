/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1402EFEEC
 * Callers:
 *     MiTrimSection @ 0x1402EFC04 (MiTrimSection.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiPrepareAttachThread @ 0x1402178B0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140217924 (MiAttachThreadDone.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x1402626A0 (MiGetSystemCacheReverseMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     MiStartingOffset @ 0x1402E25A0 (MiStartingOffset.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E3C4C (MI_WSLE_LOG_ACCESS.c)
 *     MiUnlockSystemVa @ 0x1402EEFF0 (MiUnlockSystemVa.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiDeleteTrimViewInfoList @ 0x14085FDB4 (MiDeleteTrimViewInfoList.c)
 *     MmQuitNextSession @ 0x140884B50 (MmQuitNextSession.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_KPROCESS **a1, int a2, char a3, __int64 a4, _BYTE *a5)
{
  signed __int64 v7; // r11
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // edx
  char v10; // r10
  char *v11; // r13
  unsigned __int64 v12; // r8
  _KPROCESS **v14; // rbx
  _KPROCESS *v15; // rsi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  __int64 **Address; // r15
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r9
  char v27; // bl
  unsigned __int64 v28; // rbx
  int v29; // r12d
  int v30; // eax
  __int64 SystemCacheReverseMap; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  char v38; // bl
  unsigned __int64 v39; // r12
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rax
  char v48; // al
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rdx
  PVOID v52; // rbx
  ULONG_PTR v53; // rsi
  int v54; // r8d
  int v55; // ecx
  __int64 SessionVm; // rax
  __int64 v57; // r8
  int v58; // eax
  __int64 v59; // r11
  __int64 v60; // rax
  int v61; // edx
  int v62; // r15d
  unsigned __int64 OldIrql; // rbx
  __int64 v64; // rax
  int v65; // ecx
  __int64 v66; // rdx
  unsigned __int64 v67; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  bool v72; // zf
  unsigned int v73; // ecx
  ULONG_PTR SessionById; // rax
  int v75; // eax
  int SystemRegionType; // eax
  __int64 v77; // rbx
  struct _KTHREAD *v78; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v80; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v83; // eax
  signed __int32 v84; // ett
  int SessionId; // eax
  _QWORD *v86; // rdx
  unsigned __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r11
  int v93; // eax
  __int64 v94; // r11
  unsigned __int8 v95; // al
  char v96; // cl
  unsigned __int64 v97; // rbx
  unsigned __int8 v98; // cl
  struct _KPRCB *v99; // r10
  _DWORD *v100; // r9
  int v101; // eax
  int v102; // r9d
  int locked; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned __int8 v108; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v109; // [rsp+38h] [rbp-C8h]
  unsigned __int64 valid; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v111; // [rsp+48h] [rbp-B8h]
  __int64 v112; // [rsp+50h] [rbp-B0h]
  __int64 v113; // [rsp+50h] [rbp-B0h]
  unsigned int v114; // [rsp+58h] [rbp-A8h]
  __int64 *v115; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  unsigned int v117; // [rsp+70h] [rbp-90h]
  int v118; // [rsp+74h] [rbp-8Ch]
  int v119; // [rsp+78h] [rbp-88h]
  int v120; // [rsp+7Ch] [rbp-84h]
  __int64 v121; // [rsp+80h] [rbp-80h]
  __int64 v122; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v123; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v125; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *v126; // [rsp+B0h] [rbp-50h]
  _BYTE *v127; // [rsp+B8h] [rbp-48h]
  PVOID v128; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v129; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v131[16]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v132[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v133[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v134[24]; // [rsp+260h] [rbp+160h] BYREF

  v120 = a2;
  v121 = a4;
  v127 = a5;
  v122 = 0LL;
  v129 = 0LL;
  v115 = 0LL;
  memset(v132, 0, sizeof(v132));
  memset(v134, 0, 0xB8uLL);
  memset(v133, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v131, 0, sizeof(v131));
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v114 = 0;
  v10 = 17;
  v108 = 17;
  v11 = 0LL;
  v126 = CurrentThread;
  v12 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return v9;
  while ( 1 )
  {
    v14 = a1;
    v128 = *a1;
    P = a1;
    v15 = a1[1];
    v16 = *((_QWORD *)P + 2);
    v17 = *((_QWORD *)P + 3);
    v18 = v16;
    v19 = *((_QWORD *)P + 4);
    v123 = 0LL;
    Object = v15;
    v109 = v16;
    v125 = v17;
    v112 = v19;
    v119 = 0;
    v118 = 0;
    if ( !v15 || v15 == KeGetCurrentThread()->ApcState.Process )
    {
      if ( *((_DWORD *)v14 + 11) < 2u )
        goto LABEL_5;
      v73 = *((_DWORD *)v14 + 10);
      if ( v73 != -1 && v73 != -2 )
      {
        SessionById = MmGetSessionById(v73);
        v7 = 0LL;
        v123 = SessionById;
        if ( !SessionById )
          goto LABEL_55;
        v75 = MmAttachSession(SessionById);
        v7 = 0LL;
        if ( v75 < 0 )
        {
          MmQuitNextSession(v123);
          v7 = 0LL;
          v123 = 0LL;
          goto LABEL_55;
        }
        v18 = v16;
      }
      if ( *((_DWORD *)v14 + 11) == 3 )
      {
        SystemRegionType = MiGetSystemRegionType(v18);
        v7 = 0LL;
        if ( *((_DWORD *)v14 + 10) == -2 )
        {
          if ( SystemRegionType == 1 )
            goto LABEL_55;
        }
        else if ( SystemRegionType != 1 )
        {
          goto LABEL_55;
        }
        v18 = v16;
      }
      else
      {
        if ( (a3 & 6) != 0 )
          goto LABEL_55;
        v117 = 0;
        --CurrentThread->SpecialApcDisable;
        v77 = 0LL;
        v78 = KeGetCurrentThread();
        _disable();
        AbEntrySummary = v78->AbEntrySummary;
        if ( v78->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(1LL, v78), v7 = 0LL, AbEntrySummary) )
        {
          _BitScanForward(&v80, AbEntrySummary);
          v117 = v80;
          v78->AbEntrySummary = AbEntrySummary & ~(1 << v80);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v83 = *SchedulerAssist;
            do
            {
              v84 = v83;
              v83 = _InterlockedCompareExchange(SchedulerAssist, v83 & 0xFFDFFFFF, v83);
            }
            while ( v84 != v83 );
            if ( (v83 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
          v77 = (__int64)(&v78[1].Process + 12 * v117);
          if ( (unsigned __int64)&qword_140C68540 - qword_140C659E8 >= 0x8000000000LL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx((__int64)v78->ApcState.Process);
          *(_DWORD *)(v77 + 8) = SessionId;
          *(_QWORD *)v77 = (unsigned __int64)&qword_140C68540 & 0x7FFFFFFFFFFFFFFCLL;
          v7 = 0LL;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C68540, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(&qword_140C68540, 0LL, v77, &qword_140C68540);
          v7 = 0LL;
        }
        if ( v77 )
          *(_BYTE *)(v77 + 18) = 1;
        v86 = ::P;
        v18 = v16;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v86 )
              goto LABEL_162;
            v87 = v86[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v16 < v87 + v86[4] )
              break;
            v86 = (_QWORD *)v86[1];
          }
          if ( v16 >= v87 )
            break;
          v86 = (_QWORD *)*v86;
        }
        v115 = (__int64 *)v86[6];
        if ( *v115 != v121 || v16 + (v86[3] << 12) - v19 != (v86[11] & 0xFFFFFFFFFFFFF000uLL) )
        {
LABEL_162:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C68540, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&qword_140C68540);
          KeAbPostRelease((ULONG_PTR)&qword_140C68540);
          v72 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v72
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v89, v88, v90, v91);
          }
          v7 = 0LL;
          goto LABEL_55;
        }
        v118 = 1;
      }
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
      v119 = MiPrepareAttachThread((__int64)v15, (__int64)&v15[1].ActiveProcessors.StaticBitmap[26]);
      v62 = v119;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v7 = 0LL;
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && CurrentIrql >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v72 = (v71 & v70[5]) == 0;
          v70[5] &= v71;
          if ( v72 )
          {
            KiRemoveSystemWorkPriorityKick(v69);
            v7 = 0LL;
          }
        }
      }
      __writecr8(OldIrql);
      if ( !v62 )
        goto LABEL_55;
      KeForceAttachProcess((ULONG_PTR)v15);
      v18 = v16;
      v7 = 0LL;
    }
    v10 = v108;
    v12 = valid;
LABEL_5:
    v20 = v112 - 4096;
    v21 = (v18 - 4096) >> 12;
    Address = 0LL;
    if ( v16 < v125 )
    {
      v23 = v16;
      while ( 1 )
      {
        v24 = v20;
        v25 = v21;
        v26 = v21 + 1;
        v113 = v20 + 4096;
        v111 = v26;
        v27 = v10;
        if ( v11 && ((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != v12 )
        {
          if ( HIDWORD(v134[1]) != (_DWORD)v7 )
          {
            v64 = MiFreeWsleList((__int64)v11, (__int64)v134, 0);
            v65 = v114;
            if ( v64 )
              v65 = 277;
            v114 = v65;
          }
          MiFlushTbList((int *)v133);
          if ( Object )
          {
            if ( valid )
              MiUnlockPageTableInternal(v11, valid);
            MiUnlockWorkingSetShared((__int64)v11, v108);
          }
          else
          {
            MiUnlockSystemVa((__int64)v131, v66);
          }
          v26 = v111;
          v7 = 0LL;
          valid = 0LL;
          v11 = 0LL;
        }
        if ( !Object )
        {
          v28 = v109;
          v29 = 1;
          if ( v11 )
          {
LABEL_11:
            v30 = MiGetSystemRegionType(v109);
            v7 = 0LL;
            if ( !*((_DWORD *)P + 11) )
            {
              if ( v30 != 8 || !MiGetSystemCacheReverseMap(v109) )
                break;
              SystemCacheReverseMap = MiGetSystemCacheReverseMap(v109);
              v33 = *(_QWORD *)(SystemCacheReverseMap + 24) & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (*(_QWORD *)(SystemCacheReverseMap + 24) & 1) == 0 )
                v33 = *(_QWORD *)(SystemCacheReverseMap + 24);
              if ( v11 != (char *)(*(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)v33 + 60LL) & 0x3FF))
                                 + 17344LL) )
                break;
              v34 = *(_QWORD *)(v32 + 32);
              if ( v34 >> 62 != 3 )
                break;
              v35 = *(_QWORD *)(v32 + 24);
              v115 = (__int64 *)v35;
              if ( (v35 & 1) != 0 )
              {
                v35 &= ~1uLL;
                v115 = (__int64 *)v35;
              }
              if ( *(_QWORD *)v35 != v121 )
                break;
              if ( (*(_BYTE *)(v32 + 16) & 3) == 0 )
                v34 = 4 * (v34 & 0xFFFFFFFFFFFF0000uLL);
              if ( v34 + (v109 & 0x3FFFF) != v113 )
                break;
            }
            goto LABEL_24;
          }
          v54 = MiGetSystemRegionType(v109);
          if ( v54 == 8 )
          {
            v55 = 0;
            goto LABEL_75;
          }
          if ( v54 == 1 )
          {
            SessionVm = MiGetSessionVm();
          }
          else
          {
            if ( v54 == 6 )
            {
              v55 = 2;
            }
            else
            {
              if ( v54 != 12 )
              {
                v7 = 0LL;
LABEL_203:
                v52 = Object;
                goto LABEL_63;
              }
              v55 = 1;
            }
LABEL_75:
            SessionVm = (__int64)MiGetAnyMultiplexedVm(v55);
          }
          v7 = 0LL;
          v11 = (char *)SessionVm;
          if ( !SessionVm )
            goto LABEL_203;
          v58 = MiSynchronizeSystemVa(SessionVm, v109, v57, 0LL, (__int64)v131);
          LODWORD(v7) = 0;
          if ( !v58 )
            goto LABEL_56;
          v11 = (char *)v131[3];
          if ( (a3 & 1) != 0 )
          {
            LODWORD(v133[0]) = MiTbFlushType(v131[3]);
            v133[1] = 20LL;
            WORD2(v133[0]) = v92;
            v133[2] = v92;
            v133[3] = v92;
          }
          valid = ((v109 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          goto LABEL_11;
        }
        v29 = v7;
        if ( v11 )
        {
          v108 = v27;
          if ( Address )
          {
            v108 = v27;
            if ( v26 >= (*((unsigned int *)Address + 6) | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) )
            {
              v108 = v27;
              if ( v26 <= (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) )
              {
                v40 = v121;
                v108 = v27;
                v41 = v109;
                goto LABEL_35;
              }
            }
          }
        }
        else
        {
          v11 = (char *)Object + 1664;
          if ( (a3 & 1) != 0 )
          {
            v93 = MiTbFlushType((__int64)Object + 1664);
            WORD2(v133[0]) = 0;
            LODWORD(v133[0]) = v93;
            v133[1] = 20LL;
            v133[2] = v94;
            v133[3] = v94;
          }
          v108 = MiLockWorkingSetShared((__int64)v11);
        }
        MiLockVadTree(1);
        v41 = v109;
        Address = MiLocateAddress(v109);
        MiUnlockVadTree(1, 0x11u);
        v7 = 0LL;
        if ( !Address )
          break;
        v61 = *((_DWORD *)Address + 12);
        if ( (v61 & 0x200000) != 0 )
          break;
        v40 = v121;
        if ( (*(_DWORD *)(v121 + 56) & 0x20) == 0 && (v61 & 0x70) != 0 )
          break;
        v115 = Address[9];
        if ( *v115 != v121 )
          break;
LABEL_35:
        if ( (*(_DWORD *)(v40 + 56) & 0x20) != 0 )
        {
          v67 = (unsigned __int64)Address[10];
          if ( (unsigned __int64)v127 < v67 )
            break;
          v43 = *((unsigned int *)Address + 6);
          if ( (unsigned __int64)v127 >= v67
                                       - 8 * (v43 | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32))
                                       + 8
                                       * ((*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address
                                                                                               + 33) << 32))
                                        + 1) )
            break;
          v41 = ((__int64)&v127[-v67] >> 3 << 12)
              + ((v43 | ((unsigned __int64)*((unsigned __int8 *)Address + 32) << 32)) << 12);
          v109 = v41;
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress((__int64)Address, v41 >> 12, 0, (__int64 *)&v115);
          v7 = 0LL;
          if ( !ProtoPteAddress || !v115 )
            break;
          if ( v113 != MiStartingOffset(v115, ProtoPteAddress, 0xFFFFFFFF) )
          {
LABEL_54:
            v7 = 0LL;
            break;
          }
        }
        v44 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v12 = valid;
        v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( valid == v45 )
          goto LABEL_40;
        v7 = 0LL;
        if ( !valid )
        {
          valid = MiLockLowestValidPageTable((__int64)v11, v44, &v129, v43);
          if ( valid != v45 )
            goto LABEL_54;
LABEL_40:
          v28 = v109;
LABEL_24:
          v36 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v37 = MI_READ_PTE_LOCK_FREE(v36);
          v38 = v37;
          v122 = v37;
          if ( (v37 & 1) == 0
            || (v46 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v122) >> 12) & 0xFFFFFFFFFFLL)
                    - 0x220000000000LL,
                (a3 & 8) != 0)
            && ((v38 & 0x42) != 0 || (*(_BYTE *)(v46 + 34) & 0x10) != 0) )
          {
            v7 = 0LL;
            goto LABEL_26;
          }
          v7 = 0LL;
          if ( *(__int64 *)(v46 + 40) >= 0 )
          {
LABEL_26:
            v39 = v109;
          }
          else
          {
            v47 = *(_QWORD *)(v46 + 16) & 0x400LL;
            if ( (a3 & 1) == 0 )
            {
              if ( v47 || (*(_DWORD *)(v121 + 56) & 0x80u) == 0 )
              {
                v48 = MiGetWsleContents(1LL, v109) & 0xF;
                if ( *((_DWORD *)P + 11) != 3 || v48 != 9 )
                {
                  if ( v48 == 8 || (a3 & 0x10) != 0 )
                  {
                    v102 = ((a3 & 0x40) << 10) | 0x20000;
                    if ( a3 >= 0 )
                      v102 = (a3 & 0x40) << 10;
                    if ( (a3 & 8) != 0
                      || v120 == (_DWORD)v7
                      || (v11[184] & 7) == 2
                      || (locked = MiReplaceLockedPage((_DWORD)v11, v46, v109, v102, v29), v7 = 0LL, !locked) )
                    {
                      v114 = 277;
                    }
                  }
                  else
                  {
                    if ( dword_140C67FE8 != (_DWORD)v7 )
                    {
                      MI_WSLE_LOG_ACCESS((__int64)v11, v36);
                      LODWORD(v7) = 0;
                    }
                    if ( HIDWORD(v134[1]) == (_DWORD)v7 )
                    {
                      LODWORD(v134[0]) = MiTbFlushType((__int64)v11);
                      v134[1] = 20LL;
                      WORD2(v134[0]) = 4;
                      v134[2] = v59;
                      v134[3] = v59;
                    }
                    MiInsertTbFlushEntry((__int64)v134, v109, 1LL, 0);
                    if ( HIDWORD(v134[1]) == LODWORD(v134[1]) )
                    {
                      v60 = MiFreeWsleList((__int64)v11, (__int64)v134, 0);
                      v7 = 0LL;
                      if ( v60 )
                        v114 = 277;
                    }
                    else
                    {
                      v7 = 0LL;
                    }
                  }
                }
              }
              goto LABEL_26;
            }
            if ( !v47 || (v38 & 0x42) == 0 )
              goto LABEL_26;
            v95 = MiLockPageInline(v46);
            v96 = *(_BYTE *)(v46 + 34);
            v97 = v95;
            if ( (v96 & 0x10) == 0 )
              *(_BYTE *)(v46 + 34) = v96 | 0x10;
            _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)KiIrqlFlags )
            {
              v98 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v98 <= 0xFu && v95 <= 0xFu && v98 >= 2u )
              {
                v99 = KeGetCurrentPrcb();
                v100 = v99->SchedulerAssist;
                v101 = ~(unsigned __int16)(-1LL << (v95 + 1));
                v72 = (v101 & v100[5]) == 0;
                v100[5] &= v101;
                if ( v72 )
                  KiRemoveSystemWorkPriorityKick(v99);
              }
            }
            __writecr8(v97);
            v122 &= 0xFFFFFFFFFFFFFFBDuLL;
            MiWriteValidPteNewProtection(v36, v122);
            v39 = v109;
            MiInsertTbFlushEntry((__int64)v133, v109, 1LL, 0);
            v7 = 0LL;
          }
          v12 = valid;
          v20 = v113;
          v21 = v111;
          goto LABEL_28;
        }
        v21 = v25;
        v39 = v109 - 4096;
        v20 = v24;
LABEL_28:
        v23 = v39 + 4096;
        v109 = v23;
        if ( v23 >= v125 )
          break;
        v10 = v108;
      }
    }
LABEL_55:
    if ( !v11 )
      goto LABEL_203;
LABEL_56:
    if ( HIDWORD(v134[1]) != (_DWORD)v7 )
    {
      v49 = MiFreeWsleList((__int64)v11, (__int64)v134, 0);
      v50 = v114;
      if ( v49 )
        v50 = 277;
      v114 = v50;
    }
    MiFlushTbList((int *)v133);
    v52 = Object;
    if ( Object )
    {
      if ( valid )
        MiUnlockPageTableInternal(v11, valid);
      MiUnlockWorkingSetShared((__int64)v11, v108);
    }
    else
    {
      MiUnlockSystemVa((__int64)v131, v51);
    }
    v7 = 0LL;
    valid = 0LL;
    v11 = 0LL;
LABEL_63:
    if ( v118 == (_DWORD)v7 )
    {
      CurrentThread = v126;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C68540, v7, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C68540);
      KeAbPostRelease((ULONG_PTR)&qword_140C68540);
      CurrentThread = v126;
      v72 = v126->SpecialApcDisable++ == -1;
      if ( v72
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v105, v104, v106, v107);
      }
      LODWORD(v7) = 0;
    }
    v53 = v123;
    if ( v123 )
    {
      MmDetachSession(v123, v132);
      MmQuitNextSession(v53);
    }
    else if ( v119 != (_DWORD)v7 )
    {
      KeForceDetachProcess(v132, 0LL);
      MiAttachThreadDone((__int64)v52 + 1664);
    }
    if ( v52 )
      ObDereferenceObjectDeferDeleteWithTag(v52, 0x746C6644u);
    ExFreePoolWithTag(P, 0);
    v7 = 0LL;
    if ( v120 )
    {
      if ( (*v127 & 1) == 0 )
        break;
    }
    a1 = (_KPROCESS **)v128;
    if ( !v128 )
      return v114;
    v12 = valid;
    v10 = v108;
  }
  MiDeleteTrimViewInfoList(v128);
  return 0LL;
}
