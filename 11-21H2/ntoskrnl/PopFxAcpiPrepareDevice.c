/*
 * XREFs of PopFxAcpiPrepareDevice @ 0x1405DDEE4
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1405DDBE0 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1403BA6E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopPluginAcpiNotificationStrict @ 0x1405DFA70 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiPrepareDevice(const UNICODE_STRING *a1, ULONG_PTR a2, ULONG_PTR *a3, _BYTE *a4)
{
  int AcpiDeviceByUniqueId; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rsi
  ULONG_PTR i; // rbx

  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a1, 0LL);
  if ( AcpiDeviceByUniqueId < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) >= 3u
        && *(_QWORD *)(i + 112)
        && (unsigned __int8)PopPluginAcpiNotificationStrict(i, 1uLL, a2)
        && *(_BYTE *)(a2 + 12) )
      {
        v9 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      *a3 = v9;
      AcpiDeviceByUniqueId = 0;
      *a4 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)AcpiDeviceByUniqueId;
}
