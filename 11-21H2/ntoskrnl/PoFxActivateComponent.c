/*
 * XREFs of PoFxActivateComponent @ 0x140357D10
 * Callers:
 *     PopFxActivateDevice @ 0x1402D2864 (PopFxActivateDevice.c)
 *     HalpInterruptInitPowerManagement @ 0x1403B97E8 (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403B9904 (HalpTimerInitPowerManagement.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x1403CE36C (HalpDmaInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x140618F80 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140AF86C4 (PoFxRegisterDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

char __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  int v3; // esi
  __int64 v4; // rbp
  $CEA84C04E3712D858E5667A507841A2A *v5; // rax
  char v6; // di
  int *v7; // r9
  struct _KTHREAD *v8; // rcx
  bool v9; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  _OWORD v15[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]

  v3 = a3 & 1;
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  v5 = *($CEA84C04E3712D858E5667A507841A2A **)(BugCheckParameter2 + 832);
  memset(v15, 0, sizeof(v15));
  v4 = *((_QWORD *)&v5->ApcState.ApcListHead[0].Flink + (unsigned int)BugCheckParameter3);
  v16 = 0LL;
  v17 = 0;
  LODWORD(v5) = *(_DWORD *)(BugCheckParameter2 + 824);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v6 = 0;
    }
    v7 = (int *)v15;
    if ( (a3 & 2) != 0 )
      v7 = 0LL;
    LODWORD(v5) = _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
    if ( (_DWORD)v5 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
      LOBYTE(v5) = PopFxActivateComponentWorker(BugCheckParameter2, v4, 0, v7);
    }
    else
    {
      if ( (int)v5 < 0 )
      {
LABEL_12:
        if ( v6 )
        {
          v8 = KeGetCurrentThread();
          v9 = v8->SpecialApcDisable++ == -1;
          if ( v9 )
          {
            v5 = &v8->152;
            if ( ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != v5 )
              LOBYTE(v5) = KiCheckForKernelApcDelivery();
          }
        }
        return (char)v5;
      }
      if ( ((unsigned int)v5 & 0x40000000) != 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 128));
        LOBYTE(v5) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v5) = KeGetCurrentIrql();
            if ( (unsigned __int8)v5 <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v5 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              LODWORD(v5) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v9 = ((unsigned int)v5 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= (unsigned int)v5;
              if ( v9 )
                LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
    }
    if ( v3 )
      LOBYTE(v5) = KeWaitForSingleObject((PVOID)(v4 + 104), Executive, 0, 0, 0LL);
    goto LABEL_12;
  }
  return (char)v5;
}
