/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C0015344
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C00152F0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C004AE20 (StorPortAdapterPowerNotRequiredStep2Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // edx
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // r8d
  NTSTATUS v8; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = *((_QWORD *)Context + 604);
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL);
  if ( (v4 & 2) == 0 && *((_DWORD *)Context + 77) == 1 )
  {
    if ( (*(_DWORD *)(v2 + 20) & 0x80u) != 0 && (v4 & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1388, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 692),
            StorPortAdapterPowerNotRequiredStep2Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v8 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             StorPortAdapterPoFxWaitWakeCompletion,
             Context,
             (PIRP *)(*((_QWORD *)Context + 604) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v8 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 604) + 20LL) |= 0x40u;
    }
    v3 = 0;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           StorPortAdapterPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 107) |= 4u;
      v3 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = *((_QWORD *)Context + 604);
  *((_QWORD *)Context + 640) = MEMORY[0xFFFFF78000000008];
  if ( (*((_BYTE *)Context + 108) & 1) != 0 )
  {
    *(_DWORD *)(v5 + 20) |= 8u;
    if ( !*((_QWORD *)Context + 639) )
      *((_QWORD *)Context + 639) = *((_QWORD *)Context + 640);
  }
  else
  {
    *(_DWORD *)(v5 + 20) &= ~8u;
  }
  PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 604));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v6,
        (unsigned int)&EventAdapterPowerNotRequiredStop,
        v7,
        **((_QWORD **)Context + 604),
        *((_DWORD *)Context + 14),
        v3);
  }
}
