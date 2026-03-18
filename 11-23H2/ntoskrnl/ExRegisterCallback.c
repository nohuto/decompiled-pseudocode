/*
 * XREFs of ExRegisterCallback @ 0x1403678A0
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4CA0 (HvlPhase2Initialize.c)
 *     DifExRegisterCallbackWrapper @ 0x1405D96A0 (DifExRegisterCallbackWrapper.c)
 *     KeRegisterProcessorChangeCallback @ 0x140822690 (KeRegisterProcessorChangeCallback.c)
 *     HaliInitPowerManagement @ 0x140834A70 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140854AE0 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x140863A40 (IoRegisterBootDriverCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x140864F10 (SeRegisterImageVerificationCallback.c)
 *     IoRegisterContainerNotification @ 0x1409481D0 (IoRegisterContainerNotification.c)
 *     PiCslInitialize @ 0x140B3BC84 (PiCslInitialize.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B6FC1C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B711D4 (PopUmpoInitializeMonitorChannel.c)
 *     PopSetupKsrCallbacks @ 0x140B75B90 (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140B95390 (PiKsrNotifyInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  char v8; // bp
  KIRQL v9; // al
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  Pool2 = ExAllocatePool2(64LL, 48LL, 1699889731LL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_QWORD *)(Pool2 + 24) = CallbackFunction;
    v8 = 0;
    *(_QWORD *)(Pool2 + 16) = CallbackObject;
    *(_QWORD *)(Pool2 + 32) = CallbackContext;
    *(_BYTE *)(Pool2 + 44) = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
    v10 = (_QWORD *)((char *)CallbackObject + 16);
    v11 = v9;
    if ( *((_BYTE *)CallbackObject + 32) || (_QWORD *)*v10 == v10 )
    {
      v12 = (_QWORD *)*((_QWORD *)CallbackObject + 3);
      v8 = 1;
      if ( (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v7 = v10;
      v7[1] = v12;
      *v12 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    KxReleaseSpinLock((volatile signed __int64 *)CallbackObject + 1);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v11);
    if ( !v8 )
    {
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
      return 0LL;
    }
    return v7;
  }
  else
  {
    ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
    return 0LL;
  }
}
