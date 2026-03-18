/*
 * XREFs of ??$?4VCManipulationTelemetryData@InteractionLatencyTelemetry@@@?$ComPtr@UIManipulationTelemetryData@InteractionLatencyTelemetry@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationTelemetryData@InteractionLatencyTelemetry@@@Z @ 0x1801F1794
 * Callers:
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTeleme.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<InteractionLatencyTelemetry::IManipulationTelemetryData>::operator=<InteractionLatencyTelemetry::CManipulationTelemetryData>(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v4; // rcx

  if ( a2 )
    (**a2)(a2);
  v4 = *a1;
  *a1 = (__int64)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
