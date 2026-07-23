/*
 * XREFs of CcSetDirtyPinnedData @ 0x1402FC580
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x14025D5E0 (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x1402FBF18 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x140392610 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1407654A0 (CcPreparePinWrite.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140299784 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x1402BBF30 (ExpReleaseFastMutexContended.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPagesInternal @ 0x1402FCAF0 (CcChargeDirtyPagesInternal.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCD4C (ExpAcquireFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  char *v2; // r8
  __int16 v3; // ax
  __int64 *v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  LARGE_INTEGER *v8; // r13
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // r14
  LARGE_INTEGER *v11; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // rcx
  LONGLONG v19; // rax
  LONGLONG v20; // rcx
  LONGLONG v21; // rcx
  LARGE_INTEGER v22; // rcx
  unsigned __int64 LowPart_low; // rdi
  signed __int32 v24; // eax
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  int v27; // r14d
  _BYTE *v28; // rdi
  volatile __int64 *v29; // r8
  unsigned __int8 v30; // dl
  signed __int64 *v31; // rdx
  __int64 QuadPart; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  unsigned int v35; // r14d
  unsigned __int64 DeepFreezeStartTime; // rcx
  _DWORD *v37; // r11
  __int64 v38; // r9
  unsigned __int8 v39; // cl
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  signed __int32 v49[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v50; // [rsp+30h] [rbp-50h]
  _QWORD v51[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v52; // [rsp+48h] [rbp-38h] BYREF
  __int64 v53; // [rsp+58h] [rbp-28h]
  void *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v55; // [rsp+A0h] [rbp+20h]
  __int64 v56; // [rsp+B0h] [rbp+30h]

  v53 = 0LL;
  v2 = (char *)BcbVoid;
  v3 = *(_WORD *)BcbVoid;
  v52 = 0LL;
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF1EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v51;
  v51[0] = BcbVoid;
  v51[1] = 0LL;
  if ( v3 == 762 )
  {
    BcbVoid = (PVOID)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)(v2 + 16);
  }
  v6 = *((_QWORD *)BcbVoid + 22);
  v50 = *(_QWORD *)(v6 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v56 = *(_QWORD *)(v6 + 600);
  else
    v56 = 0LL;
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    v7 = *v5;
    while ( *v5 )
    {
      v51[0] = v7;
      ++v5;
      if ( (v7 & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF7FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v8 = *(LARGE_INTEGER **)(v7 + 176);
      v9 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v11 = v8 + 36;
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v6, CurrentThread)) != 0 )
      {
        _BitScanForward(&v13, AbEntrySummary);
        v55 = v13;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v25 = *SchedulerAssist;
          do
          {
            v26 = v25;
            v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
          }
          while ( v26 != v25 );
          if ( (v25 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v9 = (__int64)(&CurrentThread[1].Process + 12 * v55);
        if ( (unsigned __int64)v11 - qword_140C65AE8 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v9 + 8) = SessionId;
        *(_QWORD *)v9 = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
        ExpAcquireFastMutexContended(&v8[36], v9);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      v18 = v51[0];
      v8[37].QuadPart = (LONGLONG)KeGetCurrentThread();
      v8[42].LowPart = CurrentIrql;
      if ( *(_BYTE *)(v18 + 2) )
        goto LABEL_22;
      v27 = *(_DWORD *)(v18 + 4) >> 12;
      *(_BYTE *)(v18 + 2) = 1;
      if ( Lsn )
      {
        *(LARGE_INTEGER *)(v18 + 40) = *Lsn;
        *(LARGE_INTEGER *)(v18 + 48) = *Lsn;
      }
      v28 = (_BYTE *)v50;
      *(_QWORD *)&v52 = 0LL;
      v29 = (volatile __int64 *)(v50 + 768);
      *((_QWORD *)&v52 + 1) = v50 + 768;
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
      {
        v37 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v30 == 2 )
          LODWORD(v38) = 4;
        else
          v38 = (-1LL << (v30 + 1)) & 4;
        v37[5] |= v38;
      }
      LOBYTE(v53) = v30;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v52, v29);
      }
      else
      {
        v31 = (signed __int64 *)_InterlockedExchange64(v29, (__int64)&v52);
        if ( v31 )
          KxWaitForLockOwnerShip((signed __int64)&v52, v31);
      }
      if ( !v8[14].LowPart && (v8[19].LowPart & 2) == 0 )
      {
        CcScheduleLazyWriteScan(v28, v56, 0LL, 0);
        CcInsertIntoDirtySharedCacheMapList((__int64)v8);
      }
      if ( CcEnablePerVolumeLazyWriter )
        QuadPart = v8[75].QuadPart;
      else
        QuadPart = 0LL;
      CcChargeDirtyPagesInternal((_DWORD)v8, 0, 0, v27, v8[67].QuadPart, QuadPart);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
      }
      else
      {
        _m_prefetchw(&v52);
        v33 = v52;
        if ( (_QWORD)v52 )
          goto LABEL_70;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v52 + 1),
                           0LL,
                           (signed __int64)&v52) != &v52 )
        {
          v33 = KxWaitForLockChainValid(&v52);
LABEL_70:
          *(_QWORD *)&v52 = 0LL;
          v39 = BYTE8(v52);
          if ( ((v39 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v33 + 8), *((__int64 *)&v52 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v49, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v33 + 8) >> 5) & 0x7F], 0LL));
          }
        }
      }
      v34 = (unsigned __int8)v53;
      if ( (_DWORD)KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
          v44 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(v34);
      if ( (v8[19].LowPart & 0x10000000) != 0 )
      {
        v35 = v27 << 12;
        DeepFreezeStartTime = KeGetCurrentThread()->Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          if ( v35 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v35);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
        }
      }
LABEL_22:
      if ( Lsn )
      {
        v19 = Lsn->QuadPart;
        v20 = *(_QWORD *)(v51[0] + 40LL);
        if ( !v20 || v19 < v20 )
        {
          *(_QWORD *)(v51[0] + 40LL) = v19;
          v19 = Lsn->QuadPart;
        }
        v21 = *(_QWORD *)(v51[0] + 48LL);
        if ( !v21 || v19 > v21 )
          *(_QWORD *)(v51[0] + 48LL) = v19;
        if ( Lsn->QuadPart > v8[33].QuadPart )
          v8[33] = *Lsn;
      }
      v22 = *(LARGE_INTEGER *)(v51[0] + 32LL);
      if ( v22.QuadPart > v8[6].QuadPart )
        v8[6] = v22;
      LowPart_low = LOBYTE(v8[42].LowPart);
      v8[37].QuadPart = 0LL;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
      if ( v24 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&v8[36], v24);
      if ( (_DWORD)KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v45 <= 0xFu && (unsigned __int8)LowPart_low <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)LowPart_low + 1));
          v44 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      __writecr8(LowPart_low);
      KeAbPostRelease((ULONG_PTR)&v8[36]);
      v7 = *v5;
    }
  }
  else
  {
    CcSetDirtyInMask(v6, (__int64 *)v2 + 1, *((_DWORD *)v2 + 1), 0LL);
  }
}
