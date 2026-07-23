/*
 * XREFs of PopFxActivateComponent @ 0x1402871E0
 * Callers:
 *     PoFxActivateComponent @ 0x140287170 (PoFxActivateComponent.c)
 *     PopFxNotifyPreDIrpIssue @ 0x14028DD98 (PopFxNotifyPreDIrpIssue.c)
 *     PopFxActivateComponentDependencies @ 0x140312394 (PopFxActivateComponentDependencies.c)
 *     PoFxAddComponentRelation @ 0x140587700 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140587B20 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405881A0 (PoFxRemoveComponentRelation.c)
 *     PopFxRegisterDeviceWorker @ 0x1408381FC (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     PopFxActivateComponentWorker @ 0x140312240 (PopFxActivateComponentWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char v5; // bl
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax
  __int64 v7; // rbp
  char v8; // si
  _OWORD *SchedulerAssist; // r9
  struct _KTHREAD *v10; // rcx
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _OWORD v17[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]

  v18 = 0LL;
  v19 = 0;
  v5 = a3;
  LODWORD(v6) = *(_DWORD *)(a1 + 824);
  v7 = a2;
  memset(v17, 0, sizeof(v17));
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return (int)v6;
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
  SchedulerAssist = v17;
  if ( (a3 & 2) != 0 )
    SchedulerAssist = 0LL;
  LODWORD(v6) = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
  if ( (_DWORD)v6 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    LODWORD(v6) = PopFxActivateComponentWorker(a1, a2, a4, SchedulerAssist);
LABEL_14:
    if ( (v5 & 1) != 0 )
      LODWORD(v6) = KeWaitForSingleObject((PVOID)(v7 + 104), Executive, 0, 0, 0LL);
    goto LABEL_8;
  }
  if ( (int)v6 >= 0 )
  {
    if ( ((unsigned int)v6 & 0x40000000) != 0 && (a3 & 8) == 0 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
      KxReleaseSpinLock((volatile signed __int64 *)(v7 + 128));
      LODWORD(v6) = (_DWORD)KiIrqlFlags;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v13 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v13 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v6) = ~(unsigned __int16)a2;
          v11 = ((unsigned int)v6 & *((_DWORD *)SchedulerAssist + 5)) == 0;
          a3 = (unsigned int)v6 & *((_DWORD *)SchedulerAssist + 5);
          *((_DWORD *)SchedulerAssist + 5) = a3;
          if ( v11 )
            LODWORD(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v13);
    }
    goto LABEL_14;
  }
LABEL_8:
  if ( v8 )
  {
    v10 = KeGetCurrentThread();
    v11 = v10->SpecialApcDisable++ == -1;
    if ( v11 )
    {
      v6 = &v10->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
        LODWORD(v6) = KiCheckForKernelApcDelivery(v10, a2, a3, SchedulerAssist);
    }
  }
  return (int)v6;
}
