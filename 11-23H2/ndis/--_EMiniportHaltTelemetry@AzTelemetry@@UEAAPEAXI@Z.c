/*
 * XREFs of ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1C00D17E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C001447C (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportHaltTelemetry *__fastcall AzTelemetry::MiniportHaltTelemetry::`vector deleting destructor'(
        AzTelemetry::MiniportHaltTelemetry *P,
        char a2)
{
  AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
