/*
 * XREFs of StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004ABA4
 * Callers:
 *     StorPortAdapterDirectedPowerUp @ 0x1C004A9D0 (StorPortAdapterDirectedPowerUp.c)
 * Callees:
 *     RaFlushDFxQueue @ 0x1C003D758 (RaFlushDFxQueue.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerUpRequestD0(char *Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*((_DWORD *)Context + 77) != 1 || (Context[107] & 4) != 0)
    && PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         (PREQUEST_POWER_COMPLETE)StorPortAdapterDirectedPowerUpCompletion,
         Context,
         0LL) == 259 )
  {
    Context[107] |= 2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 604));
    if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    {
      LODWORD(v5) = 0;
      LODWORD(Contexta) = *((_DWORD *)Context + 14);
      McTemplateK0pqq_EtwWriteTransfer(
        v2,
        &EventAdapterDirectedPowerUpStop,
        v3,
        **((_QWORD **)Context + 604),
        Contexta,
        v5);
    }
    if ( *((char **)Context + 699) == Context + 5592 )
      Context[109] &= ~0x40u;
    else
      RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
  }
}
