/*
 * XREFs of RaidAdapterResetBus @ 0x1C00379D0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000EA30 (RaidUnitPendingDpcRoutine.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C003A1F8 (RaidAdapterStorageResetBusIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C005ED7C (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0060BF0 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0061604 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C00620B8 (RaidUnitRequestTimeout.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007568 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000759C (RaidAdapterAcquireStartIoLock.c)
 *     StorGetOutstandingIoCount @ 0x1C000F488 (StorGetOutstandingIoCount.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0039174 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  int v5; // r15d
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r12
  struct _SLIST_ENTRY *v9; // rax
  int OutstandingIoCount; // r14d
  ULONGLONG UnbiasedInterruptTime; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // r15d
  ULONGLONG v16; // r12
  int v17; // r14d
  unsigned int v18; // edi
  PSLIST_ENTRY v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rcx
  KIRQL v23; // di
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh]
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  ULONGLONG v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+68h] [rbp-98h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  int *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  char *v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  unsigned int *v46; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  ULONGLONG *v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  int *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  int *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]

  v2 = a2;
  memset(&v34, 0, sizeof(v34));
  SListHead = 0LL;
  if ( a2 >= *(_BYTE *)(a1 + 416) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4600) > 1 )
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
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4608)));
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
    while ( v5 < *(_DWORD *)(a1 + 4600) );
  }
  RaidAdapterAcquireStartIoLock(a1, &v34);
  *(_DWORD *)(a1 + 5024) = 0;
  OutstandingIoCount = StorGetOutstandingIoCount(a1);
  v27 = OutstandingIoCount;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (qword_1C0092468 & 0x400) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 336),
      11,
      *(_QWORD *)(a1 + 336),
      *(unsigned int *)(*(_QWORD *)(a1 + 336) + 56LL),
      v2,
      0LL,
      0LL);
  v12 = *(_QWORD *)(a1 + 568);
  v13 = *(_QWORD *)(a1 + 576);
  *(_BYTE *)(a1 + 584) |= 2u;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 40))(v13 + 16, (unsigned int)v2);
  *(_BYTE *)(a1 + 584) &= ~2u;
  v15 = v14 == 0 ? 0xC0000001 : 0;
  v16 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
  v31 = *(_DWORD *)(a1 + 5024);
  if ( *(int *)(a1 + 4600) > 1 )
  {
    v17 = 0;
    v18 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v19 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v19 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + ((unsigned __int64)(HIDWORD(v19[1].Next) % v18) << 6)),
          v19);
        ++v17;
      }
    }
    while ( v17 < *(_DWORD *)(a1 + 4600) );
    OutstandingIoCount = v27;
  }
  RaidAdapterReleaseStartIoLock(a1, &v34);
  v20 = *(_DWORD *)(a1 + 560);
  if ( v20 )
  {
    v21 = v20 / 0xF4240 + 1;
    if ( v20 == 1000000 * (v20 / 0xF4240) )
      v21 = v20 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4072, a1 + 4136, v21);
  }
  else
  {
    v23 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v23);
  }
  if ( (unsigned int)dword_1C00920C8 > 5 )
  {
    if ( tlgKeywordOn(v22, 0x400000000000LL) )
    {
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v54 = 0;
      v57 = 0;
      v37 = a1 + 5000;
      v28 = *(_DWORD *)(a1 + 56);
      v40 = &v28;
      v43 = &v26;
      v46 = &v29;
      v49 = &v33;
      v52 = &v30;
      v32 = v31;
      v55 = &v32;
      v38 = 16;
      v41 = 4;
      v26 = v2;
      v44 = 1;
      v29 = v15;
      v47 = 4;
      v33 = v16;
      v50 = 8;
      v30 = OutstandingIoCount;
      v53 = 4;
      v56 = 4;
      tlgWriteTransfer_EtwWriteTransfer(4LL, (unsigned __int8 *)dword_1C00838C1, v24, v25, 9u, &v36);
    }
  }
  *(_DWORD *)(a1 + 284) = 0;
  return v15;
}
