/*
 * XREFs of sub_1C004EF10 @ 0x1C004EF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C000F724 @ 0x1C000F724 (sub_1C000F724.c)
 *     sub_1C0013220 @ 0x1C0013220 (sub_1C0013220.c)
 *     sub_1C004ADF8 @ 0x1C004ADF8 (sub_1C004ADF8.c)
 */

void __fastcall sub_1C004EF10(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

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
  *(_BYTE *)(Context + 449) &= ~1u;
  v8 = *(_QWORD *)(Context + 1792);
  *(_QWORD *)(Context + 2136) = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(*(_QWORD *)(Context + 24) + 108LL) & 1) != 0 )
  {
    *(_DWORD *)(v8 + 32) |= 0x80u;
    if ( !*(_QWORD *)(Context + 2128) )
      *(_QWORD *)(Context + 2128) = *(_QWORD *)(Context + 2136);
  }
  else
  {
    *(_DWORD *)(v8 + 32) &= ~0x80u;
  }
  PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1792), v8, v7);
  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    sub_1C004ADF8(
      *(_QWORD *)(Context + 24),
      &stru_1C0088C80,
      v9,
      **(_QWORD **)(Context + 1792),
      *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
      *(_BYTE *)(Context + 96),
      *(_BYTE *)(Context + 97),
      *(_BYTE *)(Context + 98),
      1);
  *(_BYTE *)(Context + 451) |= 2u;
}
