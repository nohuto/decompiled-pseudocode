/*
 * XREFs of sub_1C004FA08 @ 0x1C004FA08
 * Callers:
 *     sub_1C004F920 @ 0x1C004F920 (sub_1C004F920.c)
 *     sub_1C004FCA0 @ 0x1C004FCA0 (sub_1C004FCA0.c)
 * Callees:
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C004ADF8 @ 0x1C004ADF8 (sub_1C004ADF8.c)
 */

void __fastcall sub_1C004FA08(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // r14d
  PDEVICE_OBJECT *v6; // r15
  NTSTATUS v7; // edi
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-78h]
  PIRP *Irp; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  v2 = *((_QWORD *)Context + 224);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 984));
    v4 = *((_QWORD *)Context + 3);
    Context[449] |= 0x20u;
    v5 = 0;
    if ( *(_QWORD *)(v4 + 4896) && _InterlockedCompareExchange((volatile signed __int32 *)Context + 878, 0, 1) == 1 )
      sub_1C0008BB4(*((_QWORD *)Context + 3), 0LL, 0LL);
    goto LABEL_16;
  }
  v5 = 0;
  if ( *((_DWORD *)Context + 123) != 1 )
    goto LABEL_16;
  if ( (v3 & 1) == 0 )
  {
    v6 = (PDEVICE_OBJECT *)(Context + 8);
    goto LABEL_14;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v6 = (PDEVICE_OBJECT *)(Context + 8);
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)sub_1C004F800,
           Context,
           (PIRP *)(*((_QWORD *)Context + 224) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
    if ( v7 >= 0 )
    {
LABEL_14:
      v5 = 0;
      if ( PoRequestPowerIrp(*v6, 2u, (POWER_STATE)4, (PREQUEST_POWER_COMPLETE)sub_1C004F710, Context, 0LL) == 259 )
      {
        Context[449] |= 1u;
        _InterlockedExchange((volatile __int32 *)Context + 453, 0);
        v5 = 1;
      }
    }
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v8 = *((_QWORD *)Context + 224);
    *((_QWORD *)Context + 259) = MEMORY[0xFFFFF78000000008];
    v9 = *(_DWORD *)(v8 + 32);
    if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
    {
      *(_DWORD *)(v8 + 32) = v9 | 0x20;
      if ( !*((_QWORD *)Context + 256) )
        *((_QWORD *)Context + 256) = *((_QWORD *)Context + 259);
    }
    else
    {
      *(_DWORD *)(v8 + 32) = v9 & 0xFFFFFFDF;
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 224));
    if ( byte_1C0093BE8 )
    {
      if ( (byte_1C0093A02 & 0x10) != 0 )
      {
        v11 = *((_QWORD *)Context + 3);
        LOBYTE(Irp) = Context[96];
        LODWORD(Contexta) = *(_DWORD *)(v11 + 56);
        sub_1C004ADF8(
          v11,
          &stru_1C00896C0,
          v10,
          **((_QWORD **)Context + 224),
          Contexta,
          Irp,
          Context[97],
          Context[98],
          v5);
      }
    }
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 488, 1, 0) )
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 242), sub_1C004FCA0, DelayedWorkQueue, Context);
}
