/*
 * XREFs of MiProcessWorkingSets @ 0x14021FA30
 * Callers:
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     MiComputeSystemTrimCriteria @ 0x1402201DC (MiComputeSystemTrimCriteria.c)
 *     MiLogProcessWorkingSetsStop @ 0x140220550 (MiLogProcessWorkingSetsStop.c)
 *     MiComputeAgingPercent @ 0x1402205B4 (MiComputeAgingPercent.c)
 *     MiReturnWsToExpansionList @ 0x14022247C (MiReturnWsToExpansionList.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025B380 (MiTrimOrAgeWorkingSet.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KeSignalGate @ 0x14035CCEC (KeSignalGate.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140367920 (_tlgWriteEx_EtwWriteEx.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403AE98C (MiInitializeWorkingSetManagerParameters.c)
 *     MiDrainZeroLookasides @ 0x1403BBB48 (MiDrainZeroLookasides.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiOrderTrimList @ 0x14046B68E (MiOrderTrimList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14056F660 (KeRetryOutswapProcess.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1406342DC (MiCheckSystemTrimEndCriteria.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  PRKEVENT v2; // rdi
  __int64 v4; // r15
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __m128i v9; // xmm0
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  _QWORD *v13; // r9
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // r12d
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r9
  int v20; // r10d
  _QWORD *v21; // rbx
  __int64 **v22; // r13
  __int64 v23; // r11
  _DWORD *v24; // r9
  int v25; // r14d
  __int16 v26; // dx
  int v27; // r15d
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 *v30; // rsi
  int *v31; // r12
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 OldIrql; // r14
  int v34; // eax
  unsigned __int8 v35; // dl
  __int64 v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 **v40; // rax
  _DWORD *v41; // r9
  __int64 v42; // r10
  __int64 **v43; // rax
  __int64 *v44; // rax
  bool v45; // zf
  char v46; // si
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned __int64 v49; // rbx
  _QWORD *v50; // rsi
  struct _LIST_ENTRY *v51; // rcx
  __int64 v52; // rax
  char v53; // al
  int v54; // eax
  _QWORD *v55; // rcx
  unsigned __int8 Lock; // cl
  _QWORD *v57; // r8
  _QWORD *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // r9
  _QWORD *v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  __int64 v68; // rax
  __int64 **v69; // rax
  unsigned __int64 v70; // rdi
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  unsigned __int8 v75; // cl
  struct _KPRCB *v76; // r10
  int v77; // eax
  int v78; // eax
  unsigned __int8 v79; // cl
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  PRKEVENT v83; // rax
  unsigned __int8 v84; // al
  _DWORD *v85; // r8
  int v86; // eax
  signed __int32 v87[12]; // [rsp+0h] [rbp-100h] BYREF
  int v88; // [rsp+40h] [rbp-C0h]
  char v89; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v90; // [rsp+48h] [rbp-B8h]
  unsigned int v91; // [rsp+50h] [rbp-B0h]
  __int16 v92; // [rsp+54h] [rbp-ACh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v94; // [rsp+70h] [rbp-90h] BYREF
  int v95; // [rsp+74h] [rbp-8Ch]
  unsigned int v96; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  __int64 v98; // [rsp+88h] [rbp-78h]
  int v99; // [rsp+90h] [rbp-70h] BYREF
  int v100; // [rsp+94h] [rbp-6Ch]
  __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v106[20]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(PRKEVENT *)(a1 + 16920);
  v90 = a2;
  v98 = a1;
  Event = v2;
  v4 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    v5 = 0LL;
    v6 = 0LL;
    if ( KeNumberNodes )
    {
      if ( (unsigned __int16)KeNumberNodes < 4u )
        goto LABEL_7;
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        v9 = _mm_loadu_si128((const __m128i *)((char *)&xmmword_140C674D0 + 8 * v6));
        v10 = (unsigned int)(v6 + 2);
        v6 = (unsigned int)(v6 + 4);
        v7 = _mm_add_epi64(v7, v9);
        v11 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)((char *)&xmmword_140C674D0 + 8 * v10)), v8);
        v8 = v11;
      }
      while ( (unsigned int)v6 < (KeNumberNodes & 0xFFFCu) );
      v12 = _mm_add_epi64(v7, v11);
      v5 = _mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0];
      if ( (unsigned int)v6 < (unsigned __int16)KeNumberNodes )
      {
LABEL_7:
        v13 = (_QWORD *)&xmmword_140C674D0 + v6;
        v14 = (unsigned __int16)KeNumberNodes - (unsigned int)v6;
        do
        {
          v5 += *v13++;
          --v14;
        }
        while ( v14 );
      }
    }
    if ( *(_QWORD *)(v4 + 17040) <= v5 )
    {
      v2[110].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)-1LL;
    }
    else if ( v2[110].Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v5 )
    {
      v2[110].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v5;
      v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 224));
      *(_BYTE *)(v4 + 12) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 224));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v63 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
          v45 = (v67 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v67;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v63);
      v2 = Event;
    }
  }
  if ( *(_BYTE *)(v4 + 12) )
    MiInitializeWorkingSetManagerParameters(v4);
  result = *(unsigned int *)(v4 + 4);
  if ( (result & 0x10) != 0 )
    return result;
  MiComputeAgingPercent(v4);
  v16 = MiComputeSystemTrimCriteria(v4, a2);
  v91 = v16;
  if ( *(_QWORD *)&qword_140C699E8
    && **(_DWORD **)&qword_140C699E8 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140C699E8, 1LL) )
  {
    v89 = *(_BYTE *)(a2 + 2);
    v106[4] = (__int64)&v89;
    v94 = *(_WORD *)(v19 + 2346);
    v106[6] = (__int64)&v94;
    v106[8] = (__int64)&v99;
    v102 = *(_QWORD *)(a2 + 80);
    v106[10] = (__int64)&v102;
    v103 = *(_QWORD *)(a2 + 72);
    v106[12] = (__int64)&v103;
    v104 = *(_QWORD *)(v4 + 17216);
    v106[14] = (__int64)&v104;
    v105 = *(_QWORD *)(v4 + 17600);
    v106[16] = (__int64)&v105;
    v101 = *(_QWORD *)(v4 + 17824);
    v106[18] = (__int64)&v101;
    v106[5] = v17;
    v106[7] = 2LL;
    v99 = v16;
    v106[9] = 4LL;
    v106[11] = 8LL;
    v106[13] = 8LL;
    v106[15] = 8LL;
    v106[17] = 8LL;
    v106[19] = 8LL;
    tlgWriteEx_EtwWriteEx(v20, (int)&unk_1400386D0, v18, v17, v87[8], v87[10], 0xAu, (__int64)v106);
  }
  if ( (v16 & 5) != 0 )
  {
    MiDrainZeroLookasides(v4, 0LL, 0LL, 0LL);
    LOBYTE(v2[2].Header.SignalState) = 1;
  }
  v96 = 0;
  v95 = 0;
  if ( (v16 & 2) != 0 )
    ++HIDWORD(v2[3].Header.WaitListHead.Flink);
  v21 = 0LL;
  if ( (v16 & 0x20) != 0 )
  {
    if ( WORD1(v2[97].Header.WaitListHead.Blink) > 0xAu )
      WORD1(v2[97].Header.WaitListHead.Blink) = 10;
    KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
    if ( BYTE2(v2[2].Header.SignalState) )
    {
      v57 = (_QWORD *)(v4 + 16928);
      BYTE2(v2[2].Header.SignalState) = 0;
      v58 = *(_QWORD **)(v4 + 16928);
      if ( v58 != (_QWORD *)(v4 + 16928) )
      {
        do
        {
          v59 = v58;
          v58 = (_QWORD *)*v58;
          if ( (struct _LIST_ENTRY *)v59[9] >= v2[2].Header.WaitListHead.Flink )
          {
            v60 = *v59;
            v61 = (_QWORD *)v59[1];
            if ( *(_QWORD **)(*v59 + 8LL) != v59 )
              goto LABEL_102;
            if ( (_QWORD *)*v61 != v59 )
              goto LABEL_102;
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
            v62 = *v57;
            if ( *(_QWORD **)(*v57 + 8LL) != v57 )
              goto LABEL_102;
            *v59 = v62;
            v59[1] = v57;
            *(_QWORD *)(v62 + 8) = v59;
            *v57 = v59;
          }
        }
        while ( v58 != v57 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
  }
  BYTE1(v2[2].Header.SignalState) = 1;
  v22 = (__int64 **)(v4 + 16928);
  v23 = a2;
  v24 = 0LL;
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = 0;
      v100 = v16 & 1;
      if ( (v16 & 1) != 0 )
      {
        v68 = MiOrderTrimList(v4, *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)v23 & 0x7F)), v16 & 1, 0LL);
        v23 = v90;
        v24 = 0LL;
        *(_QWORD *)(v90 + 104) = v68;
      }
      v26 = ++LOWORD(v2[97].Header.WaitListHead.Blink);
      *(_QWORD *)(v23 + 88) = *(_QWORD *)(v23 + 80) - *(_QWORD *)(v23 + 96);
      v27 = v16 & 0x20;
      v92 = v26;
      while ( 1 )
      {
        v28 = *v22;
        if ( *v22 == (__int64 *)v22 )
          goto LABEL_63;
        v29 = *v28;
        if ( (__int64 **)v28[1] != v22 || *(__int64 **)(v29 + 8) != v28 )
          goto LABEL_102;
        *v22 = (__int64 *)v29;
        v30 = v28 - 3;
        *(_QWORD *)(v29 + 8) = v22;
        if ( *((_WORD *)v28 + 74) == v26 )
          break;
        *v28 = 0LL;
        *((_WORD *)v30 + 86) = v26;
        v27 = v16 & 0x20;
        if ( (v16 & 0x20) != 0 && (struct _LIST_ENTRY *)v30[12] < Event[2].Header.WaitListHead.Flink )
        {
          v43 = (__int64 **)v22[1];
          if ( *v43 == (__int64 *)v22 )
          {
            *v28 = (__int64)v22;
            v28[1] = (__int64)v43;
            *v43 = v28;
            v22[1] = v28;
            goto LABEL_64;
          }
LABEL_102:
          __fastfail(3u);
        }
        v31 = (int *)(v30 + 23);
        if ( (unsigned __int64)v30[18] > 1 || (*(_BYTE *)v31 & 7) != 0 )
        {
          v88 = *v31;
          BYTE1(v88) = BYTE1(v88) & 0xF9 | 2;
          *(_WORD *)v31 = v88;
          if ( *(_BYTE *)(v23 + 2) == 2
            && (v30[18] <= (unsigned __int64)v30[14] || (unsigned __int64)(v30[18] - v30[14]) < 0x40000) )
          {
            goto LABEL_46;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_128;
          }
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_40;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
            v23 = v90;
            v24 = 0LL;
          }
          LockHandle.LockQueue.Next = 0LL;
          Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
          if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                           (volatile __int64 *)&Next->Lock,
                                           (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
          {
            _InterlockedOr(v87, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
LABEL_128:
            v23 = v90;
          }
LABEL_40:
          OldIrql = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v75 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v75 <= 0xFu && LockHandle.OldIrql <= 0xFu && v75 >= 2u )
            {
              v76 = KeGetCurrentPrcb();
              v24 = v76->SchedulerAssist;
              v77 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v45 = (v77 & v24[5]) == 0;
              v24[5] &= v77;
              if ( v45 )
              {
                KiRemoveSystemWorkPriorityKick(v76);
                v23 = v90;
              }
            }
          }
          __writecr8(OldIrql);
          v34 = MiTrimOrAgeWorkingSet(v28 - 3, v23, v91, v24);
          v23 = v90;
          v25 = v34;
          if ( v34 )
            *(_BYTE *)(v90 + 4) = 2;
          v24 = 0LL;
          LockHandle.LockQueue.Lock = &qword_140C698C0;
          LockHandle.LockQueue.Next = 0LL;
          v35 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
          {
            v41 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v35 == 2 )
              LODWORD(v42) = 4;
            else
              v42 = (-1LL << (v35 + 1)) & 4;
            v41[5] |= v42;
            v24 = 0LL;
          }
          LockHandle.OldIrql = v35;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_140C698C0);
            goto LABEL_85;
          }
          v36 = _InterlockedExchange64((volatile __int64 *)&qword_140C698C0, (__int64)&LockHandle);
          if ( v36 )
          {
            KxWaitForLockOwnerShip(&LockHandle, v36, &qword_140C698C0, 0LL);
LABEL_85:
            v23 = v90;
            v24 = 0LL;
          }
LABEL_46:
          if ( v27 && (struct _LIST_ENTRY *)v30[12] >= Event[2].Header.WaitListHead.Flink )
          {
            v37 = v30 + 13;
            if ( !v30[13] )
            {
              v88 = *v31;
              v53 = BYTE1(v88) | 6;
              v30[4] = (__int64)v21;
              BYTE1(v88) = v53;
              v21 = v30 + 4;
              *(_WORD *)v31 = v88;
              goto LABEL_51;
            }
          }
          else
          {
            v37 = v30 + 13;
          }
          v88 = *v31;
          BYTE1(v88) &= 0xF9u;
          *(_WORD *)v31 = v88;
          v38 = *((unsigned __int16 *)v30 + 87);
          v39 = *(_QWORD *)(qword_140C674C8 + 8 * v38) + 16928LL;
          v40 = *(__int64 ***)(*(_QWORD *)(qword_140C674C8 + 8 * v38) + 16936LL);
          if ( *v40 != (__int64 *)v39 )
            goto LABEL_102;
          *v28 = v39;
          v28[1] = (__int64)v40;
          *v40 = v28;
          *(_QWORD *)(v39 + 8) = v28;
          if ( *v37 )
          {
            KeSignalGate(*v37, 1LL);
            v23 = v90;
            v24 = 0LL;
          }
LABEL_51:
          v16 = v91;
          if ( v25 )
            goto LABEL_63;
          v26 = v92;
        }
        else if ( v30[13] )
        {
          v69 = (__int64 **)v22[1];
          if ( *v69 != (__int64 *)v22 )
            goto LABEL_102;
          v16 = v91;
          *v28 = (__int64)v22;
          v28[1] = (__int64)v69;
          *v69 = v28;
          v22[1] = v28;
        }
        else
        {
          v88 = *v31;
          BYTE1(v88) |= 6u;
          *(_WORD *)v31 = v88;
          KxReleaseQueuedSpinLock(&LockHandle);
          v70 = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v71 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
            {
              v72 = KeGetCurrentPrcb();
              v73 = v72->SchedulerAssist;
              v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v45 = (v74 & v73[5]) == 0;
              v73[5] &= v74;
              if ( v45 )
                KiRemoveSystemWorkPriorityKick(v72);
            }
          }
          __writecr8(v70);
          KeRetryOutswapProcess(v30 - 208);
          KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
          v88 = *v31;
          BYTE1(v88) &= 0xF9u;
          *((_WORD *)v30 + 92) = v88;
          MiReturnWsToExpansionList(v30, 0LL);
          v23 = v90;
          v24 = 0LL;
          v26 = v92;
          v16 = v91;
        }
      }
      v44 = *v22;
      if ( (__int64 **)(*v22)[1] != v22 )
        goto LABEL_102;
      v45 = v100 == 0;
      *v28 = (__int64)v44;
      v28[1] = (__int64)v22;
      v44[1] = (__int64)v28;
      *v22 = v28;
      if ( !v45 )
      {
        v4 = v98;
        v78 = MiCheckSystemTrimEndCriteria(v98, v23, &LockHandle, 0LL);
        v23 = v90;
        v24 = 0LL;
        if ( !v78 )
        {
          v2 = Event;
          continue;
        }
      }
      break;
    }
    v27 = v16 & 0x20;
LABEL_63:
    if ( v27 )
    {
LABEL_64:
      while ( v21 )
      {
        v54 = *((_DWORD *)v21 + 38);
        v55 = v21 - 4;
        v21 = (_QWORD *)*v21;
        v88 = v54;
        BYTE1(v88) = BYTE1(v54) & 0xF9;
        *((_WORD *)v55 + 92) = v88;
        MiReturnWsToExpansionList(v55, 1LL);
      }
      v23 = v90;
      v24 = 0LL;
    }
    v46 = v16 | v95;
    v95 |= v16;
    if ( v25 )
    {
      v83 = Event;
      BYTE1(Event[2].Header.SignalState) = 0;
      if ( (v46 & 5) != 0 )
        LOBYTE(v83[2].Header.SignalState) = 0;
      KxReleaseQueuedSpinLock(&LockHandle);
      v49 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v84 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v84 <= 0xFu && LockHandle.OldIrql <= 0xFu && v84 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v85 = v80->SchedulerAssist;
          v86 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v45 = (v86 & v85[5]) == 0;
          v85[5] &= v86;
          if ( v45 )
            goto LABEL_152;
        }
      }
    }
    else
    {
      v2 = Event;
      v47 = v16 & 0xFFFFFB9C | v96;
      v96 = v47;
      v48 = (__int64)Event[1].Header.WaitListHead.Blink & 0xFFFFFBFF;
      if ( v47 != v48 )
      {
        v16 = v48 ^ v47;
        v91 = v48 ^ v47;
        if ( (((unsigned __int8)v48 ^ (unsigned __int8)v47) & 5) != 0 )
          LOBYTE(Event[2].Header.SignalState) = 1;
        v4 = v98;
        *(_BYTE *)(v23 + 2) = 6;
        continue;
      }
      BYTE1(Event[2].Header.SignalState) = 0;
      if ( (v46 & 5) != 0 )
        LOBYTE(v2[2].Header.SignalState) = 0;
      if ( LODWORD(v2[1].Header.WaitListHead.Blink) )
      {
        LODWORD(v2[1].Header.WaitListHead.Blink) &= 0x400u;
        KeSetEvent(v2, 0, 0);
      }
      if ( (v46 & 0x43) != 0 )
      {
        v50 = (_QWORD *)v90;
        v2[100].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(v90 + 8);
        *(_QWORD *)&v2[101].Header.Lock = v50[2];
        v2[101].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v50[3];
        v2[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v50[4];
        *(_QWORD *)&v2[102].Header.Lock = v50[5];
        v2[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v50[6];
        v51 = (struct _LIST_ENTRY *)v50[7];
        v2[102].Header.WaitListHead.Blink = v51;
        v52 = v50[8];
        *(_QWORD *)&v2[103].Header.Lock = v52;
        v2[100].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v51 + v52);
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      v49 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v79 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v79 <= 0xFu && LockHandle.OldIrql <= 0xFu && v79 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v81 = v80->SchedulerAssist;
          v82 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v45 = (v82 & v81[5]) == 0;
          v81[5] &= v82;
          if ( v45 )
LABEL_152:
            KiRemoveSystemWorkPriorityKick(v80);
        }
      }
    }
    break;
  }
  __writecr8(v49);
  return MiLogProcessWorkingSetsStop(v98);
}
