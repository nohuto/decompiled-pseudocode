/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x140757F80
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F7080 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F7D08 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpMetadataHeapStart @ 0x1403248E4 (RtlpHpMetadataHeapStart.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A26D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     ExPoolSetLimit @ 0x140607C54 (ExPoolSetLimit.c)
 *     SdbGetIndex @ 0x1407556B8 (SdbGetIndex.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140757EA4 (SdbpGetStringTableItemFromStringRef.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0D38 (ExCheckFullProcessInformationAccess.c)
 *     RtlpLogCapabilityCheckLatency @ 0x1407ECEA0 (RtlpLogCapabilityCheckLatency.c)
 *     ExQueryBootEntropyInformation @ 0x140821B40 (ExQueryBootEntropyInformation.c)
 *     ExpCheckTestsigningEnabled @ 0x1409FBCF8 (ExpCheckTestsigningEnabled.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FCA74 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x140758060 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x1407D9500 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  int v10; // ebx
  PVOID v12; // r8
  NTSTATUS v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v12 = *Context;
      else
        v12 = 0LL;
      v10 = RtlRunOnceComplete(RunOnce, 0, v12);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v10 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 >= 0 )
        goto LABEL_3;
      v10 = v13;
    }
LABEL_12:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    RtlRaiseStatus(v10);
  }
LABEL_3:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
