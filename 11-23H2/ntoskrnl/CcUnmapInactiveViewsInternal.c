/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x140538930
 * Callers:
 *     CcUnmapInactiveViews @ 0x1405387C8 (CcUnmapInactiveViews.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14029CDB0 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcGetVacbLargeOffset @ 0x14029F320 (CcGetVacbLargeOffset.c)
 *     CcReferenceVacbArray @ 0x14029F87C (CcReferenceVacbArray.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     SetVacb @ 0x1402A0D98 (SetVacb.c)
 *     CcSetVacbInFreeList @ 0x1402A0E90 (CcSetVacbInFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402A12C0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A1300 (CcAcquireBcbLockAndVacbLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x1405383EC (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x14053848C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140538534 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1405385D4 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcUnmapVacb @ 0x140722010 (CcUnmapVacb.c)
 *     RtlRandom @ 0x1407E66B0 (RtlRandom.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  _DWORD *RandomVacbArrayWithReference; // rdi
  int v6; // r13d
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  unsigned int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // rsi
  bool CanReuseVacb; // al
  __int64 v17; // r9
  KIRQL v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned int v23; // r12d
  int v24; // r12d
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 VacbLargeOffset; // r14
  int v28; // r15d
  unsigned int v29; // ecx
  KIRQL v30; // bl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  __int64 v41; // r14
  int v42; // esi
  __int64 v43; // rbx
  bool v45; // [rsp+28h] [rbp-49h]
  unsigned int v46; // [rsp+2Ch] [rbp-45h]
  unsigned int v47; // [rsp+30h] [rbp-41h]
  int v48; // [rsp+34h] [rbp-3Dh]
  unsigned int v49; // [rsp+38h] [rbp-39h]
  int v50; // [rsp+3Ch] [rbp-35h]
  int v51; // [rsp+40h] [rbp-31h]
  int v52; // [rsp+44h] [rbp-2Dh]
  __int64 v53; // [rsp+48h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+50h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v57; // [rsp+E0h] [rbp+6Fh]
  int v58; // [rsp+E8h] [rbp+77h]

  v57 = a2;
  v48 = -1;
  v46 = 0;
  v49 = 0;
  v52 = 0;
  v51 = 0;
  v4 = 0;
  v50 = 0;
  RandomVacbArrayWithReference = 0LL;
  v53 = 0LL;
  v6 = 0;
  v47 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v54, 0, sizeof(v54));
  if ( a4 )
  {
    *a4 = 0LL;
    v51 = 1;
  }
  v58 = a3 & 1;
  v9 = !(a3 & 1);
  v45 = v9;
  do
  {
LABEL_4:
    if ( v4 < a2 )
    {
      while ( v8 <= CcVacbArraysHighestUsedIndex )
      {
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = v48;
          goto LABEL_19;
        }
        LODWORD(v10) = -1;
        v48 = -1;
        if ( v9 )
        {
          RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
          if ( RandomVacbArrayWithReference[1] == 1 )
          {
LABEL_73:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            a2 = v57;
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_4;
          }
LABEL_19:
          if ( v9 )
          {
            v13 = 0;
            do
            {
              v14 = RtlRandom(&CcRandomSeed);
              v15 = (__int64)&RandomVacbArrayWithReference[8 * (v14 % (RandomVacbArrayWithReference[2] + 1))
                                                         + 4
                                                         + 2 * (v14 % (RandomVacbArrayWithReference[2] + 1))];
              if ( CcCanReuseVacb(v15, 0LL) )
              {
                if ( v15 )
                  goto LABEL_32;
              }
              else
              {
                ++v13;
              }
            }
            while ( v13 <= 0x10 );
            ++CcDbgRandomFailed;
            v9 = 0;
            v45 = 0;
            goto LABEL_73;
          }
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v48 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_73;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            CanReuseVacb = CcCanReuseVacb(
                             (__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10],
                             v7);
          }
          while ( !CanReuseVacb && (_DWORD)v10 );
          v48 = v10;
          v15 = v17 & -(__int64)CanReuseVacb;
          if ( !v15 )
          {
            v9 = v45;
            goto LABEL_73;
          }
LABEL_32:
          v18 = KeAcquireQueuedSpinLock(4uLL);
          if ( CcCanReuseVacb(v15, v7) )
          {
            v19 = *(_QWORD *)(v15 + 8);
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v19 + 536) + 768LL), &LockHandle);
            v20 = *(_QWORD *)(v15 + 8);
            if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v20 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v20 )
            {
              ++*(_DWORD *)(v20 + 4);
              ++*(_DWORD *)(v20 + 544);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v21 = *(_QWORD *)(v15 + 16);
              v22 = *(_QWORD *)(v15 + 8);
              v23 = *(_DWORD *)(v22 + 152);
              KeReleaseQueuedSpinLock(4uLL, v18);
              v24 = (v23 >> 9) & 1;
              CcAcquireBcbLockAndVacbLock(v24, v22);
              v25 = *(_QWORD *)(v22 + 536);
              if ( a1 == v25
                && v21 >= 0
                && (v26 = *(_QWORD *)(v22 + 32), v21 < v26)
                && (v26 <= 0x2000000
                  ? (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v22 + 88)
                                                 + 8 * ((unsigned __int64)(unsigned int)v21 >> 18)))
                  : (VacbLargeOffset = CcGetVacbLargeOffset(v22, v21)),
                    VacbLargeOffset && !*(_WORD *)(VacbLargeOffset + 16)) )
              {
                SetVacb(v22, v21, 0LL);
                if ( *(_DWORD *)(v25 + 1248) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
                {
                  v28 = 1;
                  goto LABEL_44;
                }
                v28 = 0;
                if ( v51 )
                {
LABEL_44:
                  v29 = v50 | 2;
                  v53 = 0LL;
                  v50 |= 2u;
                }
                else
                {
                  v29 = v50 & 0xFFFFFFFD;
                  v50 &= ~2u;
                  if ( !v53 && v58 )
                    v53 = *(_QWORD *)VacbLargeOffset;
                }
                CcUnmapVacb(VacbLargeOffset, v22, v29);
                CcReleaseBcbLockAndVacbLock(v24, v22);
                v4 = v46;
                if ( v28 )
                {
LABEL_52:
                  v46 = v4;
                }
                else
                {
                  v4 = v46 + 1;
                  v49 = 1;
                  ++v46;
                  if ( v51 )
                  {
                    v51 = 0;
                    v49 = 1;
                    *a4 = *(_QWORD *)VacbLargeOffset;
                    *(_QWORD *)VacbLargeOffset = 0LL;
                    goto LABEL_52;
                  }
                }
                v30 = KeAcquireQueuedSpinLock(4uLL);
                *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
                CcSetVacbInFreeList(v25, (_QWORD *)VacbLargeOffset, v28);
                KeReleaseQueuedSpinLock(4uLL, v30);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 768), &v54);
                CcDecrementOpenCount(v22);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&v54);
                OldIrql = v54.OldIrql;
                if ( (_DWORD)KiIrqlFlags )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                    && CurrentIrql <= 0xFu
                    && v54.OldIrql <= 0xFu
                    && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v35 = ~(unsigned __int16)(-1LL << (v54.OldIrql + 1));
                    v36 = (v35 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v35;
                    if ( v36 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
                v7 = v53;
              }
              else
              {
                CcReleaseBcbLockAndVacbLock(v24, v22);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 768), &v54);
                CcDecrementOpenCount(v22);
                KxReleaseQueuedSpinLock((volatile signed __int64 **)&v54);
                OldIrql = v54.OldIrql;
                if ( (_DWORD)KiIrqlFlags )
                {
                  v37 = KeGetCurrentIrql();
                  if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v37 <= 0xFu && v54.OldIrql <= 0xFu && v37 >= 2u )
                  {
                    v38 = KeGetCurrentPrcb();
                    v39 = v38->SchedulerAssist;
                    v40 = ~(unsigned __int16)(-1LL << (v54.OldIrql + 1));
                    v36 = (v40 & v39[5]) == 0;
                    v39[5] &= v40;
                    if ( v36 )
                      KiRemoveSystemWorkPriorityKick((__int64)v38);
                  }
                }
                v4 = v46;
              }
              __writecr8(OldIrql);
              v9 = v45;
              v8 = v47;
              a2 = v57;
              v6 = v52;
              goto LABEL_4;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          }
          v53 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v18);
          a2 = v57;
          v9 = v45;
          v8 = v47;
          goto LABEL_4;
        }
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          RandomVacbArrayWithReference = CcReferenceVacbArray(v11);
          if ( RandomVacbArrayWithReference )
            break;
          if ( ++v11 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark((__int64)RandomVacbArrayWithReference);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v45;
        v47 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
      }
      a2 = v57;
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v57;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v41 = (a2 - v4) << 18;
    v42 = 0;
    v52 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v43 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        ExReleaseFastMutex(&CcBcbTrimNotificationListLock);
        v42 |= (*(__int64 (__fastcall **)(__int64))(v43 + 16))(v41);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v43 = *(_QWORD *)v43;
      }
      while ( (__int64 *)v43 != &CcBcbTrimNotificationList );
      v7 = v53;
    }
    ExReleaseFastMutex(&CcBcbTrimNotificationListLock);
    v8 = v47;
    a2 = v57;
    v36 = v42 == 0;
    v9 = v45;
  }
  while ( !v36 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v49;
}
