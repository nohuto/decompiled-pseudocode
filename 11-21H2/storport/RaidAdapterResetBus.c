/*
 * XREFs of RaidAdapterResetBus @ 0x1C0036654
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0013A80 (RaidUnitPendingDpcRoutine.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C0038BF4 (RaidAdapterStorageResetBusIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C005256C (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0054220 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0054BE4 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C005532C (RaidUnitRequestTimeout.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C000BBF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000BC24 (RaidAdapterAcquireStartIoLock.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     RaidPauseAdapterQueue @ 0x1C0014BF8 (RaidPauseAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0037D08 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     StorGetOutstandingIoCount @ 0x1C0059304 (StorGetOutstandingIoCount.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  int v5; // r15d
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r12
  struct _SLIST_ENTRY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int OutstandingIoCount; // r14d
  ULONGLONG UnbiasedInterruptTime; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  unsigned int v17; // r15d
  ULONGLONG v18; // r12
  int v19; // r14d
  unsigned int v20; // edi
  PSLIST_ENTRY v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // r9
  __int64 v24; // rcx
  KIRQL v25; // di
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh]
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh]
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  ULONGLONG v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+68h] [rbp-98h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  int *v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  char *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  unsigned int *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  ULONGLONG *v51; // [rsp+F0h] [rbp-10h]
  int v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FCh] [rbp-4h]
  int *v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]
  int *v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+11Ch] [rbp+1Ch]

  v2 = a2;
  memset(&v36, 0, sizeof(v36));
  SListHead = 0LL;
  if ( a2 >= *(_BYTE *)(a1 + 416) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4536) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4544)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4536) );
  }
  RaidAdapterAcquireStartIoLock(a1, &v36);
  *(_DWORD *)(a1 + 4960) = 0;
  OutstandingIoCount = StorGetOutstandingIoCount(a1, v10, v11);
  v29 = OutstandingIoCount;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (qword_1C00793A8 & 0x400) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 336),
      11,
      *(_QWORD *)(a1 + 336),
      *(unsigned int *)(*(_QWORD *)(a1 + 336) + 56LL),
      v2,
      0LL,
      0LL);
  v14 = *(_QWORD *)(a1 + 568);
  v15 = *(_QWORD *)(a1 + 576);
  *(_BYTE *)(a1 + 584) |= 2u;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v14 + 40))(v15 + 16, (unsigned int)v2);
  *(_BYTE *)(a1 + 584) &= ~2u;
  v17 = v16 == 0 ? 0xC0000001 : 0;
  v18 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
  v33 = *(_DWORD *)(a1 + 4960);
  if ( *(int *)(a1 + 4536) > 1 )
  {
    v19 = 0;
    v20 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v21 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v21 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4544) + ((unsigned __int64)(HIDWORD(v21[1].Next) % v20) << 6)),
          v21);
        ++v19;
      }
    }
    while ( v19 < *(_DWORD *)(a1 + 4536) );
    OutstandingIoCount = v29;
  }
  RaidAdapterReleaseStartIoLock(a1, &v36);
  v22 = *(_DWORD *)(a1 + 560);
  if ( v22 )
  {
    v23 = v22 / 0xF4240 + 1;
    if ( v22 == 1000000 * (v22 / 0xF4240) )
      v23 = v22 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4008, a1 + 4072, v23);
  }
  else
  {
    v25 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v25);
  }
  if ( (unsigned int)dword_1C0079058 > 5 )
  {
    if ( tlgKeywordOn(v24, 0x400000000000LL) )
    {
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v56 = 0;
      v59 = 0;
      v39 = a1 + 4936;
      v30 = *(_DWORD *)(a1 + 56);
      v42 = &v30;
      v45 = &v28;
      v48 = &v31;
      v51 = &v35;
      v54 = &v32;
      v34 = v33;
      v57 = &v34;
      v40 = 16;
      v43 = 4;
      v28 = v2;
      v46 = 1;
      v31 = v17;
      v49 = 4;
      v35 = v18;
      v52 = 8;
      v32 = OutstandingIoCount;
      v55 = 4;
      v58 = 4;
      tlgWriteTransfer_EtwWriteTransfer(4LL, (unsigned __int8 *)dword_1C006C802, v26, v27, 9u, &v38);
    }
  }
  *(_DWORD *)(a1 + 284) = 0;
  return v17;
}
