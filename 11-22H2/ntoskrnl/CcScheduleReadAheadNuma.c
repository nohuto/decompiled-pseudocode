/*
 * XREFs of CcScheduleReadAheadNuma @ 0x140328DDC
 * Callers:
 *     CcCopyReadEx @ 0x140261C40 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x1402BDACC (CcAsyncReadPrefetch.c)
 *     CcAsyncCopyRead @ 0x1402C1040 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x140328DC0 (CcScheduleReadAheadEx.c)
 *     CcScheduleReadAhead @ 0x1405379D0 (CcScheduleReadAhead.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x14029AE94 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x14029B550 (CcAllocateWorkQueueEntry.c)
 *     PsGetIoPriorityThread @ 0x1402A8A90 (PsGetIoPriorityThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C0F00 (IoReferenceIoAttributionFromThread.c)
 *     PsGetPagePriorityThread @ 0x1402E1520 (PsGetPagePriorityThread.c)
 *     CcDetermineReadPattern @ 0x1403293BC (CcDetermineReadPattern.c)
 *     CcGetCurrentNumaNode @ 0x140329470 (CcGetCurrentNumaNode.c)
 *     CcChargeThreadForReadAhead @ 0x1403294B8 (CcChargeThreadForReadAhead.c)
 *     CcPerfLogScheduleReadAhead @ 0x140391DB0 (CcPerfLogScheduleReadAhead.c)
 *     CcCanIWriteStream @ 0x1405374D4 (CcCanIWriteStream.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcScheduleReadAheadNuma(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        struct _KTHREAD *CurrentThread,
        __int64 a5)
{
  __int64 CurrentNumaNode; // rbx
  _SLIST_ENTRY *Next; // rdi
  __int64 v7; // rax
  __int64 v9; // r14
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 result; // rax
  int v15; // r10d
  int v16; // r11d
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // r14d
  unsigned __int64 v20; // r15
  int Pattern; // r12d
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // r8d
  signed __int64 v25; // rcx
  int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  bool v35; // zf
  int v36; // edx
  int v37; // r8d
  PSLIST_ENTRY v38; // r15
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  KIRQL v46; // al
  unsigned __int64 v47; // rsi
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  __int64 v52; // [rsp+48h] [rbp-41h]
  __int64 v53; // [rsp+48h] [rbp-41h]
  int v54; // [rsp+48h] [rbp-41h]
  PSLIST_ENTRY v55; // [rsp+50h] [rbp-39h] BYREF
  __int64 v56; // [rsp+58h] [rbp-31h]
  int v57; // [rsp+60h] [rbp-29h]
  __int64 v58; // [rsp+68h] [rbp-21h]
  __int64 v59; // [rsp+70h] [rbp-19h]
  volatile signed __int64 *v60; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  int v62; // [rsp+E8h] [rbp+5Fh]
  unsigned int v64; // [rsp+F8h] [rbp+6Fh]
  struct _KTHREAD *v65; // [rsp+100h] [rbp+77h]

  v65 = CurrentThread;
  v64 = a3;
  CurrentNumaNode = a5;
  Next = Object[3].Next;
  v7 = *((_QWORD *)&Object[2].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v55 = 0LL;
  v11 = *(_QWORD *)(v7 + 8);
  v62 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v56 = a5;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 536);
    v13 = *(_QWORD *)(v11 + 600);
    v58 = v12;
    v59 = v13;
    if ( !a5 )
    {
      CurrentNumaNode = CcGetCurrentNumaNode(v12, v11);
      v56 = CurrentNumaNode;
    }
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v65 = CurrentThread;
  }
  result = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( Next )
  {
    if ( v11 )
    {
      v17 = *(_DWORD *)(v11 + 152);
      if ( (v17 & 1) == 0 && (v17 & 0x2000) == 0 && ((__int64)Object[5].Next & 0x100000) == 0 && (int)result >= 2 )
      {
        result = CcCanIWriteStream(v15, v16, (_DWORD)Object, 0x1000000, 0, 4);
        if ( (_BYTE)result )
        {
          if ( !*(_BYTE *)(CurrentNumaNode + 196) )
          {
            v18 = v9 + *a2;
            v52 = v9;
            v19 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + v9);
            v57 = v19;
            v60 = (volatile signed __int64 *)&Next[5];
            v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
            if ( ((__int64)Next->Next & 0x20000) == 0 )
              LODWORD(Next->Next) |= 0x20000u;
            Pattern = CcDetermineReadPattern(Next, a2);
            if ( Pattern )
            {
              LODWORD(v22) = Pattern - 1;
              if ( Pattern != 1 )
              {
                LODWORD(v22) = Pattern - 2;
                if ( Pattern != 2 )
                {
                  v23 = (int)a2;
                  if ( Pattern != 3 )
                    goto LABEL_68;
                  v53 = 2LL * *a2 - (unsigned __int64)Next[2].Next;
                  if ( v53 < 0 )
                    goto LABEL_68;
                  LODWORD(v22) = (v53 & 0xFFF) + v64;
                  LODWORD(v53) = v53 & 0xFFFFF000;
                  v64 = v22;
                  *((_QWORD *)&Next[3].Next + 1) = v53;
                  v24 = (v22 + 4095) & 0xFFFFF000;
                  goto LABEL_34;
                }
              }
              v25 = (signed __int64)Next[4].Next;
              if ( v18 + v52 + (unsigned int)(2 * v19) >= v25 )
              {
                v54 = (int)Next[4].Next;
                *((_QWORD *)&Next[3].Next + 1) = v18 & 0xFFFFFFFFFFFFF000uLL;
                if ( (__int64)(v18 & 0xFFFFFFFFFFFFF000uLL) >= v25 )
                  v54 = ~(v19 - 1) & (v19 + v18 - 1);
                ++LODWORD(Next[3].Next);
                v26 = v19;
                v27 = (unsigned int)Next[3].Next;
                if ( Pattern == 1 || v27 >= 3 )
                  v26 = 2 * v19;
                v24 = v54 - *((_DWORD *)&Next[3].Next + 2) + v26;
                if ( v27 >= 3 )
                {
                  v28 = *((unsigned int *)&Next[5].Next + 3);
                  if ( (_DWORD)v28 )
                  {
                    v29 = v28 * v64 * v27;
                    v22 = (v29 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
                    v30 = v29 / 0x64;
                    if ( v30 > 0xFFFFFFFF )
                      v30 = 0xFFFFFFFFLL;
                    if ( v30 > v24 )
                      v24 = v30;
                  }
                }
LABEL_34:
                v62 = 1;
                HIDWORD(Next[3].Next) = v24;
                if ( ((__int64)Next->Next & 0x10000) == 0 )
                {
                  LODWORD(Next->Next) |= 0x10000u;
                  LODWORD(Next->Next) ^= (LODWORD(Next->Next) ^ ((unsigned int)PsGetPagePriorityThread((__int64)KeGetCurrentThread()) << 18)) & 0x1C0000;
                  KxReleaseSpinLock((volatile signed __int64 *)&Next[5]);
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                      && CurrentIrql <= 0xFu
                      && (unsigned __int8)v20 <= 0xFu
                      && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                      v35 = (v34 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v34;
                      if ( v35 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                  __writecr8(v20);
                  if ( (int)CcAllocateWorkQueueEntry(v58, v59, v56, &v55) < 0 )
                  {
                    v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
                    LODWORD(Next->Next) &= ~0x10000u;
                    v47 = v46;
                    result = KxReleaseSpinLock((volatile signed __int64 *)&Next[5]);
                    if ( (_DWORD)KiIrqlFlags )
                    {
                      result = KeGetCurrentIrql();
                      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                        && (unsigned __int8)result <= 0xFu
                        && (unsigned __int8)v47 <= 0xFu
                        && (unsigned __int8)result >= 2u )
                      {
                        v48 = KeGetCurrentPrcb();
                        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
                        v49 = v48->SchedulerAssist;
                        v35 = ((unsigned int)result & v49[5]) == 0;
                        v49[5] &= result;
                        if ( v35 )
                          result = KiRemoveSystemWorkPriorityKick(v48);
                      }
                    }
                    __writecr8(v47);
                  }
                  else
                  {
                    v38 = v55;
                    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
                      CcPerfLogScheduleReadAhead((_DWORD)v55, (_DWORD)Object, (_DWORD)a2, v64, v57, Pattern, 1);
                    if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                      CcChargeThreadForReadAhead((_DWORD)Object, v36, v37, Pattern, (__int64)v65);
                    ObfReferenceObjectWithTag(Object, 0x746C6644u);
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v58 + 768), &LockHandle);
                    *(_DWORD *)(v11 + 152) |= 0x4000u;
                    ++*(_DWORD *)(v11 + 4);
                    ++*(_DWORD *)(v11 + 544);
                    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                    OldIrql = LockHandle.OldIrql;
                    if ( (_DWORD)KiIrqlFlags )
                    {
                      v40 = KeGetCurrentIrql();
                      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                        && v40 <= 0xFu
                        && LockHandle.OldIrql <= 0xFu
                        && v40 >= 2u )
                      {
                        v41 = KeGetCurrentPrcb();
                        v42 = v41->SchedulerAssist;
                        v43 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                        v35 = (v43 & v42[5]) == 0;
                        v42[5] &= v43;
                        if ( v35 )
                          KiRemoveSystemWorkPriorityKick(v41);
                        v38 = v55;
                      }
                    }
                    __writecr8(OldIrql);
                    Next[7].Next = v38;
                    LODWORD(v38[8].Next) = 1;
                    v38[1].Next = Object;
                    *((_QWORD *)&v38[1].Next + 1) = 0LL;
                    IoReferenceIoAttributionFromThread(v65, (__int64)(&v38[1].Next + 1));
                    return CcPostWorkQueue(v38, v56 + 88, v44, v45);
                  }
                  return result;
                }
                if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                  CcChargeThreadForReadAhead((_DWORD)Object, v22, v24, Pattern, (__int64)v65);
              }
            }
            else
            {
              LODWORD(Next[3].Next) = 0;
              Next[4].Next = 0LL;
              *((_QWORD *)&Next[4].Next + 1) = 0LL;
            }
            v23 = (int)a2;
LABEL_68:
            if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v23, v64, v19, Pattern, v62);
            result = KxReleaseSpinLock(v60);
            if ( (_DWORD)KiIrqlFlags )
            {
              result = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
                && (unsigned __int8)result <= 0xFu
                && (unsigned __int8)v20 <= 0xFu
                && (unsigned __int8)result >= 2u )
              {
                v50 = KeGetCurrentPrcb();
                v51 = v50->SchedulerAssist;
                result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v35 = ((unsigned int)result & v51[5]) == 0;
                v51[5] &= result;
                if ( v35 )
                  result = KiRemoveSystemWorkPriorityKick(v50);
              }
            }
            __writecr8(v20);
          }
        }
      }
    }
  }
  return result;
}
