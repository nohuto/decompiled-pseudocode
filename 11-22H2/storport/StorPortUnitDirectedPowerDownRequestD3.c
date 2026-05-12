/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3 @ 0x1C004EA90
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x1C004E820 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownRequestD3Passive @ 0x1C004ECD0 (StorPortUnitDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C004A828 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3(char *Context)
{
  PDEVICE_OBJECT *v2; // r14
  NTSTATUS v3; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  if ( *((_DWORD *)Context + 123) != 1 )
    goto LABEL_7;
  if ( (*(_DWORD *)(*((_QWORD *)Context + 224) + 32LL) & 1) == 0 )
  {
    v2 = (PDEVICE_OBJECT *)(Context + 8);
LABEL_11:
    if ( PoRequestPowerIrp(
           *v2,
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerDownCompletion,
           Context,
           0LL) == 259 )
    {
      Context[449] |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 453, 0);
      return;
    }
    goto LABEL_7;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 488, 1, 0) )
      IoQueueWorkItem(
        *((PIO_WORKITEM *)Context + 242),
        StorPortUnitDirectedPowerDownRequestD3Passive,
        DelayedWorkQueue,
        Context);
    return;
  }
  v2 = (PDEVICE_OBJECT *)(Context + 8);
  v3 = PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         0,
         (POWER_STATE)1,
         StorPortUnitPoFxWaitWakeCompletion,
         Context,
         (PIRP *)(*((_QWORD *)Context + 224) + 72LL));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  if ( v3 >= 0 )
    goto LABEL_11;
LABEL_7:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v4 = *((_QWORD *)Context + 224);
  *((_QWORD *)Context + 267) = MEMORY[0xFFFFF78000000008];
  v5 = *(unsigned int *)(v4 + 32);
  if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
  {
    LODWORD(v5) = v5 | 0x80;
    *(_DWORD *)(v4 + 32) = v5;
    if ( !*((_QWORD *)Context + 266) )
      *((_QWORD *)Context + 266) = *((_QWORD *)Context + 267);
  }
  else
  {
    LODWORD(v5) = v5 & 0xFFFFFF7F;
    *(_DWORD *)(v4 + 32) = v5;
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 224), v5, v4);
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    v7 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = Context[96];
    LODWORD(Contexta) = *(_DWORD *)(v7 + 56);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v7,
      &EventUnitDirectedPowerDownStop,
      v6,
      **((_QWORD **)Context + 224),
      Contexta,
      Irp,
      Context[97],
      Context[98],
      0);
  }
}
