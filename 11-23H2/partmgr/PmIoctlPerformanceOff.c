/*
 * XREFs of PmIoctlPerformanceOff @ 0x1C0023DC4
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmWmiCounterDisable @ 0x1C0022550 (PmWmiCounterDisable.c)
 */

__int64 __fastcall PmIoctlPerformanceOff(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v1 + 704) && !PmWmiCounterDisable((PVOID *)(v1 + 720), 0, 0) )
    *(_BYTE *)(v1 + 704) = 0;
  return 0LL;
}
