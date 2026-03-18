/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403D2178
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1402D21B8 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406DE8A0 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x14084DB84 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x14084DC6C (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14084DCF8 (PiInitReleaseCachedGroupInformation.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
