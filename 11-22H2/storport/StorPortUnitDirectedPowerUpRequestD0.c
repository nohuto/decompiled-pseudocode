/*
 * XREFs of StorPortUnitDirectedPowerUpRequestD0 @ 0x1C004EEA8
 * Callers:
 *     StorPortUnitDirectedPowerUp @ 0x1C004ECF0 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaFlushDFxQueue @ 0x1C003FA08 (RaFlushDFxQueue.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C004A828 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerUpRequestD0(char *Context)
{
  _QWORD **v2; // r15
  struct _DEVICE_OBJECT **v3; // r14
  __int64 v4; // r8
  __int64 v5; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-58h]
  PIRP *Irp; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  if ( *((_DWORD *)Context + 123) != 1 || (Context[449] & 1) != 0 )
  {
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerUpCompletion,
           Context,
           0LL) == 259 )
    {
      Context[448] |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 452, 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1792);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 224) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent((__int64)Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1792);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
  }
  PoFxReportDevicePoweredOn(**v2);
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    v5 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = Context[96];
    LODWORD(Contexta) = *(_DWORD *)(v5 + 56);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v5,
      &EventUnitDirectedPowerUpStop,
      v4,
      **v2,
      Contexta,
      Irp,
      Context[97],
      Context[98],
      0);
  }
  if ( *((char **)Context + 425) == Context + 3400 )
    Context[451] &= ~2u;
  else
    RaFlushDFxQueue(*v3);
}
