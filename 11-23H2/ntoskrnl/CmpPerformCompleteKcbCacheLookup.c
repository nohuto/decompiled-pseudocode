/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ExpReleaseFastMutexContended @ 0x1402BC1F0 (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpGetComponentNameAtIndex @ 0x140690A1C (CmpGetComponentNameAtIndex.c)
 *     CmpCompareUnicodeString @ 0x140690A4C (CmpCompareUnicodeString.c)
 *     CmpRecordParseFailure @ 0x140693738 (CmpRecordParseFailure.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1407690E0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A25C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntry @ 0x14076A7B0 (CmpUnlockHashEntry.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A9A0 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     CmpWaitForHiveMount @ 0x14084DD8C (CmpWaitForHiveMount.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        volatile signed __int64 **a6,
        char *a7,
        _WORD *a8)
{
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int16 v10; // bp
  ULONG_PTR v11; // r12
  ULONG_PTR v12; // r13
  __int16 v13; // cx
  char v14; // r14
  signed __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  volatile signed __int64 *v18; // r15
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // ebp
  signed __int64 *v24; // rsi
  unsigned __int64 v25; // rdi
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // rax
  __int64 v29; // rcx
  ULONG_PTR v30; // r14
  __int64 v31; // rbp
  __int64 *v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // rtt
  __int64 v37; // rax
  __int16 v38; // r9
  unsigned __int8 *v39; // rdi
  __int16 v40; // r10
  unsigned __int16 *v41; // r11
  unsigned __int16 v42; // dx
  __int16 v43; // si
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  unsigned int v46; // r8d
  unsigned int v47; // edx
  __int64 *v48; // rdi
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rtt
  bool v52; // zf
  __int64 v53; // rdi
  __int64 v54; // r8
  unsigned __int8 CurrentIrql; // si
  char v56; // al
  ULONG_PTR v57; // rcx
  _BYTE *v58; // rdx
  _QWORD *v59; // rax
  unsigned __int64 v60; // rdi
  signed __int32 v61; // eax
  signed __int64 v62; // rax
  __int64 v63; // rcx
  signed __int64 v64; // rcx
  __int64 v65; // r10
  unsigned __int64 v66; // rdx
  signed __int64 v67; // r9
  bool v68; // r8
  unsigned __int64 v69; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v71; // dx
  unsigned __int8 v72; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v75; // eax
  __int64 v76; // rbx
  __int64 ComponentNameAtIndex; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  int v80; // edx
  void *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  signed __int32 v85[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v86; // [rsp+30h] [rbp-98h]
  __int16 v87; // [rsp+32h] [rbp-96h]
  __int16 v88; // [rsp+34h] [rbp-94h]
  unsigned int v89; // [rsp+38h] [rbp-90h]
  volatile signed __int64 *v90; // [rsp+40h] [rbp-88h]
  unsigned int v91; // [rsp+48h] [rbp-80h]
  __int64 v92; // [rsp+50h] [rbp-78h]
  __int128 v93; // [rsp+60h] [rbp-68h] BYREF
  _OWORD v94[5]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v96; // [rsp+D8h] [rbp+10h]
  unsigned int v97; // [rsp+E0h] [rbp+18h]
  __int64 v98; // [rsp+E8h] [rbp+20h]

  v98 = a4;
  v97 = a3;
  v96 = a2;
  v8 = 0;
  v9 = a2;
  v10 = 0;
  v87 = 0;
  v11 = BugCheckParameter2;
  while ( 2 )
  {
    v12 = *(_QWORD *)(v11 + 32);
    v13 = 0;
    v14 = 0;
    v88 = 0;
    v86 = 0;
    v15 = _InterlockedIncrement64((volatile signed __int64 *)v11);
    if ( !v15 )
      KeBugCheckEx(0x51u, 0x24uLL, v11, 0LL, 0LL);
    if ( v15 == 1 )
LABEL_145:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v16 = *(_DWORD *)(v11 + 16);
    v17 = v9;
    v89 = v9;
    v18 = (volatile signed __int64 *)v11;
    v90 = (volatile signed __int64 *)v11;
    if ( v9 >= a3 )
      goto LABEL_26;
    v19 = v9;
    v92 = v9;
    while ( 2 )
    {
      if ( v17 >= 8 )
      {
        v21 = *(_QWORD *)(a4 + 160) + 16 * (v17 - 8 + 6LL);
        v20 = *(_DWORD *)(*(_QWORD *)(a4 + 160) + 4LL * (v17 - 8));
      }
      else
      {
        v20 = *(_DWORD *)(a4 + 4 * v19);
        v21 = a4 + 16 * (v17 + 2LL);
      }
      v16 = v20 + 37 * v16;
      v22 = *(_QWORD *)(v12 + 1648);
      v91 = 101027 * (v16 ^ (v16 >> 9));
      v23 = v91 ^ (v91 >> 9);
      v24 = (signed __int64 *)(v22 + 24LL * (v23 & (unsigned int)(*(_DWORD *)(v12 + 1656) - 1)));
      v25 = KeAbPreAcquire((__int64)v24, 0LL);
      if ( _InterlockedCompareExchange64(v24, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v24, 0LL, v25, (__int64)v24);
      if ( v25 )
        *(_BYTE *)(v25 + 18) = 1;
      _m_prefetchw((const void *)(v12 + 4232));
      v26 = *(_DWORD *)(v12 + 4232);
      if ( !v26 )
LABEL_136:
        KeBugCheckEx(0x51u, 0x17uLL, v12, 9uLL, v16);
      while ( 1 )
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 4232), v26 + 1, v26);
        if ( v27 == v26 )
          break;
        if ( !v26 )
          goto LABEL_136;
      }
      v8 = 0;
      v28 = *(_QWORD *)(v12 + 1648);
      v29 = v23 & (unsigned int)(*(_DWORD *)(v12 + 1656) - 1);
      v93 = 0LL;
      v30 = 0LL;
      v31 = *(_QWORD *)(v28 + 24 * v29 + 16);
      if ( !v31 )
        goto LABEL_42;
      while ( 1 )
      {
        if ( *(_DWORD *)v31 == v16 )
        {
          v30 = v31 - 16;
          if ( *(volatile signed __int64 **)(v31 - 16 + 72) == v90 )
          {
            v37 = *(_QWORD *)(v30 + 80);
            v38 = *(_WORD *)(v37 + 24);
            v39 = (unsigned __int8 *)(v37 + 26);
            if ( (*(_DWORD *)v37 & 1) == 0 )
            {
              *((_QWORD *)&v93 + 1) = v37 + 26;
              LOWORD(v93) = v38;
              WORD1(v93) = v38;
              if ( !(unsigned int)CmpCompareUnicodeString(v21, (__int64)&v93, 2) )
                break;
              goto LABEL_16;
            }
            v40 = *(_WORD *)v21 >> 1;
            v41 = *(unsigned __int16 **)(v21 + 8);
            if ( v40 )
            {
              while ( v38 )
              {
                v42 = *v41++;
                v43 = *v39++;
                if ( v42 != v43 )
                {
                  if ( v42 >= 0x61u )
                  {
                    if ( v42 > 0x7Au )
                    {
                      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                      v42 = NLS_UPCASE(CurrentServerSiloGlobals[154], v71);
                    }
                    else
                    {
                      v42 -= 32;
                    }
                  }
                  if ( v42 != v43 )
                    goto LABEL_16;
                }
                --v38;
                if ( !--v40 )
                  break;
              }
            }
            if ( v40 == v38 )
              break;
          }
        }
LABEL_16:
        v31 = *(_QWORD *)(v31 + 8);
        if ( !v31 )
        {
          v8 = 0;
          goto LABEL_18;
        }
      }
      v8 = 0;
LABEL_42:
      if ( v30 )
      {
        v44 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 )
        {
          while ( 1 )
          {
            if ( v44 == -1 )
              KeBugCheckEx(0x51u, 0x24uLL, v30, 0LL, 0LL);
            v45 = v44;
            v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v30, v44 + 1, v44);
            if ( v45 == v44 )
              break;
            if ( !v44 )
              goto LABEL_58;
          }
        }
        else
        {
LABEL_58:
          CmpLockKcbShared(v30);
          if ( (*(_DWORD *)(v30 + 8) & 0x80000) != 0 )
            KeBugCheckEx(0x51u, 0x20uLL, v30, 0LL, 0LL);
          if ( !_InterlockedIncrement64((volatile signed __int64 *)v30) )
            KeBugCheckEx(0x51u, 0x24uLL, v30, 0LL, 0LL);
          if ( (*(_BYTE *)(v30 + 64) & 2) != 0 )
          {
            v53 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
              ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v53, v54);
            if ( v53 )
              *(_BYTE *)(v53 + 18) = 1;
            *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
            *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
            v56 = *(_BYTE *)(v30 + 64);
            if ( (v56 & 2) != 0 )
            {
              v57 = v30 + 224;
              if ( (v56 & 4) != 0 )
              {
                **(_BYTE **)v57 = 1;
                *(_BYTE *)(v30 + 64) &= ~4u;
              }
              else
              {
                v58 = *(_BYTE **)v57;
                v59 = *(_QWORD **)(v30 + 232);
                if ( *(_QWORD *)(*(_QWORD *)v57 + 8LL) != v57 || *v59 != v57 )
                  __fastfail(3u);
                --CmpDelayedCloseElements;
                *v59 = v58;
                *((_QWORD *)v58 + 1) = v59;
                --qword_140D552B8;
              }
              *(_QWORD *)(v30 + 232) = v30 + 224;
              *(_QWORD *)v57 = v57;
              _InterlockedOr(v85, 0);
              *(_BYTE *)(v30 + 64) &= ~2u;
            }
            v60 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
            v8 = 0;
            *(&CmpDelayedCloseTableLock + 1) = 0LL;
            v61 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
            if ( v61 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v61);
            if ( (_DWORD)KiIrqlFlags )
            {
              v72 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v72 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v72 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                v52 = (v75 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v75;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            __writecr8(v60);
            KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          }
          CmpUnlockKcb(v30);
        }
        v46 = v97;
        v47 = v89;
        if ( v89 == v97 - 1 )
        {
          v86 = 1;
        }
        else
        {
          v48 = (__int64 *)(*(_QWORD *)(v12 + 1648)
                          + 24 * ((unsigned int)(*(_DWORD *)(v12 + 1656) - 1) & (v91 ^ ((unsigned __int64)v91 >> 9))));
          v48[1] = 0LL;
          _m_prefetchw(v48);
          v49 = *v48;
          v50 = *v48 - 16;
          if ( (*v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v50 = 0LL;
          if ( (v49 & 2) != 0 || (v51 = *v48, v51 != _InterlockedCompareExchange64(v48, v50, v49)) )
            ExfReleasePushLock(v48);
          KeAbPostRelease((ULONG_PTR)v48);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 4232), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PVOID)v12);
          v46 = v97;
          v47 = v89;
        }
        if ( _InterlockedExchangeAdd64(v90, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          goto LABEL_137;
        v18 = (volatile signed __int64 *)v30;
        v13 = v88 + 1;
        v90 = (volatile signed __int64 *)v30;
        v52 = (*(_DWORD *)(v30 + 184) & 0x100000) == 0;
        ++v88;
        if ( !v52 )
          goto LABEL_25;
        v17 = v47 + 1;
        v19 = v92 + 1;
        v89 = v17;
        ++v92;
        if ( v17 >= v46 )
          goto LABEL_25;
        a4 = v98;
        continue;
      }
      break;
    }
LABEL_18:
    v32 = (__int64 *)(*(_QWORD *)(v12 + 1648)
                    + 24 * ((unsigned int)(*(_DWORD *)(v12 + 1656) - 1) & (v91 ^ ((unsigned __int64)v91 >> 9))));
    v32[1] = 0LL;
    _m_prefetchw(v32);
    v33 = *v32;
    v34 = *v32 - 16;
    if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v34 = 0LL;
    if ( (v33 & 2) != 0 || (v35 = *v32, v35 != _InterlockedCompareExchange64(v32, v34, v33)) )
      ExfReleasePushLock(v32);
    KeAbPostRelease((ULONG_PTR)v32);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v12);
    v13 = v88;
    v18 = v90;
LABEL_25:
    v14 = v86;
    v10 = v87;
    v9 = v96;
LABEL_26:
    if ( v11 != BugCheckParameter2
      && _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
LABEL_137:
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    }
    v10 += v13;
    v9 += v13;
    v87 = v10;
    v96 = v9;
    if ( (v18[23] & 0x20000) == 0 )
    {
LABEL_28:
      *a6 = v18;
      *a7 = v14;
      *a8 = v10;
      return v8;
    }
    CmpLockKcbShared(v18);
    if ( (v18[23] & 0x20000) == 0 )
      goto LABEL_97;
    v11 = *((_QWORD *)v18 + 13);
    v62 = _InterlockedIncrement64((volatile signed __int64 *)v11);
    if ( !v62 )
      KeBugCheckEx(0x51u, 0x24uLL, v11, 0LL, 0LL);
    if ( v62 == 1 )
      goto LABEL_145;
    v63 = *(_QWORD *)(v11 + 32);
    if ( (*(_DWORD *)(v63 + 160) & 0x20) == 0 || *(struct _KTHREAD **)(v63 + 4168) == KeGetCurrentThread() )
    {
      if ( (*(_DWORD *)(v11 + 8) & 0x40000) != 0 )
      {
        v76 = (__int64)a5;
        v8 = -1073740763;
        v80 = 394496;
        goto LABEL_141;
      }
      CmpUnlockKcb(v18);
      if ( v14 )
        CmpUnlockHashEntryByKcb(v18);
      v94[0] = 0LL;
      CmpInitializeDelayDerefContext(v94);
      v64 = *v18;
      v65 = *((_QWORD *)v18 + 4);
      if ( *v18 <= 1uLL )
      {
LABEL_126:
        v81 = (void *)*((_QWORD *)v18 + 4);
        CmpLockHashEntryExclusiveByKcb((ULONG_PTR)v18);
        CmpLockKcbExclusive((__int64)v18);
        v82 = *((_QWORD *)v18 + 24);
        v83 = 0LL;
        if ( v82 )
        {
          v84 = *(_QWORD *)(v82 + 24);
          if ( v84 )
          {
            v83 = *(_QWORD *)(v84 + 16);
            CmpUnlockKcb(v18);
            CmpLockKcbExclusive(v83);
            CmpLockKcbExclusive((__int64)v18);
          }
        }
        CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v18);
        CmpUnlockKcb(v18);
        if ( v83 )
          CmpUnlockKcb(v83);
        CmpUnlockHashEntry(v81);
        CmpDrainDelayDerefContext((_QWORD **)v94);
        v9 = v96;
        v8 = 0;
      }
      else
      {
        while ( 1 )
        {
          v66 = v64 - 1;
          v67 = v64;
          v68 = v64 == 3 && (v18[23] & 0x40000) != 0 && *(_BYTE *)(v65 + 2944) == 1;
          v69 = _InterlockedCompareExchange64(v18, v66, v64);
          v64 = v69;
          if ( v69 == v67 )
            break;
          if ( v69 <= 1 )
            goto LABEL_126;
        }
        if ( v69 < v66 )
          KeBugCheckEx(0x51u, 0x25uLL, (ULONG_PTR)v18, 0LL, 0LL);
        if ( v68 )
          CmpDoQueueLateUnloadWorker(v65);
      }
      if ( !v14 )
      {
        a3 = v97;
        a4 = v98;
        continue;
      }
      v18 = (volatile signed __int64 *)v11;
      CmpLockHashEntrySharedByKcb(v11);
      CmpLockKcbShared(v11);
LABEL_97:
      CmpUnlockKcb(v18);
      goto LABEL_28;
    }
    break;
  }
  v8 = -1073741772;
  v76 = (__int64)a5;
  if ( CmpLoadingSystemHivesActive
    && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
    && a5
    && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v98, v9 - 1),
        (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v78, v79, a5 + 34)) )
  {
    *a5 |= 0x100u;
    v8 = 259;
    v80 = 393984;
  }
  else
  {
    v80 = 394240;
  }
LABEL_141:
  CmpRecordParseFailure(v76, v80, v8);
  CmpDereferenceKeyControlBlockUnsafe(v11);
  CmpUnlockKcb(v18);
  if ( v14 )
    CmpUnlockHashEntryByKcb(v18);
  CmpDereferenceKeyControlBlock((ULONG_PTR)v18);
  return v8;
}
