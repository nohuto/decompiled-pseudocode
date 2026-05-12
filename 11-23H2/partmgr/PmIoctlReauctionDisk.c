/*
 * XREFs of PmIoctlReauctionDisk @ 0x1C000E6E4
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     PmSetInitialDiskAttributes @ 0x1C0021F84 (PmSetInitialDiskAttributes.c)
 */

__int64 __fastcall PmIoctlReauctionDisk(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // esi
  KIRQL v3; // al
  KIRQL v4; // bl

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  KeWaitForSingleObject((PVOID)(v1 + 56), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(v1 + 604) )
  {
    v2 = -1073741637;
  }
  else
  {
    *(GUID *)(v1 + 544) = GUID_NULL;
    PmSetInitialDiskAttributes(v1);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 112));
    *(_DWORD *)(v1 + 512) |= 0x200u;
    v4 = v3;
    PmWakeupNotificationWorkItem(v1);
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 112), v4);
  }
  KeReleaseMutex((PRKMUTEX)(v1 + 56), 0);
  return v2;
}
