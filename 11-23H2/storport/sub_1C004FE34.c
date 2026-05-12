/*
 * XREFs of sub_1C004FE34 @ 0x1C004FE34
 * Callers:
 *     sub_1C004FCC0 @ 0x1C004FCC0 (sub_1C004FCC0.c)
 * Callees:
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C004ADF8 @ 0x1C004ADF8 (sub_1C004ADF8.c)
 */

void __fastcall sub_1C004FE34(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-58h]
  PIRP *Irp; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v2 = *(_QWORD *)(Context + 1792);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4896LL)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3512), 1, 0) )
    {
      sub_1C0008BF0(*(_QWORD *)(Context + 24), 0LL, 0LL);
    }
  }
  else if ( *(_DWORD *)(Context + 492) != 1 || (*(_BYTE *)(Context + 449) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)sub_1C00103B0,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 448) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1808), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1792) + 36LL), 0, 1) )
      sub_1C0008990(Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1792));
  if ( byte_1C0093BE8 )
  {
    if ( (byte_1C0093A02 & 0x10) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      LOBYTE(Irp) = *(_BYTE *)(Context + 96);
      LODWORD(Contexta) = *(_DWORD *)(v4 + 56);
      sub_1C004ADF8(
        v4,
        &stru_1C0089440,
        v3,
        **(_QWORD **)(Context + 1792),
        Contexta,
        Irp,
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        0);
    }
  }
}
