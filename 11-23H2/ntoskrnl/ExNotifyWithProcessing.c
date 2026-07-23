/*
 * XREFs of ExNotifyWithProcessing @ 0x14033C1F0
 * Callers:
 *     IopSessionChangeWorker @ 0x14033C170 (IopSessionChangeWorker.c)
 *     ExNotifyCallback @ 0x14033C1D0 (ExNotifyCallback.c)
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 *     PoNotifySystemTimeSet @ 0x1403B66A8 (PoNotifySystemTimeSet.c)
 *     KiDynamicProcessorAddNotification @ 0x140571E64 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x140606BC4 (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x1407B3F60 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140B3E0A4 (PnpNotifyEarlyLaunchImageLoad.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140B3E420 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCallProcessing @ 0x14033C338 (ExpCallProcessing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  volatile signed __int64 *v8; // r15
  KIRQL v9; // al
  _QWORD *v10; // r14
  KIRQL v11; // r12
  KIRQL v12; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax

  if ( a1 )
  {
    v5 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v5 != v5 )
    {
      v8 = (volatile signed __int64 *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v5;
      v11 = v9;
      if ( v9 == 2 )
      {
        for ( ; v10 != v5; v10 = (_QWORD *)*v10 )
        {
          ExpCallProcessing(1, v10[4], a2, a3, a4);
          ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
          ExpCallProcessing(0, v10[4], a2, a3, a4);
        }
      }
      else
      {
        for ( ; v10 != v5; v10 = (_QWORD *)*v10 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KxReleaseSpinLock(v8);
            if ( (_DWORD)KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v16 = ~(unsigned __int16)(-1LL << (v11 + 1));
                v17 = (v16 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v16;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v11);
            ExpCallProcessing(1, v10[4], a2, a3, a4);
            ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
            ExpCallProcessing(0, v10[4], a2, a3, a4);
            v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
            --*((_DWORD *)v10 + 10);
            v11 = v12;
            if ( *((_BYTE *)v10 + 44) && !*((_DWORD *)v10 + 10) )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
        }
      }
      KxReleaseSpinLock(v8);
      if ( (_DWORD)KiIrqlFlags )
      {
        v18 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && v11 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v17 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      __writecr8(v11);
    }
  }
}
