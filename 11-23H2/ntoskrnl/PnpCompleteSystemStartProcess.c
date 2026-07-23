/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1403A1008
 * Callers:
 *     PnpDeviceActionWorker @ 0x1403595D0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x140362CF8 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1407CF244 (IopCallDriverReinitializationRoutines.c)
 *     PpReleaseBootDDB @ 0x140843C34 (PpReleaseBootDDB.c)
 *     EtwWriteEndScenario @ 0x140843CD0 (EtwWriteEndScenario.c)
 *     PiInitReleaseCachedGroupInformation @ 0x140843D88 (PiInitReleaseCachedGroupInformation.c)
 *     KseShimDatabaseBootRelease @ 0x140843DC4 (KseShimDatabaseBootRelease.c)
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
