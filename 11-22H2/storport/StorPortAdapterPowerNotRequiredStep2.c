/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C004E3D0
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C004E350 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C004E5F0 (StorPortAdapterPowerNotRequiredStep2Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  int v3; // edi
  int v4; // edx
  NTSTATUS v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  PIRP *Irp; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = *((_QWORD *)Context + 612);
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL);
  if ( (v4 & 2) == 0 && *((_DWORD *)Context + 77) == 1 )
  {
    if ( (*(_DWORD *)(v2 + 20) & 0x80u) != 0 && (v4 & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1404, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 700),
            StorPortAdapterPowerNotRequiredStep2Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v5 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxWaitWakeCompletion,
             Context,
             (PIRP *)(*((_QWORD *)Context + 612) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v5 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 612) + 20LL) |= 0x40u;
    }
    v3 = 0;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 107) |= 4u;
      v3 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v6 = *((_QWORD *)Context + 612);
  *((_QWORD *)Context + 648) = MEMORY[0xFFFFF78000000008];
  if ( (*((_BYTE *)Context + 108) & 1) != 0 )
  {
    *(_DWORD *)(v6 + 20) |= 8u;
    if ( !*((_QWORD *)Context + 647) )
      *((_QWORD *)Context + 647) = *((_QWORD *)Context + 648);
  }
  else
  {
    *(_DWORD *)(v6 + 20) &= ~8u;
  }
  PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 612));
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    LODWORD(Irp) = v3;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(
      v7,
      &EventAdapterPowerNotRequiredStop,
      v8,
      **((_QWORD **)Context + 612),
      Contexta,
      Irp);
  }
}
