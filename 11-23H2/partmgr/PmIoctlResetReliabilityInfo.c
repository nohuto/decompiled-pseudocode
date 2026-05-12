/*
 * XREFs of PmIoctlResetReliabilityInfo @ 0x1C0025D90
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlResetReliabilityInfo(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 56), Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v1 + 792), 0LL);
  _InterlockedExchange64((volatile __int64 *)(v1 + 800), 0LL);
  _InterlockedExchange64((volatile __int64 *)(v1 + 808), 0LL);
  KeReleaseMutex((PRKMUTEX)(v1 + 56), 0);
  return 0LL;
}
