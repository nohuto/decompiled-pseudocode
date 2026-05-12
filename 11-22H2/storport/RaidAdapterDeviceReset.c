/*
 * XREFs of RaidAdapterDeviceReset @ 0x1C003525C
 * Callers:
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0039E80 (RaidAdapterStorageDeviceResetIoctl.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     GatewayRegisterForEmptyNotification @ 0x1C00128E8 (GatewayRegisterForEmptyNotification.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0039174 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     StorReset @ 0x1C0047378 (StorReset.c)
 */

__int64 __fastcall RaidAdapterDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r15
  struct _SLIST_ENTRY *v11; // rax
  int v12; // esi
  int v13; // r14d
  unsigned int v14; // ebx
  PSLIST_ENTRY v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r9
  KIRQL v18; // bl
  struct _KEVENT Event[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20; // [rsp+60h] [rbp-29h]
  __int128 v21; // [rsp+68h] [rbp-21h]
  __int64 v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+84h] [rbp-5h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  union _SLIST_HEADER SListHead; // [rsp+90h] [rbp+7h] BYREF

  v20 = 0LL;
  SListHead = 0LL;
  v22 = 0LL;
  memset(Event, 0, sizeof(Event));
  v21 = 0LL;
  if ( !*(_QWORD *)(a1 + 5312) )
    return 3221225488LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 22) )
    return 3221225659LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 288), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4600) > 1 )
  {
    v7 = 0;
    v8 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v8 )
      {
        v9 = 0LL;
        v10 = v8;
        do
        {
          v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v9 + *(_QWORD *)(a1 + 4608)));
          if ( v11 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v11);
            ++v7;
          }
          else
          {
            _mm_pause();
          }
          v9 += 64LL;
          --v10;
        }
        while ( v10 );
      }
    }
    while ( v7 < *(_DWORD *)(a1 + 4600) );
  }
  KeInitializeEvent(Event, SynchronizationEvent, 0);
  if ( !GatewayRegisterForEmptyNotification(
          *(_QWORD *)(a1 + 896),
          *(_QWORD *)(a1 + 8),
          a3,
          (__int64)Event,
          (void (__fastcall *)(__int64, __int64, __int64))&RaidAdapterStopOnGatewayEmpty) )
    KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  v12 = StorReset(*(_QWORD *)(a1 + 576) + 16LL, *(unsigned int *)(a2 + 8), *(_QWORD *)(a2 + 16), 0LL);
  if ( v12 >= 0 && (*(_BYTE *)(a2 + 16) & 1) == 0 )
  {
    v25 = 0LL;
    v23 = 16;
    v24 = 16;
    v12 = RaCallMiniportAdapterControl(a1 + 336);
  }
  if ( *(int *)(a1 + 4600) > 1 )
  {
    v13 = 0;
    v14 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v15 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v15 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + ((unsigned __int64)(HIDWORD(v15[1].Next) % v14) << 6)),
          v15);
        ++v13;
      }
    }
    while ( v13 < *(_DWORD *)(a1 + 4600) );
  }
  if ( v12 >= 0 && (v16 = *(_DWORD *)(a1 + 560)) != 0 )
  {
    v17 = v16 / 0xF4240 + 1;
    if ( v16 == 1000000 * (v16 / 0xF4240) )
      v17 = v16 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4072, a1 + 4136, v17);
  }
  else
  {
    v18 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v18);
  }
  *(_DWORD *)(a1 + 288) = 0;
  return (unsigned int)v12;
}
