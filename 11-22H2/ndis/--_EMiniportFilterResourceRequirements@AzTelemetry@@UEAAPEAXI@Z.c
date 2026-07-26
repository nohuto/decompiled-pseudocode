/*
 * XREFs of ??_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1C00D1564 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportFilterResourceRequirements *__fastcall AzTelemetry::MiniportFilterResourceRequirements::`vector deleting destructor'(
        AzTelemetry::MiniportFilterResourceRequirements *P,
        char a2)
{
  AzTelemetry::MiniportFilterResourceRequirements::~MiniportFilterResourceRequirements(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
