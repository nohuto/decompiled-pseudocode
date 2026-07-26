/*
 * XREFs of ??_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1C00D16D4 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportStartDevice *__fastcall AzTelemetry::MiniportStartDevice::`scalar deleting destructor'(
        AzTelemetry::MiniportStartDevice *P,
        char a2)
{
  AzTelemetry::MiniportStartDevice::~MiniportStartDevice(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
