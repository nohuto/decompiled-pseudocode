/*
 * XREFs of StorPortAdapterPowerRequiredStep2 @ 0x1C001E438
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001E3A0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerRequiredStep2(PVOID Context)
{
  int v2; // ecx
  int v3; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 604) + 8LL) + 12LL) & 1) != 0
    || *((_DWORD *)Context + 77) == 1 && (*((_BYTE *)Context + 107) & 4) == 0
    || PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         StorPortAdapterPoFxD0Completion,
         Context,
         0LL) != 259 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 604));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C00799E2 & 0x10) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(
          v2,
          (unsigned int)&EventAdapterPowerRequiredStop,
          v3,
          **((_QWORD **)Context + 604),
          *((_DWORD *)Context + 14),
          0);
    }
  }
  else
  {
    *((_BYTE *)Context + 107) |= 2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
