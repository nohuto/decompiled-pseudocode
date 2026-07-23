/*
 * XREFs of KeDisableTimer2 @ 0x14031DE08
 * Callers:
 *     ExDeleteTimer @ 0x14031DD40 (ExDeleteTimer.c)
 *     MiStoreEvictThread @ 0x1403A8830 (MiStoreEvictThread.c)
 *     PopPowerButtonWorkCallback @ 0x1405995E0 (PopPowerButtonWorkCallback.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405BEBFC (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpDeleteTimer2 @ 0x140785910 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x14098B210 (PopThermalZoneRemove.c)
 * Callees:
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140250184 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402501C8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x140251970 (KiRemoveTimer2.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     KeGenericProcessorCallback @ 0x140305DC4 (KeGenericProcessorCallback.c)
 *     KiUpdateTimer2Flags @ 0x14031E2A8 (KiUpdateTimer2Flags.c)
 *     EtwTraceTimedEvent @ 0x140338FE0 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiTraceCancelTimer2 @ 0x140462DE8 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  char v9; // cl
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned int v13; // r15d
  char v14; // r14
  char updated; // r15
  char v16; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rdi
  char v30; // al
  char v31; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+31h] [rbp-CFh]
  bool v35; // [rsp+35h] [rbp-CBh]
  unsigned int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  _OWORD v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[34]; // [rsp+80h] [rbp-80h] BYREF

  memset(v42, 0, 0x108uLL);
  v36 = 32;
  v38 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  memset(v41, 0, sizeof(v41));
  v31 = 0;
  v8 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v9 = 1;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v9 = 0;
  }
  v32 = v9;
  if ( a4 )
  {
    v10 = *a4;
    v11 = a4[1];
    if ( v9 && v10 )
    {
      LOBYTE(v40) = 8;
      v38 = v10;
      v39 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v11), KiWaitNever));
    }
    v7 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v10), KiWaitNever);
    v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v11), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v19) = 4;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v19;
  }
  v35 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( !v35 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v7;
      *(_QWORD *)(a1 + 120) = v8;
    }
    if ( !a2 )
      goto LABEL_13;
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_13:
        v13 = 6;
LABEL_14:
        v14 = v32;
        if ( v32 )
          EtwGetKernelTraceTimestamp((__int64)v41, 1073872896LL);
        updated = KiUpdateTimer2Flags(a1, v36, v13);
        if ( (_DWORD)KiIrqlFlags )
        {
          v20 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        v16 = a3;
        if ( a3 && !updated )
        {
          LODWORD(v42[0]) = 2097153;
          memset((char *)v42 + 4, 0, 0x104uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)v42, KiClockTimerOwner);
          KeGenericProcessorCallback(v42, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 2);
        }
        goto LABEL_20;
      }
      v36 = 36;
    }
    v31 = 1;
    v13 = 4;
    goto LABEL_14;
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(CurrentIrql);
  v14 = v32;
  updated = 0;
  v16 = a3;
LABEL_20:
  if ( v14 && !v35 )
  {
    v29 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v6, KiWaitNever));
    if ( v31 )
      KiTraceCancelTimer2(a1, v29);
    v30 = v40;
    v37 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v29 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    if ( a2 )
    {
      v30 = v40 | 1;
      LOBYTE(v40) = v40 | 1;
    }
    if ( v16 )
    {
      v30 |= 2u;
      LOBYTE(v40) = v30;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)&v37, 32, 4197890, (__int64)v41);
    }
    else
    {
      LOBYTE(v40) = v30 | 4;
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)&v37, 32, 1538, (__int64)v41);
    }
  }
  return v31;
}
