/*
 * XREFs of MiCoalesceFreePages @ 0x1402D4C00
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiCreateInitialLargeLeafPfns @ 0x140219E80 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140219FF4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiPfnZeroingNeeded @ 0x14021AEF4 (MiPfnZeroingNeeded.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiReturnFreeZeroPage @ 0x1402E8204 (MiReturnFreeZeroPage.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x14032FD6C (ExfTryAcquirePushLockSharedEx.c)
 *     MiDetermineCoalescedLargePageHeatState @ 0x140347B38 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  ULONG_PTR v1; // r13
  __int64 v2; // r12
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  int v8; // edx
  unsigned __int64 v9; // r10
  ULONG_PTR v10; // r8
  char *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r9
  struct _KTHREAD *CurrentThread; // r8
  volatile signed __int64 *v16; // r11
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int64 v22; // r13
  _QWORD *v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // r11d
  __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r15
  unsigned int v31; // r13d
  unsigned __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rbx
  int v35; // r11d
  volatile LONG *v36; // r14
  unsigned int i; // ebx
  signed __int64 *v38; // rbx
  ULONG_PTR v40; // r11
  unsigned __int64 *v41; // rcx
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  int v44; // r9d
  ULONG_PTR v45; // r11
  unsigned int v46; // [rsp+40h] [rbp-98h]
  int v47; // [rsp+44h] [rbp-94h] BYREF
  struct _KTHREAD *v48; // [rsp+48h] [rbp-90h]
  ULONG_PTR v49; // [rsp+50h] [rbp-88h]
  unsigned int v50; // [rsp+58h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-78h]
  __int128 v52; // [rsp+70h] [rbp-68h] BYREF
  __int128 v53; // [rsp+80h] [rbp-58h]
  __int128 v54; // [rsp+90h] [rbp-48h]

  v1 = 0LL;
  v47 = 0;
  v52 = 0LL;
  v53 = 0LL;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v2 = 48 * a1 - 0x220000000000LL;
  v3 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
  v46 = *(_BYTE *)(v2 + 34) & 7;
  v4 = 48 * v3;
  v5 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
  v6 = dword_140C65A84;
  v7 = 48 * v3 - 0x220000000000LL;
  v8 = dword_140C65A88;
  v9 = v3;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v3) >> 4);
  if ( dword_140C65A84 > (unsigned int)dword_140C65A88
    || (v11 = (char *)qword_140C65AC8 + 16 * dword_140C65A84, v10 < *(_QWORD *)v11)
    || dword_140C65A84 != dword_140C65A88 && v10 >= *((_QWORD *)v11 + 2) )
  {
    v44 = 0;
    if ( dword_140C65A88 < 0 )
LABEL_99:
      KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
    while ( 1 )
    {
      v6 = (unsigned int)((v44 + v8) >> 1);
      v11 = (char *)qword_140C65AC8 + 16 * (int)v6;
      if ( v10 < *(_QWORD *)v11 )
      {
        if ( !(_DWORD)v6 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C65AC8, 0LL);
        v8 = v6 - 1;
      }
      else
      {
        if ( (_DWORD)v6 == dword_140C65A88 || v10 < *((_QWORD *)v11 + 2) )
        {
          dword_140C65A84 = (v44 + v8) >> 1;
          break;
        }
        v44 = v6 + 1;
      }
      if ( v8 < v44 )
        goto LABEL_99;
    }
  }
  v12 = *((unsigned int *)v11 + 2);
  if ( v7 != v7 + 768 )
  {
    v13 = (_QWORD *)(v7 + 40);
    v14 = (_QWORD *)(v4 - 0x21FFFFFFFFD8LL);
    while ( v9 <= qword_140C65BA0
         && (*v14 & 0x40000000000000LL) != 0
         && *(_QWORD *)(qword_140C673C8 + 8 * ((*v13 >> 43) & 0x3FFLL)) == v5
         && (*((_BYTE *)v13 - 6) & 7u) <= 1
         && (*v13 & 0x10000000000LL) == 0 )
    {
      v13 += 6;
      v6 = v7 + 808;
      ++v9;
      v14 += 6;
      if ( v13 == (_QWORD *)(v7 + 808) )
        goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  v16 = (volatile signed __int64 *)(v5 + 216);
  BugCheckParameter2 = v5 + 216;
  v54 = 0LL;
  v48 = CurrentThread;
  v49 = v3;
  v50 = 0;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary )
    goto LABEL_15;
  AbEntrySummary = KiAbTryReclaimOrphanedEntries(v6, CurrentThread);
  v16 = (volatile signed __int64 *)(v5 + 216);
  if ( AbEntrySummary )
  {
    CurrentThread = v48;
LABEL_15:
    _BitScanForward(&v18, AbEntrySummary);
    v50 = v18;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v42 = *SchedulerAssist;
      do
      {
        v43 = v42;
        v42 = _InterlockedCompareExchange(SchedulerAssist, v42 & 0xFFDFFFFF, v42);
      }
      while ( v43 != v42 );
      if ( (v42 & 0x200000) != 0 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        CurrentThread = v48;
        v16 = (volatile signed __int64 *)(v5 + 216);
      }
    }
    _enable();
    v1 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * v50);
    if ( (unsigned __int64)v16 - qword_140C659E8 < 0x8000000000LL )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      v16 = (volatile signed __int64 *)(v5 + 216);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v1 + 8) = SessionId;
    *(_QWORD *)v1 = (unsigned __int64)v16 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) && !(unsigned __int8)ExfTryAcquirePushLockSharedEx(v16, 0LL) )
  {
    if ( v1 )
      KeAbPostReleaseEx(v45, v1);
    return 0LL;
  }
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  v22 = 48 * v3 - 0x220000000000LL;
  v23 = (_QWORD *)(v4 - 0x21FFFFFFFFD8LL);
  while ( 1 )
  {
    if ( v22 == v2 )
    {
      v41 = (unsigned __int64 *)(v22 + 16);
      if ( (*(_BYTE *)(v22 + 34) & 7) != 0 )
        MiSetOriginalPtePfnFromFreeList(v41);
      else
        *v41 &= 0xFFFFFFFFFFFFFC1FuLL;
      goto LABEL_35;
    }
    if ( v49 > qword_140C65BA0
      || (*v23 & 0x40000000000000LL) == 0
      || *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL)) != v5
      || (*(_BYTE *)(v22 + 34) & 7u) > 1
      || _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      goto LABEL_87;
    }
    if ( (*(_BYTE *)(v22 + 34) & 7u) > 1 )
      goto LABEL_106;
    v24 = *(_QWORD *)(v22 + 40);
    if ( *(_QWORD *)(qword_140C673C8 + 8 * ((v24 >> 43) & 0x3FF)) != v5
      || (*(_BYTE *)(v22 + 35) & 0x40) != 0
      || (v24 & 0x10000000000LL) != 0 )
    {
      goto LABEL_106;
    }
    if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v49, 0LL, 0) )
      break;
    ++*((_DWORD *)&v54 + ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) >> 6));
LABEL_35:
    ++v49;
    v22 += 48LL;
    v23 += 6;
    if ( v22 == v7 + 768 )
      goto LABEL_36;
  }
  MiReturnFreeZeroPage(v22, 512LL);
LABEL_106:
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_87:
  if ( v22 != v7 + 768 )
  {
    for ( ; v7 < v22; v7 += 48LL )
    {
      if ( v7 != v2 )
      {
        MiReturnFreeZeroPage(v7, 512LL);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v40 = BugCheckParameter2;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      v40 = BugCheckParameter2;
    }
    KeAbPostRelease(v40);
    return 0LL;
  }
LABEL_36:
  v25 = 0LL;
  v26 = 0;
  v27 = 1;
  if ( (_DWORD)v54 )
  {
    v26 = v54;
    v27 = 0;
  }
  if ( v26 < DWORD1(v54) )
  {
    v26 = DWORD1(v54);
    v27 = 1;
  }
  if ( v26 < DWORD2(v54) )
  {
    v26 = DWORD2(v54);
    v27 = 2;
  }
  if ( v26 < HIDWORD(v54) )
    v27 = 3;
  LODWORD(v49) = v27;
  if ( v46 != 1 )
  {
    while ( 1 )
    {
      v22 -= 48LL;
      if ( MiPfnZeroingNeeded(v22) )
        break;
      if ( v22 == v7 )
        goto LABEL_45;
    }
    v46 = 1;
  }
LABEL_45:
  LODWORD(v28) = v25;
  v47 = v25;
  v29 = v7 + 720;
  LODWORD(v48) = v25;
  v30 = v7 + 720;
  v31 = v25;
  do
  {
    if ( *(unsigned __int8 *)(v30 + 34) >> 6 != v27 )
    {
      MiChangePageAttribute(v30, v27, 1LL);
      LODWORD(v28) = (_DWORD)v48;
      v25 = 0LL;
      v27 = v49;
    }
    v32 = *(_QWORD *)(v30 + 16);
    if ( qword_140C65B40 && (v32 & 0x10) == 0 )
      v32 &= ~qword_140C65B40;
    if ( HIDWORD(v32) == 4294967293 )
      v28 = (unsigned int)v28 | 1;
    else
      v28 = (unsigned int)v28 | 2;
    *(_QWORD *)(v30 + 16) = v25;
    ++v31;
    v30 -= 48LL;
    LODWORD(v48) = v28;
  }
  while ( v31 < 0x10 );
  v33 = MiDetermineCoalescedLargePageHeatState(2LL, v28, v46, &v47);
  *(_QWORD *)&v52 = v3;
  v53 = 0LL;
  *((_QWORD *)&v52 + 1) = v46 | 0x200000000LL;
  LOBYTE(v53) = 17;
  v34 = *(_QWORD *)(v5 + 16) + 25408 * v12;
  MiInitializeAllResidentPageBasePfns((unsigned __int16 *)v5, v3, 16LL, 2, v35, v33, 1);
  MiCreateInitialLargeLeafPfns(v3, 16LL, 2, v49, *(_WORD *)v5, 1);
  v36 = (volatile LONG *)(v34 + 23104);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v34 + 23104));
  for ( i = 0; i < 0x10; ++i )
  {
    if ( v29 == v7 )
      MiInsertLargePageInNodeList(&v52);
    if ( v29 != v2 )
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 -= 48LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v36);
  if ( v47 )
    MiChangePageHeatImmediate(v3, 2LL, 0LL);
  v38 = (signed __int64 *)BugCheckParameter2;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v38);
  KeAbPostRelease((ULONG_PTR)v38);
  return 1LL;
}
