/*
 * XREFs of ??_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D13C0 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportAddDeviceTelemetry *__fastcall AzTelemetry::MiniportAddDeviceTelemetry::`scalar deleting destructor'(
        AzTelemetry::MiniportAddDeviceTelemetry *P,
        char a2)
{
  AzTelemetry::MiniportAddDeviceTelemetry::~MiniportAddDeviceTelemetry(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
