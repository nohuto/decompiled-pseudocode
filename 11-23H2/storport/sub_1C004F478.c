/*
 * XREFs of sub_1C004F478 @ 0x1C004F478
 * Callers:
 *     sub_1C004F2C0 @ 0x1C004F2C0 (sub_1C004F2C0.c)
 * Callees:
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C003FFD8 @ 0x1C003FFD8 (sub_1C003FFD8.c)
 *     sub_1C004ADF8 @ 0x1C004ADF8 (sub_1C004ADF8.c)
 */

void __fastcall sub_1C004F478(char *Context)
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
           (PREQUEST_POWER_COMPLETE)sub_1C004F440,
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
      sub_1C0008990((__int64)Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1792);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
  }
  PoFxReportDevicePoweredOn(**v2);
  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
  {
    v5 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = Context[96];
    LODWORD(Contexta) = *(_DWORD *)(v5 + 56);
    sub_1C004ADF8(v5, &stru_1C0088AB0, v4, **v2, Contexta, Irp, Context[97], Context[98], 0);
  }
  if ( *((char **)Context + 425) == Context + 3400 )
    Context[451] &= ~2u;
  else
    sub_1C003FFD8(*v3);
}
