/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012048 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00124B0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C00127AC (StorPortUnitPoFxD0Completion.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     McTemplateK0quuupd_EtwWriteTransfer @ 0x1C004AC84 (McTemplateK0quuupd_EtwWriteTransfer.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C004BACC (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(char *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  POWER_STATE v5; // ebx
  struct _DEVICE_OBJECT *v6; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PEX_RUNDOWN_REF_CACHE_AWARE *v12; // rsi
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24; // [rsp+68h] [rbp-30h] BYREF

  Irp->IoStatus.Status = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 1);
  *((POWER_STATE *)Context + 123) = v5;
  PoSetPowerState(v6, DevicePowerState, v5);
  if ( v5.SystemState == PowerSystemWorking && Context[448] < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *((_DWORD *)Context + 123) == 1 )
  {
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 0x100) != 0 )
      {
        ++*((_DWORD *)Context + 816);
        if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 114, 1u) )
        {
          WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
          v8 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock((__int64)Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v8, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, Context);
          }
        }
        *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) &= ~0x200u;
      }
      v12 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784);
      if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context)
        || (v13 = *(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*v12),
            (v13 & 1) != 0) )
      {
        if ( Context[695] )
        {
          Context[695] = 0;
          RaidRestartIoQueue(Context, 0LL);
        }
      }
      StorPortUnitPoFxD0Completion(v10, v9, v11, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Context + 3) + 5976LL));
      v16 = *((_QWORD *)Context + 3);
      if ( (*(_BYTE *)(v16 + 110) & 0x40) != 0 )
      {
        LOBYTE(v15) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v16, 0xFFFFFFFFLL, v14, v15);
      }
      ExReleaseRundownProtectionCacheAware(*v12);
    }
    else if ( Context[695] )
    {
      Context[695] = 0;
      RaidRestartIoQueue(Context, 0LL);
    }
    if ( *((_DWORD *)Context + 244) )
      StorUpdateCrashDumpPowerReady(*((_QWORD *)Context + 3));
    v17 = Context + 24;
  }
  else
  {
    if ( !Context[695] )
    {
      Context[695] = 1;
      RiDisableDeviceQueueFastPath();
    }
    v17 = Context + 24;
    if ( *((_DWORD *)Context + 244) )
      StorUpdateCrashDumpPowerReady(*v17);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*v17 + 5976LL));
      v22 = *v17;
      if ( (*(_BYTE *)(*v17 + 110LL) & 0x40) != 0 && *(_DWORD *)(v22 + 5976) == *(_DWORD *)(v22 + 176) )
      {
        LOBYTE(v21) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v22, 0LL, v20, v21);
      }
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 223));
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      52LL,
      &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v24 = 0LL;
    IoGetActivityIdIrp(Irp, &v24);
    if ( (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0quuupd_EtwWriteTransfer(
        v18,
        *v17,
        (unsigned int)&v24,
        *(_DWORD *)(*v17 + 56LL),
        Context[96],
        Context[97],
        Context[98],
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
