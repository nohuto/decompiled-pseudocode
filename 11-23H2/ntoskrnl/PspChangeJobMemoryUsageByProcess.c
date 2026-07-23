/*
 * XREFs of PspChangeJobMemoryUsageByProcess @ 0x1406FADD0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1402DF3C0 (MiReturnFullProcessCharges.c)
 *     MmAssignProcessToJob @ 0x1406A0694 (MmAssignProcessToJob.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7A10 (MiChargeFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x140705BF8 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14036E0E8 (PspSendJobNotification.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406A3F44 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406A6B5C (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspScheduleEnforcementWorker @ 0x1407D8AA8 (PspScheduleEnforcementWorker.c)
 */

char __fastcall PspChangeJobMemoryUsageByProcess(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // bp
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int16 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 i; // rdi
  int v27; // [rsp+24h] [rbp-64h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  unsigned __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 1296) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  v29 = *(_QWORD *)(*(_QWORD *)(a3 + 1256) + 1296LL);
  v27 = 0;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  if ( v29 )
  {
    ExAcquirePushLockExclusiveEx(v29 + 1248, 0LL);
    a3 = v33;
    a4 = v34;
  }
  v8 = v29;
  if ( (a1 & 4) != 0 )
  {
    v9 = a4;
    a4 = 0LL;
    v34 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 1256);
  }
  v30 = v9;
  v10 = v9;
  if ( v9 != a4 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( v10 != v8 )
        ExAcquirePushLockExclusiveEx(v10 + 1248, 0LL);
      v12 = *(_QWORD *)(v10 + 1192);
      v13 = v12 + a2;
      if ( a2 <= 0 )
      {
        if ( v13 > v12 )
        {
          PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL);
          v24 = v10;
          if ( !v6 )
            v24 = v28;
          v6 = 0;
          v19 = v24;
          v28 = v24;
          goto LABEL_30;
        }
      }
      else if ( v13 < v12 )
      {
        PspUnlockJobMemoryLimitsExclusive(v10, v8, 0LL);
        v23 = v10;
        if ( !v6 )
          v23 = v28;
        v6 = 0;
        v19 = v23;
        v28 = v23;
        goto LABEL_30;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      v16 = v13 + *(_QWORD *)(v10 + 1552);
      v31 = v16;
      if ( (v15 & 0x200000) != 0 && v16 > *(_QWORD *)(v10 + 688) )
        v14 = a2 > 0;
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 680) && a2 > 0 || v14 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v10 + 1192) = v13;
LABEL_19:
        if ( *(_QWORD *)(v10 + 1200) )
        {
          v22 = 512;
          if ( a2 <= 0 )
            v22 = 0x8000;
          v27 |= PspGetJobMemoryUsageNotificationViolations(v10, v13, v16, v22);
        }
      }
LABEL_20:
      if ( a2 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 704) )
          *(_QWORD *)(v10 + 704) = v13;
        v11 = *(_QWORD *)(v33 + 1608);
      }
      if ( v10 != v8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 1248));
        KeAbPostRelease(v10 + 1248);
      }
      if ( v11 )
      {
        if ( v11 > *(_QWORD *)(v10 + 696) )
        {
          _m_prefetchw((const void *)(v10 + 696));
          v17 = *(_QWORD *)(v10 + 696);
          if ( v11 > v17 )
          {
            do
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 696), v11, v17);
            }
            while ( v17 != v18 && v11 > v17 );
          }
        }
      }
      v19 = v28;
LABEL_30:
      v10 = *(_QWORD *)(v10 + 1288);
      if ( v10 == v34 )
      {
        if ( v6 )
        {
          if ( v27 )
            PspScheduleEnforcementWorker(v8);
        }
        else
        {
          for ( i = v30; i != v19; i = *(_QWORD *)(i + 1288) )
          {
            if ( i != v8 )
              ExAcquirePushLockExclusiveEx(i + 1248, 0LL);
            *(_QWORD *)(i + 1192) -= a2;
            PspUnlockJobMemoryLimitsExclusive(i, v8, 0LL);
          }
        }
        goto LABEL_34;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 1192) = v13;
    }
    else if ( v6 )
    {
      v25 = v10;
      v6 = 0;
      goto LABEL_68;
    }
    v25 = v28;
LABEL_68:
    v28 = v25;
    if ( *(_QWORD *)(v10 + 552) && (*(_DWORD *)(v10 + 1088) & 0x200) != 0 && (*(_DWORD *)(v33 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v33 + 1120), 0x20u);
      PspSendJobNotification(v10, 10LL, *(_QWORD *)(v33 + 1088), 1);
      v16 = v31;
    }
    if ( !v6 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_34:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 1248));
    KeAbPostRelease(v8 + 1248);
  }
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
