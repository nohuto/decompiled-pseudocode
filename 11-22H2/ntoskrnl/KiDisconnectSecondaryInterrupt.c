/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x140571AD8
 * Callers:
 *     KeDisconnectInterrupt @ 0x14031F1B8 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KiDisconnectInterruptCommon @ 0x14031F540 (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x14031F710 (HalDisableInterrupt.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1403A2AE8 (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1403A3118 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, _DWORD *a2)
{
  bool v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v8; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // ebx
  unsigned __int8 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v4 = 0;
  v5 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  KiAcquireSecondaryPassiveConnectLock(v5);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v5, &v15);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 == a1 )
      v4 = *(_QWORD *)(v6 + 8) == v6 + 8;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v5);
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v8 = v15;
    if ( v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = v15;
      v11 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v8 = v15;
  }
  __writecr8(v8);
  if ( v4 )
    HalDisableInterrupt(a2);
  v13 = KiDisconnectInterruptCommon(1, a1, (__int64)a2);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
