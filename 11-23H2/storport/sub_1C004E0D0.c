/*
 * XREFs of sub_1C004E0D0 @ 0x1C004E0D0
 * Callers:
 *     sub_1C004DFA0 @ 0x1C004DFA0 (sub_1C004DFA0.c)
 *     sub_1C004E2E0 @ 0x1C004E2E0 (sub_1C004E2E0.c)
 * Callees:
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 */

void __fastcall sub_1C004E0D0(char *Context)
{
  _QWORD **v2; // r14
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Contexta; // [rsp+20h] [rbp-48h]
  PIRP *Irp; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = (_QWORD **)(Context + 4896);
  if ( *((_DWORD *)Context + 77) == 1 )
  {
    if ( (*((_DWORD *)*v2 + 5) & 0x80u) != 0 && (*(_DWORD *)((*v2)[1] + 12LL) & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1404, 1, 0) )
          IoQueueWorkItem(*((PIO_WORKITEM *)Context + 700), sub_1C004E2E0, DelayedWorkQueue, Context);
        return;
      }
      v3 = PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             0,
             (POWER_STATE)1,
             sub_1C004E7B0,
             Context,
             (PIRP *)*v2 + 9);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v3 == 259 )
        *((_DWORD *)*v2 + 5) |= 0x40u;
    }
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)sub_1C004E020,
           Context,
           0LL) == 259 )
    {
      Context[107] |= 4u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v6 = (__int64)*v2;
  *((_QWORD *)Context + 658) = MEMORY[0xFFFFF78000000008];
  if ( (Context[108] & 1) != 0 )
  {
    *(_DWORD *)(v6 + 20) |= 0x20u;
    if ( !*((_QWORD *)Context + 657) )
      *((_QWORD *)Context + 657) = *((_QWORD *)Context + 658);
  }
  else
  {
    *(_DWORD *)(v6 + 20) &= ~0x20u;
  }
  PoFxCompleteDirectedPowerDown(**v2, v4, v5);
  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
  {
    LODWORD(Irp) = 0;
    LODWORD(Contexta) = *((_DWORD *)Context + 14);
    sub_1C00441C8(v7, &stru_1C0089590, v8, **v2, Contexta, Irp);
  }
}
