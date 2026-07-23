/*
 * XREFs of KiTimerWaitTest @ 0x140252FB0
 * Callers:
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KiProcessExpiredTimerList @ 0x140252C10 (KiProcessExpiredTimerList.c)
 *     KeSetTimerEx @ 0x140253650 (KeSetTimerEx.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14039A7C4 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140238DA0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertTimerTable @ 0x1402538F0 (KiInsertTimerTable.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     PsTimerResolutionActive @ 0x1402552C0 (PsTimerResolutionActive.c)
 *     KiWakeQueueWaiter @ 0x1402B8A10 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rax
  unsigned __int8 v7; // r15
  ULONG_PTR v8; // rsi
  _QWORD **v9; // rbx
  _QWORD *v10; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  __int64 *v14; // r8
  __int64 *v15; // rdx
  __int64 v16; // rbp
  char v17; // al
  __int64 v18; // r8
  _QWORD *v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // rcx
  char v23; // al
  bool v24; // zf
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v26; // r8
  __int64 v27; // rcx
  char v28; // al
  int v29; // r9d
  __int64 *v30; // rdx
  unsigned __int8 v31; // al
  __int64 *v32; // rcx
  __int16 v33; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v35; // r9
  _DWORD *SchedulerAssist; // r9
  __int64 v37; // rdx
  unsigned __int8 v38; // cl
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  char v41; // al
  int v42; // r9d
  __int64 *v43; // r8
  _DWORD *v44; // r9
  __int64 v45; // rdx
  unsigned __int8 v46; // al
  __int64 v47; // r9
  unsigned int v48; // eax
  unsigned int v49; // ecx
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v51; // [rsp+30h] [rbp-68h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  _KTHREAD *v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+48h] [rbp-50h]
  __int64 v55; // [rsp+A8h] [rbp+10h]
  __int64 v56; // [rsp+A8h] [rbp+10h]

  v4 = *(_BYTE *)a2 & 0x7F;
  v5 = *(int *)(a2 + 60);
  v7 = -1;
  v8 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  if ( (_DWORD)v5 )
  {
    v12 = -10000 * v5;
    v7 = 0;
    if ( *(_BYTE *)(a1 + 13242) )
    {
      v48 = *(_DWORD *)(a1 + 33124) + 1;
      *(_DWORD *)(a1 + 33124) = v48;
      if ( v48 >= 0xBB8 )
      {
        v49 = *(_DWORD *)(a1 + 33128);
        *(_DWORD *)(a1 + 33124) = 0;
        if ( v49 < 0x5F5E100 )
          *(_DWORD *)(a1 + 33128) = KeTimeIncrement + v49;
      }
      v12 -= *(unsigned int *)(a1 + 33128);
    }
    if ( v12 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v13 = 0LL;
    v54 = *(_DWORD *)a2;
    if ( BYTE1(*(_DWORD *)a2) >= 4u )
      v13 = (unsigned __int64)((unsigned __int8)BYTE1(*(_DWORD *)a2) & 0xFC) << 16;
    if ( KiGlobalTimerResolutionRequests )
    {
      *(_WORD *)(a2 + 58) = 0;
    }
    else
    {
      v14 = *(__int64 **)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v15 = (__int64 *)(a2 + 8);
      if ( v14 != v15 )
      {
        while ( 1 )
        {
          v31 = *((_BYTE *)v14 + 16);
          v32 = v14;
          v14 = (__int64 *)*v14;
          if ( v31 <= 1u )
          {
            if ( (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v32[3] + 544), v15, v14) )
              break;
          }
          if ( v14 == v15 )
            goto LABEL_21;
        }
        *(_WORD *)(a2 + 58) = v33;
      }
    }
LABEL_21:
    BYTE1(v54) &= ~1u;
    HIBYTE(v54) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v12;
      BYTE2(v54) = (v13 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v54;
    }
    while ( !(unsigned __int8)KiInsertTimerTable(a1, a2, v8, BYTE2(v54), 0LL) );
  }
  *(_DWORD *)(a2 + 4) = 1;
  v9 = (_QWORD **)(a2 + 8);
  if ( v4 == 8 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
    {
LABEL_4:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v9 = v9;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v16 = (__int64)v10;
      v10 = (_QWORD *)*v10;
      v17 = *(_BYTE *)(v16 + 16);
      switch ( v17 )
      {
        case 1:
          v18 = *(unsigned __int16 *)(v16 + 18);
          break;
        case 2:
          *(_BYTE *)(v16 + 17) = 5;
          v55 = *(_QWORD *)(v16 + 24);
          *(_QWORD *)v16 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v37) = 4;
            else
              v37 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v37;
          }
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(v35, v16, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v55);
          v26 = (_QWORD *)(v55 + 8);
          v27 = v55;
          if ( (_QWORD *)*v26 == v26
            || *(_DWORD *)(v55 + 40) >= *(_DWORD *)(v55 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v55 && CurrentThread->WaitReason == 15 )
          {
LABEL_51:
            v29 = *(_DWORD *)(v27 + 4);
            *(_DWORD *)(v27 + 4) = v29 + 1;
            v30 = *(__int64 **)(v27 + 32);
            if ( *v30 != v27 + 24 )
              goto LABEL_32;
            *(_QWORD *)v16 = v27 + 24;
            *(_QWORD *)(v16 + 8) = v30;
            *v30 = v16;
            *(_QWORD *)(v27 + 32) = v16;
            if ( !v29 && (_QWORD *)*v26 != v26 )
            {
              KiWakeOtherQueueWaiters(CurrentPrcb, v27);
              v27 = v55;
            }
          }
          else
          {
            v28 = KiWakeQueueWaiter(CurrentPrcb, v55, v16);
            v27 = v55;
            if ( !v28 )
            {
              v26 = (_QWORD *)(v55 + 8);
              goto LABEL_51;
            }
            *(_QWORD *)v16 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          goto LABEL_27;
        case 4:
          *(_BYTE *)(v16 + 17) = 5;
          *(_DWORD *)(a2 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v16 + 24), 0);
          goto LABEL_27;
        default:
          v18 = 256LL;
          break;
      }
      KiTryUnwaitThread(a1, v16, v18, 0LL);
LABEL_27:
      if ( v10 == v9 )
        goto LABEL_4;
    }
  }
  v19 = *v9;
  while ( v19 != v9 )
  {
    v20 = (_QWORD *)*v19;
    v21 = (__int64)v19;
    v19 = v20;
    v22 = *(_QWORD **)(v21 + 8);
    if ( v20[1] != v21 || *v22 != v21 )
LABEL_32:
      __fastfail(3u);
    *v22 = v20;
    v20[1] = v22;
    v23 = *(_BYTE *)(v21 + 16);
    switch ( v23 )
    {
      case 1:
        if ( (unsigned __int8)KiTryUnwaitThread(a1, v21, *(unsigned __int16 *)(v21 + 18), 0LL) )
        {
          v24 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v24 )
            goto LABEL_5;
        }
        break;
      case 2:
        *(_BYTE *)(v21 + 17) = 5;
        v56 = *(_QWORD *)(v21 + 24);
        *(_QWORD *)v21 = 0LL;
        v38 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
        {
          v44 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v38 == 2 )
            LODWORD(v45) = 4;
          else
            v45 = (-1LL << (v38 + 1)) & 4;
          v44[5] |= v45;
        }
        v51 = KeGetCurrentPrcb();
        v53 = v51->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v46 = KeIsThreadRunning(v51->CurrentThread);
          EtwTraceEnqueueWork(v47, v21, v46);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v56);
        v39 = (_QWORD *)(v56 + 8);
        v40 = v56;
        if ( (_QWORD *)*v39 == v39
          || *(_DWORD *)(v56 + 40) >= *(_DWORD *)(v56 + 44)
          || v53->Queue == (_DISPATCHER_HEADER *volatile)v56 && v53->WaitReason == 15 )
        {
LABEL_75:
          v42 = *(_DWORD *)(v40 + 4);
          *(_DWORD *)(v40 + 4) = v42 + 1;
          v43 = *(__int64 **)(v40 + 32);
          if ( *v43 != v40 + 24 )
            goto LABEL_32;
          *(_QWORD *)v21 = v40 + 24;
          *(_QWORD *)(v21 + 8) = v43;
          *v43 = v21;
          *(_QWORD *)(v40 + 32) = v21;
          if ( !v42 && (_QWORD *)*v39 != v39 )
          {
            KiWakeOtherQueueWaiters(v51, v40);
            v40 = v56;
          }
        }
        else
        {
          v41 = KiWakeQueueWaiter(v51, v56, v21);
          v40 = v56;
          if ( !v41 )
          {
            v39 = (_QWORD *)(v56 + 8);
            goto LABEL_75;
          }
          *(_QWORD *)v21 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v40, 0xFFFFFF7F);
        v24 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v24 )
          goto LABEL_5;
        break;
      case 4:
        *(_BYTE *)(v21 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v21 + 24), 0);
        break;
      default:
        KiTryUnwaitThread(a1, v21, 256LL, 0LL);
        break;
    }
  }
LABEL_5:
  if ( v8 )
  {
    if ( !a3
      || KiSerializeTimerExpiration && *(_WORD *)(v8 + 2) >= 0x800u
      || *(_BYTE *)v8 == 26 && *(_BYTE *)(a1 + 13240) )
    {
      KiInsertQueueDpc(v8, v7);
      return 0LL;
    }
    *(_QWORD *)(a1 + 13152) = v8;
    if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v8 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v7 << 24) | 0x80));
  return v8;
}
