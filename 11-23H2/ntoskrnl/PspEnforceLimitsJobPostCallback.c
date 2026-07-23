/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x1406A3680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PspSendJobNotification @ 0x14036E0E8 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406A3C40 (PspLockJobShared.c)
 *     PspLockJobExclusive @ 0x1406A3DF8 (PspLockJobExclusive.c)
 *     PspRateControlLimitFlag @ 0x1406A3E20 (PspRateControlLimitFlag.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1406A3E44 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x1406A3EE4 (PspAddAccountingValues.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406A3F44 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x1406A3F98 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1406A3FC4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspSendReliableJobNotification @ 0x140779B0C (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1407DD604 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1409B2AF4 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v4; // edi
  __int64 v6; // rax
  __int128 v7; // xmm0
  struct _LIST_ENTRY *Flink; // r15
  LIST_ENTRY WaitListHead; // xmm1
  struct _LIST_ENTRY *v10; // rax
  __int128 v11; // xmm0
  struct _LIST_ENTRY *v12; // rax
  __int128 v13; // xmm1
  LIST_ENTRY v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rcx
  char *v19; // r9
  char *v20; // r10
  _DWORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // rcx
  char *v34; // r8
  char *v35; // r9
  _DWORD *v36; // rdx
  _DWORD *v37; // rdx
  int v38; // ecx
  struct _KPROCESS *v39; // rcx
  int v40; // [rsp+20h] [rbp-E0h]
  struct _LIST_ENTRY *v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+40h] [rbp-C0h]
  struct _LIST_ENTRY *v45; // [rsp+48h] [rbp-B8h]
  struct _LIST_ENTRY *v46; // [rsp+50h] [rbp-B0h]
  _QWORD v47[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h]
  LIST_ENTRY v49; // [rsp+80h] [rbp-80h]
  __int128 v50; // [rsp+90h] [rbp-70h]
  __int128 v51; // [rsp+A0h] [rbp-60h]
  LIST_ENTRY v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *v54; // [rsp+D0h] [rbp-30h]
  _OWORD v55[4]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v43 = 0LL;
  v42 = 0LL;
  PspLockJobShared(Event, CurrentThread);
  v6 = *(_QWORD *)&Event[50].Header.Lock;
  if ( v6 )
  {
    v28 = *(_OWORD *)(v6 + 24);
    v55[0] = *(_OWORD *)(v6 + 8);
    v29 = *(_OWORD *)(v6 + 40);
    v55[1] = v28;
    v30 = *(_OWORD *)(v6 + 56);
    v55[2] = v29;
    v55[3] = v30;
  }
  else
  {
    memset(v55, 0, sizeof(v55));
  }
  v7 = *(_OWORD *)&Event[55].Header.WaitListHead.Blink;
  Flink = Event[25].Header.WaitListHead.Flink;
  WaitListHead = Event[56].Header.WaitListHead;
  Blink = Event[25].Header.WaitListHead.Blink;
  v10 = Event[6].Header.WaitListHead.Blink;
  v48 = v7;
  v11 = *(_OWORD *)&Event[57].Header.Lock;
  v45 = v10;
  v12 = Event[7].Header.WaitListHead.Blink;
  v49 = WaitListHead;
  v13 = *(_OWORD *)&Event[57].Header.WaitListHead.Blink;
  v46 = v12;
  LODWORD(v12) = HIDWORD(Event[22].Header.WaitListHead.Blink);
  v50 = v11;
  v14 = Event[58].Header.WaitListHead;
  v40 = (int)v12;
  LODWORD(v12) = Event[10].Header.WaitListHead.Blink;
  v51 = v13;
  v52 = v14;
  v54 = Event[59].Header.WaitListHead.Blink;
  v53 = *(_OWORD *)&Event[59].Header.Lock;
  if ( ((unsigned __int8)v12 & 4) != 0 )
    v41 = Event[9].Header.WaitListHead.Blink;
  else
    v41 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, &v43, &v42);
  PspUnlockJob(v15, CurrentThread);
  if ( *(_QWORD *)&v55[0] && (unsigned __int64)Flink + (unsigned __int64)v52.Flink > *(_QWORD *)&v55[0] )
    v4 = 0x10000;
  v16 = *((_QWORD *)&v55[0] + 1);
  if ( *((_QWORD *)&v55[0] + 1) && (unsigned __int64)v52.Blink + (unsigned __int64)Blink > *((_QWORD *)&v55[0] + 1) )
    v4 |= 0x20000u;
  v17 = *(_QWORD *)&v55[1];
  if ( *(_QWORD *)&v55[1] && (unsigned __int64)v45 + *((_QWORD *)&v48 + 1) > *(_QWORD *)&v55[1] )
    v4 |= 4u;
  if ( *(_OWORD *)((char *)&v55[1] + 8) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread);
    v4 |= PspGetJobMemoryUsageNotificationViolations(
            Event,
            Event[49].Header.WaitListHead.Blink,
            (char *)Event[49].Header.WaitListHead.Blink + (unsigned __int64)Event[64].Header.WaitListHead.Blink,
            33280LL);
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
    v17 = *(_QWORD *)&v55[1];
    v16 = *((_QWORD *)&v55[0] + 1);
  }
  v18 = 0LL;
  v19 = (char *)&v55[2] - a2 + 8;
  v20 = (char *)v55 - a2 + 8;
  v21 = (_DWORD *)(a2 + 44);
  do
  {
    v22 = *(unsigned int *)((char *)v21 + (_QWORD)v19 - 44);
    if ( (_DWORD)v22 && *(v21 - 3) == *(_DWORD *)((char *)v21 + (_QWORD)v20) && *v21 >= (unsigned int)v22 )
      v4 |= PspRateControlLimitFlag(v18, v21, v22, v19);
    v18 = (unsigned int)(v18 + 1);
    ++v21;
  }
  while ( (int)v18 < 3 );
  if ( v4 )
  {
    PspLockJobExclusive(Event, CurrentThread);
    v31 = *(_QWORD *)&Event[50].Header.Lock;
    if ( v31 )
    {
      *(_DWORD *)(v31 + 4) |= v4;
      v32 = (char *)(*(_QWORD *)&Event[50].Header.Lock + 72LL);
      if ( (v4 & 0x10000) != 0 )
        *(_QWORD *)v32 = *(_QWORD *)&v55[0];
      if ( (v4 & 0x20000) != 0 )
        *((_QWORD *)v32 + 1) = v16;
      if ( (v4 & 4) != 0 )
        *((_QWORD *)v32 + 2) = v17;
      if ( (v4 & 0x200) != 0 )
        *((_QWORD *)v32 + 4) = *(_QWORD *)&v55[2];
      if ( (v4 & 0x8000) != 0 )
        *((_QWORD *)v32 + 3) = *((_QWORD *)&v55[1] + 1);
      v33 = 0LL;
      v34 = (char *)((char *)&v55[2] + 8 - v32);
      v35 = (char *)((char *)v55 - v32);
      v36 = v32 + 52;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v33, v36, v34, v35) & v4) != 0 )
        {
          *(v37 - 3) = *(_DWORD *)((char *)v37 + (_QWORD)v34 - 52);
          *v37 = *(_DWORD *)&v35[(_QWORD)v37];
        }
        v33 = (unsigned int)(v38 + 1);
        v36 = v37 + 1;
      }
      while ( (int)v33 < 3 );
    }
    if ( *(_QWORD *)&Event[23].Header.Lock
      && ((__int64)Event[45].Header.WaitListHead.Flink & 0x800) != 0
      && (Event[64].Header.LockNV & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJob(Event, CurrentThread);
  }
  v23 = *(_QWORD *)(a2 + 16);
  if ( v23 )
  {
    if ( (*(_DWORD *)(v23 + 1120) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v23 + 1120), 0xFFFFFFDF);
      v39 = *(struct _KPROCESS **)(a2 + 16);
      v47[0] = *(_QWORD *)(a2 + 8);
      v47[1] = 2LL;
      v47[2] = v39[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v39, v47, 0xEu, 0xC0000044);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v41 && (struct _LIST_ENTRY *)((char *)v46 + *((_QWORD *)&v48 + 1)) > v41 )
  {
    if ( v40 )
    {
      if ( v40 != 1 )
        goto LABEL_16;
      PspLockJobShared(Event, CurrentThread);
      if ( !*(_QWORD *)&Event[23].Header.Lock || ((__int64)Event[45].Header.WaitListHead.Flink & 2) == 0 )
      {
        PspUnlockJob(Event, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy(Event);
        goto LABEL_16;
      }
      if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
      {
        LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
        Event[9].Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
        goto LABEL_16;
      PspLockJobExclusive(Event, CurrentThread);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[23].Header.Lock
        && ((__int64)Event[45].Header.WaitListHead.Flink & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
    }
    PspUnlockJob(Event, CurrentThread);
  }
LABEL_16:
  v24 = *(_QWORD *)(a2 + 24) + v42;
  *(_QWORD *)(a2 + 24) = v24;
  if ( !*(_BYTE *)(a2 + 56) )
  {
    if ( v24 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v43 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event);
    }
  }
  v25 = Event[53].Header.WaitListHead.Blink;
  if ( v25 )
  {
    PspLockJobExclusive(v25, CurrentThread);
    PspLockJobExclusive(Event, CurrentThread);
    PspAddAccountingValues(&Event[53].Header.WaitListHead.Blink[83].Blink, &Event[55].Header.WaitListHead.Blink);
    memset(&Event[55].Header.WaitListHead.Blink, 0, 0x68uLL);
    PspUnlockJob(Event, CurrentThread);
    v26 = Event[53].Header.WaitListHead.Blink;
  }
  else
  {
    PspLockJobExclusive(Event, CurrentThread);
    memset(&Event[55].Header.WaitListHead.Blink, 0, 0x68uLL);
    v26 = (struct _LIST_ENTRY *)Event;
  }
  PspUnlockJob(v26, CurrentThread);
  return 0LL;
}
