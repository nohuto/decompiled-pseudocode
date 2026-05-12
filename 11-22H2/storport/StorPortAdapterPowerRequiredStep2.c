/*
 * XREFs of StorPortAdapterPowerRequiredStep2 @ 0x1C004E71C
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C004E610 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 612) + 8LL) + 12LL) & 1) != 0
    || *((_DWORD *)Context + 77) == 1 && (*((_BYTE *)Context + 107) & 4) == 0
    || PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD0Completion,
         Context,
         0LL) != 259 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 612));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0092A02 & 0x10) != 0 )
      {
        LODWORD(v5) = 0;
        LODWORD(Contexta) = *((_DWORD *)Context + 14);
        McTemplateK0pqq_EtwWriteTransfer(
          v2,
          &EventAdapterPowerRequiredStop,
          v3,
          **((_QWORD **)Context + 612),
          Contexta,
          v5);
      }
    }
  }
  else
  {
    *((_BYTE *)Context + 107) |= 2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
