/*
 * XREFs of sub_1C004F710 @ 0x1C004F710
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 *     sub_1C000F724 @ 0x1C000F724 (sub_1C000F724.c)
 *     sub_1C0013220 @ 0x1C0013220 (sub_1C0013220.c)
 */

void __fastcall sub_1C004F710(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( sub_1C0008B84(Context) )
  {
    if ( Status >= 0 )
    {
      sub_1C000F724(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
      sub_1C0013220(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1784));
  }
  if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4896LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)(Context + 3512), 0, 1) == 1 )
  {
    sub_1C0008BB4(*(_QWORD *)(Context + 24), 0LL, 0LL);
  }
  if ( *(_DWORD *)(Context + 3344) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 24) + 896LL) + 48LL)
                                                    + 932LL));
  *(_BYTE *)(Context + 449) &= ~1u;
}
