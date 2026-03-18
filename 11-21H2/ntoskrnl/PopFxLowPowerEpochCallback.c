/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x1403DBD50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(_QWORD *a1, char *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rbx
  void (__fastcall *v8)(__int64, char *); // r8
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1073741811;
  v4 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a1[1];
  if ( !v4 && a3 == 4 && a2 )
  {
    PopFxLowPowerEpoch = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v8 = (void (__fastcall *)(__int64, char *))i[12];
      v9[0] = 0;
      if ( v8 )
      {
        v9[0] = PopFxLowPowerEpoch;
        v8(24LL, v9);
      }
    }
    PopPepLowPowerEpoch = PopFxLowPowerEpoch;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0;
  }
  return v3;
}
