/*
 * XREFs of RaUnitDeregisterFromIdleDetection @ 0x1C0021FB0
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C00216F4 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000AC74 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0012890 (RaidUnitCancelWaitWakeIrp.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C004F038 (StorPortUnitFlushActivePendingRequestQueue.c)
 */

void __fastcall RaUnitDeregisterFromIdleDetection(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v10; // rcx
  _QWORD *v11; // rdi
  void *v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(char *)(a1 + 449) < 0 )
  {
    if ( *(_QWORD *)(a1 + 24)
      && (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 4) != 0
      && RaidIsUnitControlSupported(a1, 4) )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v14 = 0LL;
      LOWORD(v14) = 1;
      DWORD1(v14) = 4;
      WORD1(v14) = *(_WORD *)(v2 + 56);
      WORD4(v14) = *(_WORD *)(a1 + 96);
      BYTE10(v14) = *(_BYTE *)(a1 + 98);
      RaCallMiniportUnitControl(v2 + 336);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitReenablePendingTimer(a1, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1792) + 96LL), &LockHandle);
    StorPortUnitFlushActivePendingRequestQueue(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 104LL);
    if ( v5 )
    {
      PoUnregisterCoalescingCallback(v5, v3, v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 104LL) = 0LL;
    }
    v6 = *(void **)(*(_QWORD *)(a1 + 1792) + 112LL);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 112LL) = 0LL;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 120LL);
    if ( v7 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v7, v3, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 120LL) = 0LL;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 128LL);
    if ( v8 )
    {
      LOBYTE(v3) = 1;
      v9 = ExDeleteTimer(v8, v3, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 128LL) = 0LL;
      if ( v9 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 148LL) & 1) != 0 )
          RaidUnitPoFxIdleComponent(a1, 0, 0, 0LL);
      }
    }
    v10 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1784);
    *(_BYTE *)(a1 + 449) &= ~0x80u;
    ExWaitForRundownProtectionReleaseCacheAware(v10);
    v11 = *(_QWORD **)(a1 + 1792);
    *(_QWORD *)(a1 + 1792) = 0LL;
    v12 = (void *)v11[22];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x4F506152u);
      v11[22] = 0LL;
      *((_DWORD *)v11 + 42) = 0;
    }
    PoFxUnregisterDevice(*v11);
    ExFreePoolWithTag(v11, 0x4F506152u);
  }
}
