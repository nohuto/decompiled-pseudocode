/*
 * XREFs of ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D1638 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportRemoveDeviceTelemetry *__fastcall AzTelemetry::MiniportRemoveDeviceTelemetry::`scalar deleting destructor'(
        AzTelemetry::MiniportRemoveDeviceTelemetry *P,
        char a2)
{
  AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
