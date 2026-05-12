/*
 * XREFs of StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C004A790
 * Callers:
 *     StorPortAdapterDirectedPowerDown @ 0x1C004A660 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerDownRequestD3Passive @ 0x1C004A9B0 (StorPortAdapterDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownRequestD3(PVOID Context)
{
  __int64 v2; // rcx
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  PIRP *Irp; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( *((_DWORD *)Context + 77) == 1 )
  {
    v2 = *((_QWORD *)Context + 604);
    if ( (*(_DWORD *)(v2 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1388, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 692),
            StorPortAdapterDirectedPowerDownRequestD3Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v3 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             StorPortAdapterPoFxWaitWakeCompletion,
             Context,
             (PIRP *)(*((_QWORD *)Context + 604) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v3 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 604) + 20LL) |= 0x40u;
    }
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortAdapterDirectedPowerDownCompletion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 107) |= 4u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v6 = *((_QWORD *)Context + 604);
  *((_QWORD *)Context + 650) = MEMORY[0xFFFFF78000000008];
  if ( (*((_BYTE *)Context + 108) & 1) != 0 )
  {
    *(_DWORD *)(v6 + 20) |= 0x20u;
    if ( !*((_QWORD *)Context + 649) )
      *((_QWORD *)Context + 649) = *((_QWORD *)Context + 650);
  }
  else
  {
    *(_DWORD *)(v6 + 20) &= ~0x20u;
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 604), v4, v5);
  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
  {
    LODWORD(Irp) = 0;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(
      v7,
      &EventAdapterDirectedPowerDownStop,
      v8,
      **((_QWORD **)Context + 604),
      Contexta,
      Irp);
  }
}
