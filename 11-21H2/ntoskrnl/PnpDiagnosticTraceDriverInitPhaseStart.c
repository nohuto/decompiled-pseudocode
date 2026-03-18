/*
 * XREFs of PnpDiagnosticTraceDriverInitPhaseStart @ 0x1403DED94
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 */

__int64 PnpDiagnosticTraceDriverInitPhaseStart()
{
  if ( PnpEtwHandle )
    return EtwWriteStartScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Start, &PnpDriverInitPhaseActivityId, 0, 0LL);
  else
    return 0LL;
}
