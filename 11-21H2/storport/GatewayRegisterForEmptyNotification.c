/*
 * XREFs of GatewayRegisterForEmptyNotification @ 0x1C0014B28
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0014A90 (RaidAdapterPowerDownDevice.c)
 * Callees:
 *     RaidAdapterStopOnPowerdown @ 0x1C0014E10 (RaidAdapterStopOnPowerdown.c)
 */

char __fastcall GatewayRegisterForEmptyNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v7; // edi
  __int64 v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0;
  if ( *(_DWORD *)(v5 + 840) )
  {
    while ( 1 )
    {
      v8 = a1 + 320LL * v7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8, &LockHandle);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 192), 0, 0) )
        break;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = *(_QWORD *)(a1 + 48);
      if ( ++v7 >= *(_DWORD *)(v5 + 840) )
        goto LABEL_4;
    }
    *(_BYTE *)(v8 + 208) = 1;
    *(_QWORD *)(v8 + 240) = RaidAdapterStopOnPowerdown;
    *(_QWORD *)(v8 + 224) = 0LL;
    *(_QWORD *)(v8 + 216) = a3;
    *(_QWORD *)(v8 + 232) = a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD *)(a1 + 48);
  }
LABEL_4:
  if ( v7 < *(_DWORD *)(v5 + 840) )
    return 0;
  RaidAdapterStopOnPowerdown(a2, a3, 0LL);
  return 1;
}
