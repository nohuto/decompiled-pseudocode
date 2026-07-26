/*
 * XREFs of ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x1C00D1474 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 */

AzTelemetry::MiniportDriverUnload *__fastcall AzTelemetry::MiniportDriverUnload::`scalar deleting destructor'(
        AzTelemetry::MiniportDriverUnload *P,
        char a2)
{
  AzTelemetry::MiniportDriverUnload::~MiniportDriverUnload(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
