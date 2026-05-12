/*
 * XREFs of GatewayRegisterForEmptyNotification @ 0x1C00128E8
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0011E18 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDeviceReset @ 0x1C003525C (RaidAdapterDeviceReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall GatewayRegisterForEmptyNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64, __int64))
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
  {
    while ( 1 )
    {
      v10 = a1 + 320LL * v9;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10, &LockHandle);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 192), 0, 0) )
        break;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( ++v9 >= *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
        goto LABEL_4;
    }
    *(_BYTE *)(v10 + 208) = 1;
    *(_QWORD *)(v10 + 224) = a4;
    *(_QWORD *)(v10 + 216) = a3;
    *(_QWORD *)(v10 + 232) = a2;
    *(_QWORD *)(v10 + 240) = a5;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_4:
  if ( v9 < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
    return 0;
  a5(a2, a3, a4);
  return 1;
}
