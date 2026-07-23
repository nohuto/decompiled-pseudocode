/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x14023D950
 * Callers:
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x140260890 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     KiTryUnwaitThread @ 0x140238DA0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiWakeQueueWaiter @ 0x1402B8A10 (KiWakeQueueWaiter.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KeCaptureWaitChainHeadEx @ 0x1402BBA2C (KeCaptureWaitChainHeadEx.c)
 *     KeAbPreWakeupHandle @ 0x1402BE028 (KeAbPreWakeupHandle.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140600DC4 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3)
{
  bool v5; // r15
  unsigned int v6; // ecx
  ULONG_PTR v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  signed __int64 v10; // rbp
  _PROCESSOR_NUMBER v11; // ebp
  _DWORD *v12; // rsi
  int v13; // ecx
  bool v14; // zf
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 result; // rax
  char v19; // si
  unsigned int v20; // r12d
  unsigned int v21; // esi
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  ULONG_PTR v24; // rsi
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // rcx
  ULONG_PTR v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  struct _KPRCB *v32; // r12
  int v33; // edx
  unsigned int Priority; // r9d
  volatile signed __int32 *v35; // rax
  volatile signed __int32 *v36; // rcx
  volatile signed __int32 *v37; // rax
  volatile signed __int32 *v38; // rcx
  __int64 v39; // rdx
  volatile signed __int32 *v40; // rcx
  volatile signed __int32 **v41; // r8
  _DWORD *v42; // r9
  __int64 v43; // rdx
  char v44; // cl
  char v45; // al
  __int64 v46; // rcx
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  _QWORD *v50; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  unsigned __int8 v55; // cl
  _DWORD *v56; // r10
  __int64 v57; // r8
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v60; // rdx
  __int64 v61; // r9
  _QWORD *v62; // r10
  __int64 v63; // rcx
  char v64; // al
  int v65; // r9d
  volatile signed __int32 **v66; // r8
  volatile signed __int32 *v67; // rax
  signed __int32 v68[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+30h] [rbp-98h]
  volatile signed __int32 *v70; // [rsp+38h] [rbp-90h]
  volatile signed __int32 *v71; // [rsp+40h] [rbp-88h]
  volatile signed __int32 *v72; // [rsp+48h] [rbp-80h] BYREF
  __int64 v73; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v74; // [rsp+58h] [rbp-70h]
  struct _KPRCB *v75; // [rsp+60h] [rbp-68h]
  _KTHREAD *v76; // [rsp+68h] [rbp-60h]
  volatile signed __int32 *v77; // [rsp+70h] [rbp-58h]
  volatile signed __int32 *v78; // [rsp+78h] [rbp-50h]
  __int64 v79; // [rsp+80h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned int i; // [rsp+D8h] [rbp+10h]
  unsigned int v82; // [rsp+E8h] [rbp+20h]

  v72 = 0LL;
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 1120);
  v7 = BugCheckParameter1 + 48;
  if ( *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    v22 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
    if ( !v6
      || (v23 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v23 + 8)
      || (v7 = v23 + 16LL * v6, *(_QWORD *)v7 != BugCheckParameter2) )
    {
      v24 = *(_QWORD *)(BugCheckParameter1 + 16);
      v25 = v24;
      v26 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v24 || (v27 = v24 + 16LL * *(unsigned int *)(v24 + 8), v7 = v24 + 16, v22 >= v26) )
LABEL_85:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v25, 2uLL);
      while ( *(_QWORD *)v7 != BugCheckParameter2 )
      {
        if ( !*(_QWORD *)v7 || (++v22, v22 != v26) )
        {
          v7 += 16LL;
          if ( v7 != v27 )
            continue;
        }
        goto LABEL_85;
      }
      KeGetCurrentThread()->ResourceIndex = (__int64)(v7 - v25) >> 4;
    }
  }
  v8 = *(_DWORD *)(v7 + 8) & 7 | (8 * (*(_DWORD *)(v7 + 8) >> 3) - 8);
  *(_DWORD *)(v7 + 8) = v8;
  v9 = v8 >> 3;
  if ( !(v8 >> 3) )
  {
    v10 = *(_QWORD *)v7;
    if ( (v8 & 2) != 0 )
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v10 & 3) != 0 )
    {
      goto LABEL_14;
    }
    if ( v10 )
    {
      if ( (v8 & 1) != 0 )
      {
        PsBoostThreadIoEx(v10, 1, 0, 0LL);
        *(_DWORD *)(v7 + 8) &= ~1u;
        v8 = *(_DWORD *)(v7 + 8);
      }
      if ( (v8 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1444));
        *(_DWORD *)(v7 + 8) &= ~4u;
        v8 = *(_DWORD *)(v7 + 8);
      }
      if ( (v8 & 2) != 0 )
      {
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v10, 0x746C6644u);
        *(_DWORD *)(v7 + 8) &= ~2u;
      }
    }
LABEL_14:
    *(_QWORD *)v7 = 0LL;
    v11 = (_PROCESSOR_NUMBER)1;
    v12 = (_DWORD *)(BugCheckParameter1 + 76);
    v82 = *(_DWORD *)(BugCheckParameter1 + 68);
    v73 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 64) <= 1u )
    {
      if ( *v12 )
      {
        KeCaptureWaitChainHeadEx(BugCheckParameter1 + 40, (volatile signed __int32 **)&v72, &v73);
        --*v12;
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
        v13 = 1;
      }
      else
      {
        v13 = *(_DWORD *)(BugCheckParameter1 + 72);
        if ( !v13 )
          goto LABEL_17;
        v50 = *(_QWORD **)(BugCheckParameter1 + 32);
        *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
        v72 = v50;
        *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      }
LABEL_18:
      v14 = v13 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
      *(_DWORD *)(BugCheckParameter1 + 64) += v13 - 1;
      if ( v14 )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*v12 && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v15 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v73 )
      {
        *(_QWORD *)(BugCheckParameter1 + 48) = v73;
        *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
        goto LABEL_28;
      }
      _m_prefetchw(a3);
      v16 = *a3;
      if ( !*a3 )
      {
        if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
          goto LABEL_28;
        v16 = KxWaitForLockChainValid(a3);
      }
      *a3 = 0LL;
      v28 = a3[1];
      if ( (((unsigned __int8)v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v16 + 8), v28)) & 4) != 0 )
      {
        _InterlockedOr(v68, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v16 + 8) >> 5) & 0x7F], 0LL));
      }
LABEL_28:
      v17 = *((unsigned __int8 *)a3 + 16);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v17 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v14 = (v54 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v54;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v17);
      result = 3LL;
      v19 = 1;
      if ( v73 )
        v19 = 3;
      if ( !v72 )
        goto LABEL_32;
      v31 = KeGetCurrentIrql();
      v79 = v31;
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v31 <= 0xFu )
      {
        v42 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v31 == 2 )
          LODWORD(v43) = 4;
        else
          v43 = (-1LL << ((unsigned __int8)v31 + 1)) & 4;
        v42[5] |= v43;
      }
      v32 = KeGetCurrentPrcb();
      v33 = v19 & 4;
      Priority = v32->CurrentThread->Priority;
      v35 = (volatile signed __int32 *)v72;
      for ( i = Priority; ; Priority = i )
      {
        v71 = v35;
        v36 = v35;
        v78 = *(_QWORD **)v35;
        if ( v33 && *((_QWORD *)v35 + 6) )
        {
          KeAbPreWakeupHandle(*((_QWORD *)v35 + 6), Priority, 1LL);
          v36 = v71;
        }
        v70 = v36 + 6;
        KiAcquireKobjectLockSafe(v36 + 6);
        *((_DWORD *)v71 + 7) = 1;
        v37 = v70;
        v38 = (volatile signed __int32 *)*((_QWORD *)v70 + 1);
        if ( v38 != v70 + 2 )
          break;
LABEL_71:
        _InterlockedAnd(v37, 0xFFFFFF7F);
        v35 = (volatile signed __int32 *)v78;
        if ( v78 == v72 )
        {
          v45 = KiRemoveBoostThread(v32, v32->CurrentThread);
          if ( v15 )
          {
            v11 = (_PROCESSOR_NUMBER)2;
            if ( v45 > (char)v15 )
              v15 = v45;
          }
          if ( (v19 & 2) != 0 && v11 == 1 )
            v15 = 1;
          result = KiExitDispatcher((__int64)v32, 0, v11, v15, v79);
LABEL_32:
          v20 = v82;
          v21 = 65602;
          v9 = 0;
          goto LABEL_33;
        }
        v33 = v19 & 4;
      }
      while ( 1 )
      {
        v39 = (__int64)v38;
        v71 = v38;
        v40 = *(volatile signed __int32 **)v38;
        v77 = v40;
        v41 = *(volatile signed __int32 ***)(v39 + 8);
        if ( *((_QWORD *)v40 + 1) != v39 || *v41 != (volatile signed __int32 *)v39 )
LABEL_61:
          __fastfail(3u);
        *v41 = v40;
        *((_QWORD *)v40 + 1) = v41;
        v44 = *(_BYTE *)(v39 + 16);
        if ( v44 == 1 )
        {
          v14 = (unsigned __int8)KiTryUnwaitThread((__int64)v32, v39, *(unsigned __int16 *)(v39 + 18), 0LL) == 0;
          v37 = v70;
          if ( !v14 )
          {
            v14 = (*((_DWORD *)v70 + 1))-- == 1;
            if ( v14 )
              goto LABEL_71;
          }
        }
        else
        {
          if ( v44 == 2 )
          {
            *(_BYTE *)(v39 + 17) = 5;
            v69 = *(_QWORD *)(v39 + 24);
            v74 = (_QWORD *)(v69 + 8);
            *(_QWORD *)v39 = 0LL;
            v55 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
            {
              v56 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v55 == 2 )
                LODWORD(v57) = 4;
              else
                v57 = (-1LL << (v55 + 1)) & 4;
              v56[5] |= v57;
            }
            v75 = KeGetCurrentPrcb();
            CurrentThread = v75->CurrentThread;
            v76 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v61, v60, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v69);
            v62 = v74;
            v63 = v69;
            if ( (_QWORD *)*v62 != v62
              && *(_DWORD *)(v69 + 40) < *(_DWORD *)(v69 + 44)
              && (v76->Queue != (_DISPATCHER_HEADER *volatile)v69 || v76->WaitReason != 15) )
            {
              v64 = KiWakeQueueWaiter(v75, v69, v71);
              v63 = v69;
              if ( v64 )
              {
                *(_QWORD *)v71 = 0LL;
                goto LABEL_125;
              }
              v62 = v74;
            }
            v65 = *(_DWORD *)(v63 + 4);
            *(_DWORD *)(v63 + 4) = v65 + 1;
            v66 = *(_QWORD **)(v63 + 32);
            if ( *v66 != v63 + 24 )
              goto LABEL_61;
            v67 = v71;
            *(_QWORD *)v71 = v63 + 24;
            *((_QWORD *)v67 + 1) = v66;
            *v66 = v67;
            *(_QWORD *)(v63 + 32) = v67;
            if ( !v65 && (_QWORD *)*v62 != v62 )
            {
              KiWakeOtherQueueWaiters(v75, v63);
              v63 = v69;
            }
LABEL_125:
            _InterlockedAnd((volatile signed __int32 *)v63, 0xFFFFFF7F);
            v37 = v70;
            v14 = (*((_DWORD *)v70 + 1))-- == 1;
            if ( v14 )
              goto LABEL_71;
            goto LABEL_131;
          }
          if ( v44 == 4 )
          {
            *(_BYTE *)(v39 + 17) = 5;
            *((_DWORD *)v37 + 1) = 0;
            KiInsertQueueDpc(*(_QWORD *)(v39 + 24), 0);
          }
          else
          {
            KiTryUnwaitThread((__int64)v32, v39, 256LL, 0LL);
          }
          v37 = v70;
        }
LABEL_131:
        v38 = v77;
        if ( v77 == v37 + 2 )
          goto LABEL_71;
      }
    }
LABEL_17:
    v13 = 0;
    goto LABEL_18;
  }
  v21 = 65618;
  v20 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(a3);
    v29 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_53;
      v29 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    v46 = a3[1];
    if ( (((unsigned __int8)v46 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v29 + 8), v46)) & 4) != 0 )
    {
      _InterlockedOr(v68, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v29 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_53;
  }
  KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
LABEL_53:
  result = (unsigned int)KiIrqlFlags;
  v30 = *((unsigned __int8 *)a3 + 16);
  if ( (_DWORD)KiIrqlFlags )
  {
    v47 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v47 >= 2u )
    {
      v48 = KeGetCurrentPrcb();
      v49 = v48->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
      v14 = ((unsigned int)result & v49[5]) == 0;
      v49[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  __writecr8(v30);
LABEL_33:
  __incgsdword(0x8A70u);
  if ( v5 )
    return PerfLogExecutiveResourceRelease(v21, BugCheckParameter1, v9, v20);
  return result;
}
