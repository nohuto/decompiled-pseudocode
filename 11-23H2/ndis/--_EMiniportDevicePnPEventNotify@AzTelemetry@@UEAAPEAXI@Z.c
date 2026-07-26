/*
 * XREFs of ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1C00D1790
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x1C0023E84 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 */

LARGE_INTEGER *__fastcall AzTelemetry::MiniportDevicePnPEventNotify::`vector deleting destructor'(
        LARGE_INTEGER *P,
        char a2)
{
  AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
