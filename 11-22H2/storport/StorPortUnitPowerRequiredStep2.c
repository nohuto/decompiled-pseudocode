/*
 * XREFs of StorPortUnitPowerRequiredStep2 @ 0x1C004F864
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C004F6F0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C004A828 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerRequiredStep2(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-58h]
  PIRP *Irp; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v2 = *(_QWORD *)(Context + 1792);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4896LL)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3512), 1, 0) )
    {
      RaidAdapterPoFxActivateComponent(*(_QWORD *)(Context + 24), 0LL, 0LL);
    }
  }
  else if ( *(_DWORD *)(Context + 492) != 1 || (*(_BYTE *)(Context + 449) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)RaidUnitDeviceStackPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 448) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1808), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1792) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1792));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 0x10) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      LOBYTE(Irp) = *(_BYTE *)(Context + 96);
      LODWORD(Contexta) = *(_DWORD *)(v4 + 56);
      McTemplateK0pquuuq_EtwWriteTransfer(
        v4,
        &EventUnitPowerRequiredStop,
        v3,
        **(_QWORD **)(Context + 1792),
        Contexta,
        Irp,
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        0);
    }
  }
}
