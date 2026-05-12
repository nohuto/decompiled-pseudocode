/*
 * XREFs of sub_1C004F800 @ 0x1C004F800
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 */

void __fastcall sub_1C004F800(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // edi
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( sub_1C0008B84(Context) )
  {
    *(_QWORD *)(*(_QWORD *)(Context + 1792) + 72LL) = 0LL;
    if ( Status >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
      v7 = *(_QWORD *)(Context + 1792);
      *(_DWORD *)(Context + 872) = 2;
      *(_DWORD *)(v7 + 32) |= 0x10u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( (*(_DWORD *)(Context + 492) != 1 || (*(_BYTE *)(Context + 449) & 1) != 0)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1792) + 36LL), 1, 0) )
    {
      sub_1C0008A7C(Context, 0, 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
  }
}
