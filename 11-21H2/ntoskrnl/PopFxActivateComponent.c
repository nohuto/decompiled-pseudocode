/*
 * XREFs of PopFxActivateComponent @ 0x1403BA340
 * Callers:
 *     PopFxActivateComponentDependencies @ 0x1403551C8 (PopFxActivateComponentDependencies.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1403B5A24 (PopFxNotifyPreDIrpIssue.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxAddComponentRelation @ 0x1405CA2E0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 *     PopFxRegisterDeviceWorker @ 0x140823988 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopFxActivateComponent(ULONG_PTR a1, __int64 a2, char a3, char a4)
{
  $CEA84C04E3712D858E5667A507841A2A *v7; // rax
  char v8; // r15
  int *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v11; // rbx
  unsigned __int64 v12; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  struct _KTHREAD *v16; // rcx
  _OWORD v18[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-30h]

  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  v20 = 0;
  LODWORD(v7) = *(_DWORD *)(a1 + 824);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return (char)v7;
  if ( (a3 & 6) == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  else
  {
    v8 = 0;
  }
  v9 = (int *)v18;
  if ( (a3 & 2) != 0 )
    v9 = 0LL;
  LODWORD(v7) = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
  if ( (_DWORD)v7 == 1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 88), 1u);
    LOBYTE(v7) = PopFxActivateComponentWorker(a1, a2, a4, v9);
LABEL_8:
    if ( (a3 & 1) != 0 )
      LOBYTE(v7) = KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_10;
  }
  if ( (int)v7 >= 0 )
  {
    if ( ((unsigned int)v7 & 0x40000000) != 0 )
    {
      v11 = (KSPIN_LOCK *)(a2 + 128);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
      KxReleaseSpinLock(v11);
      LOBYTE(v7) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v7) = KeGetCurrentIrql();
          if ( (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)v7 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            LODWORD(v7) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v15 = ((unsigned int)v7 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= (unsigned int)v7;
            if ( v15 )
              LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
    goto LABEL_8;
  }
LABEL_10:
  if ( v8 )
  {
    v16 = KeGetCurrentThread();
    v15 = v16->SpecialApcDisable++ == -1;
    if ( v15 )
    {
      v7 = &v16->152;
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v7->ApcState.ApcListHead[0].Flink != v7 )
        LOBYTE(v7) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v7;
}
