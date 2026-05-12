/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1C0016A48
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C0016828 (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(__int64 Context, PIRP Irp)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(Context + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 51LL, &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids, Context, Irp);
  }
  if ( *(_DWORD *)(Context + 492) == 4
    && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
  {
    if ( (*(_BYTE *)(v2 + 108) & 8) == 0
      && *(_QWORD *)(v2 + 4832)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3432), 1, 0) )
    {
      RaidAdapterPoFxActivateComponent(v2);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 308) > 1 )
    {
      LOBYTE(v5) = 1;
      *(_BYTE *)(Context + 1913) = 1;
      *(_QWORD *)(Context + 1920) = Irp;
      RaUnitAcquireRemoveLock(Context, (__int64)Irp, v5);
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 4816), (PSLIST_ENTRY)(Context + 1936));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return RaidUnitProcessSetDevicePowerIrp((PVOID)Context, Irp);
}
