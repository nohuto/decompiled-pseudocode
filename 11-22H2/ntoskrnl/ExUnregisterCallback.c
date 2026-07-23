/*
 * XREFs of ExUnregisterCallback @ 0x14036E050
 * Callers:
 *     IopCleanupNotifications @ 0x1403AB5EC (IopCleanupNotifications.c)
 *     DifExUnregisterCallbackWrapper @ 0x1405DA0C0 (DifExUnregisterCallbackWrapper.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822950 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x140948280 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1409484C0 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x140974790 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x1409C8D90 (SeUnregisterImageVerificationCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B72254 (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x140B76F40 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // r14
  KIRQL i; // al
  KIRQL v4; // di
  _QWORD *v5; // rdx
  PVOID *v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  for ( i = KeAcquireSpinLockRaiseToDpc(v1 + 1); ; i = KeAcquireSpinLockRaiseToDpc(v1 + 1) )
  {
    v4 = i;
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&ExpCallbackEvent);
    KxReleaseSpinLock((volatile signed __int64 *)v1 + 1);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    KeWaitForSingleObject(&ExpCallbackEvent, Executive, 0, 0, 0LL);
  }
  v5 = *(_QWORD **)CallbackRegistration;
  v6 = (PVOID *)*((_QWORD *)CallbackRegistration + 1);
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration || *v6 != CallbackRegistration )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  KxReleaseSpinLock((volatile signed __int64 *)v1 + 1);
  if ( (_DWORD)KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu && v4 <= 0xFu && v12 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (v4 + 1));
      v11 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  __writecr8(v4);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObject(v1);
}
