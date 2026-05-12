/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x1C00050F0
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueScatterGather @ 0x1C0004120 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 * Callees:
 *     RaidLogGetParm4 @ 0x1C00057C0 (RaidLogGetParm4.c)
 *     StorIsIoGatewayPaused @ 0x1C0006E4C (StorIsIoGatewayPaused.c)
 *     RaidAdapterRequestComplete @ 0x1C0010E50 (RaidAdapterRequestComplete.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C0018A88 (RaidUpdateZoneIoMetadata.c)
 *     RaAllocateConcurrentChannelToken @ 0x1C001D548 (RaAllocateConcurrentChannelToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C003E538 (RaidUpdateZoneIoSubmission.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 ConcurrentChannelToken; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // r8
  int v10; // ecx
  bool v11; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD); // rax
  char v17; // bl
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  char v21; // r14
  int v23; // r10d
  char *v24; // r9
  unsigned int v25; // r11d
  unsigned int i; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rbx
  __int64 v31; // r11
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 Parm4; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  char v41; // al
  char v42; // al
  __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  int v45; // r8d
  int v46; // eax
  __int64 v47; // r14
  LARGE_INTEGER v48; // rax
  LARGE_INTEGER v49; // rax
  __int64 v50; // [rsp+20h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v53; // [rsp+98h] [rbp+10h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+18h]
  __int64 v55; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  *(_QWORD *)(a2 + 216) = a1;
  v54 = 0LL;
  v4 = *(_QWORD *)(a2 + 224);
  v5 = *(_QWORD *)(a2 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  ConcurrentChannelToken = 0LL;
  v55 = 0LL;
  v8 = 0LL;
  v50 = 0LL;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v9 = *(unsigned int *)(v5 + 20);
    v10 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v9 = *(unsigned __int8 *)(v5 + 2);
    v10 = *(_DWORD *)(v5 + 12);
  }
  if ( v4 )
  {
    if ( *(int *)(v4 + 684) > 0 )
    {
      if ( (_DWORD)v9 == 32 || (v46 = 1, (_DWORD)v9 == 19) )
        v46 = 0;
      if ( v46 )
        goto LABEL_90;
    }
    else if ( *(_BYTE *)(v4 + 692) && (v10 & 0x10) == 0 || *(_BYTE *)(v4 + 693) && (v10 & 0x80000) == 0 )
    {
      goto LABEL_90;
    }
  }
  else if ( (unsigned __int8)StorIsIoGatewayPaused(*(_QWORD *)(a1 + 832), v5, v9)
         && (unsigned int)(v45 - 36) > 1
         && (*(_BYTE *)(a2 + 17) & 8) == 0 )
  {
LABEL_90:
    *(_BYTE *)(v5 + 3) = 5;
    RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
    RaidAdapterRequestComplete(a1, a2, 1LL);
    return 0LL;
  }
  if ( StorEtwLoggingEnabled )
  {
    v11 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_11;
    }
    if ( !UseQPCTime )
      goto LABEL_118;
    v11 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v11 )
  {
LABEL_118:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_11;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_11:
  v11 = FUAEnabled == 0;
  v13 = *(_QWORD *)(a2 + 168);
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( v11 && v13 )
  {
    if ( *(_BYTE *)(v13 + 2) != 40 )
    {
      v23 = *(unsigned __int8 *)(v13 + 2);
      v24 = (char *)(v13 + 72);
      goto LABEL_71;
    }
    v23 = *(_DWORD *)(v13 + 20);
    v24 = 0LL;
    if ( !v23 )
    {
      v25 = *(_DWORD *)(v13 + 56);
      for ( i = 0; i < v25; ++i )
      {
        v27 = *(unsigned int *)(v13 + 4LL * i + 120);
        if ( (unsigned int)v27 >= 0x80 )
        {
          v44 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v27 < (unsigned int)v44 )
          {
            v47 = v27 + v13;
            if ( *(_DWORD *)(v27 + v13) == 64 )
            {
              if ( v27 + 40 <= v44 )
              {
LABEL_99:
                if ( *(_BYTE *)(v47 + 10) )
                  v24 = (char *)(v47 + 24);
                break;
              }
            }
            else if ( *(_DWORD *)(v27 + v13) == 65 )
            {
              if ( v27 + 56 <= v44 )
                goto LABEL_99;
            }
            else if ( *(_DWORD *)(v27 + v13) == 66 && v27 + 40 <= v44 )
            {
              if ( *(_DWORD *)(v47 + 12) )
                v24 = (char *)(v47 + 32);
              break;
            }
          }
        }
      }
    }
LABEL_71:
    if ( v24 )
    {
      if ( !v23 )
      {
        v41 = *v24;
        if ( *v24 == 42 || v41 == -86 || v41 == -118 )
        {
          v42 = v24[1];
          if ( (v42 & 8) != 0 )
            v24[1] = v42 & 0xF7;
        }
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 4242) )
  {
LABEL_25:
    if ( (qword_1C00793A8 & 4) == 0 )
      goto LABEL_26;
    v36 = *(_QWORD *)(a2 + 224);
    if ( v36 )
      v8 = (unsigned __int8)BYTE2(*(_DWORD *)(v36 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v36 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v36 + 96))) << 8);
    Parm4 = RaidLogGetParm4(a2, v13);
    v38 = *(_QWORD *)(a2 + 168);
    v50 = Parm4;
    v39 = *(_QWORD *)(a2 + 160);
    v55 = v38;
    if ( v39 )
      goto LABEL_59;
    if ( v38 )
    {
      if ( *(_BYTE *)(v38 + 2) != 40 )
      {
        v39 = *(_QWORD *)(v38 + 48);
LABEL_59:
        v54 = v39;
        goto LABEL_26;
      }
      v54 = *(_QWORD *)(v38 + 80);
    }
LABEL_26:
    v18 = *(_QWORD *)(a2 + 224);
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 128) & 2) != 0 )
      {
        v53 = 0;
        if ( (unsigned __int8)IsZonedWriteRequest(v18, 0LL, a2, &v53) )
        {
          RtlInterlockedClearBitRun(v18 + 3312, v53, 1LL);
          RaidUpdateZoneIoSubmission(v18 + 656, 0LL, a2);
        }
      }
    }
    v19 = *(_QWORD *)(a2 + 160);
    if ( v19 )
      *(_BYTE *)(v19 + 141) = -86;
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
    v20 = MEMORY[0xFFFFF78000000014];
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 568) + 16LL))(
            *(_QWORD *)(a1 + 576) + 16LL,
            *(_QWORD *)(a2 + 168));
    if ( StorEtwLoggingEnabled && ((byte_1C00799E1 & 1) != 0 || (byte_1C00799E3 & 2) != 0) )
    {
      if ( UseQPCTime )
        v49 = KeQueryPerformanceCounter(0LL);
      else
        v49.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 712) = v49;
    }
    if ( *(_BYTE *)(a1 + 4242) )
    {
      if ( *(int *)(a1 + 4536) <= 1 )
      {
        if ( *(_DWORD *)(a1 + 744) )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          RaidAdapterReleaseInterruptLock(a1, LOBYTE(LockHandle.LockQueue.Next));
      }
      else if ( ConcurrentChannelToken )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4544)
                        + ((unsigned __int64)*(unsigned int *)(ConcurrentChannelToken + 16) << 6)),
          (PSLIST_ENTRY)ConcurrentChannelToken);
      }
    }
    if ( (qword_1C00793A8 & 4) != 0 && *(_DWORD *)(a1 + 4804) && *(_QWORD *)(a1 + 4808) )
    {
      v40 = *(_QWORD *)(a1 + 4808)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4800)) % *(_DWORD *)(a1 + 4804));
      *(_DWORD *)v40 = 0;
      if ( v20 )
        *(_QWORD *)(v40 + 40) = v20;
      else
        *(_QWORD *)(v40 + 40) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v40 + 8) = v54;
      *(_QWORD *)(v40 + 24) = v55;
      *(_QWORD *)(v40 + 32) = v50;
      *(_QWORD *)(v40 + 16) = v8;
    }
    if ( !v21 )
      return (unsigned int)-1073741823;
    return v2;
  }
  if ( (qword_1C00793A8 & 1) != 0 )
  {
    v28 = RaidLogGetParm4(a2, v13);
    v29 = *(_QWORD *)(a2 + 160);
    v30 = v28;
    v31 = *(_QWORD *)(a2 + 168);
    if ( !v29 && v31 )
    {
      if ( *(_BYTE *)(v31 + 2) == 40 )
        v29 = *(_QWORD *)(v31 + 80);
      else
        v29 = *(_QWORD *)(v31 + 48);
    }
    v32 = *(_QWORD *)(a2 + 224);
    if ( v32 )
      v33 = (unsigned __int8)BYTE2(*(_DWORD *)(v32 + 96)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v32 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v32 + 96))) << 8);
    else
      v33 = 0LL;
    v34 = *(_QWORD *)(a2 + 216);
    if ( v34 && *(_DWORD *)(v34 + 4804) && *(_QWORD *)(v34 + 4808) )
    {
      v35 = *(_QWORD *)(v34 + 4808)
          + 48LL
          * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v34 + 4800)) % *(_DWORD *)(v34 + 4804));
      *(_DWORD *)v35 = 36;
      *(_QWORD *)(v35 + 40) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v35 + 8) = v29;
      *(_QWORD *)(v35 + 16) = v33;
      *(_QWORD *)(v35 + 24) = v31;
      *(_QWORD *)(v35 + 32) = v30;
    }
  }
  v14 = *(_QWORD *)(a2 + 160);
  if ( v14 )
    *(_BYTE *)(v14 + 141) = -82;
  v15 = *(_QWORD *)(a2 + 216);
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v15 + 568) + 128LL);
  if ( v16 )
    v17 = v16(*(_QWORD *)(v15 + 576) + 16LL, *(_QWORD *)(a2 + 168));
  else
    v17 = 1;
  if ( StorEtwLoggingEnabled && ((byte_1C00799E1 & 1) != 0 || (byte_1C00799E3 & 2) != 0) )
  {
    if ( UseQPCTime )
      v48 = KeQueryPerformanceCounter(0LL);
    else
      v48.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 704) = v48;
  }
  if ( v17 )
  {
    if ( *(int *)(a1 + 4536) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 744) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 736), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
    }
    else if ( *(_DWORD *)(a1 + 4536) < KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      ConcurrentChannelToken = RaAllocateConcurrentChannelToken(a1);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(ConcurrentChannelToken + 20);
    }
    else
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
    goto LABEL_25;
  }
  v43 = *(_QWORD *)(a2 + 224);
  if ( v43 )
  {
    if ( (*(_BYTE *)(v43 + 128) & 2) != 0 )
    {
      v52 = 0;
      if ( (unsigned __int8)IsZonedWriteRequest(v43, 0LL, a2, &v52) )
      {
        RtlInterlockedClearBitRun(v43 + 3312, v52, 1LL);
        RaidUpdateZoneIoSubmission(v43 + 656, 0LL, a2);
      }
    }
  }
  return 0LL;
}
