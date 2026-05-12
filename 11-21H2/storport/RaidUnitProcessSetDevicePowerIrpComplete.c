/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000C7B4 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidUnitReleasePoFx @ 0x1C003BA00 (RaidUnitReleasePoFx.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     McTemplateK0quuupd_EtwWriteTransfer @ 0x1C0047E7C (McTemplateK0quuupd_EtwWriteTransfer.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C0048AF0 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C004B62C (StorPortUnitPoFxD0Completion.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(__int64 Context, PIRP Irp)
{
  unsigned int LowPart; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  __int128 v21; // [rsp+68h] [rbp-20h] BYREF

  Irp->IoStatus.Status = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v5 = *(struct _DEVICE_OBJECT **)(Context + 8);
  *(_DWORD *)(Context + 492) = LowPart;
  PoSetPowerState(v5, DevicePowerState, (POWER_STATE)LowPart);
  if ( LowPart == 1 && *(char *)(Context + 448) < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *(_DWORD *)(Context + 492) == 1 )
  {
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 0x100) != 0 )
      {
        ++*(_DWORD *)(Context + 3216);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(Context + 456), 1u) )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8));
          v7 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock(Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v7, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, (PVOID)Context);
          }
        }
        *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~0x200u;
      }
      if ( !RaidUnitCheckAndAcquirePoFx(Context)
        || (v11 = *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736)),
            (v11 & 1) != 0) )
      {
        if ( *(_BYTE *)(Context + 695) )
        {
          *(_BYTE *)(Context + 695) = 0;
          RaidRestartIoQueue(Context, 0);
        }
      }
      StorPortUnitPoFxD0Completion(v9, v8, v10, Context);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(Context + 24) + 5912LL));
      v14 = *(_QWORD *)(Context + 24);
      if ( (*(_BYTE *)(v14 + 110) & 0x40) != 0 )
      {
        LOBYTE(v13) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v14, 0xFFFFFFFFLL, v12, v13);
      }
      RaidUnitReleasePoFx(Context);
    }
    else if ( *(_BYTE *)(Context + 695) )
    {
      *(_BYTE *)(Context + 695) = 0;
      RaidRestartIoQueue(Context, 0);
    }
    if ( *(_DWORD *)(Context + 920) )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
  }
  else
  {
    if ( !*(_BYTE *)(Context + 695) )
      *(_BYTE *)(Context + 695) = 1;
    if ( *(_DWORD *)(Context + 920) )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Context + 24) + 5912LL));
      v17 = *(_QWORD *)(Context + 24);
      if ( (*(_BYTE *)(v17 + 110) & 0x40) != 0 && *(_DWORD *)(v17 + 5912) == *(_DWORD *)(v17 + 168) )
      {
        LOBYTE(v16) = 1;
        RaidAdapterPoFxSetDeviceIdleTimeout(v17, 0LL, v15, v16);
      }
      RaidUnitReleasePoFx(Context);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      52LL,
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v21 = 0LL;
    IoGetActivityIdIrp(Irp, &v21);
    if ( (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0quuupd_EtwWriteTransfer(
        v18,
        *(_QWORD *)(Context + 24),
        (unsigned int)&v21,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
