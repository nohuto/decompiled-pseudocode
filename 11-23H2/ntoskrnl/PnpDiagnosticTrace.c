/*
 * XREFs of PnpDiagnosticTrace @ 0x140362B58
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140362934 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140362A74 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x1403A0E28 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x140562A44 (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1408641C0 (PiProcessStartSystemDevices.c)
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140B6D2E0 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWrite(v3, EventDescriptor, 0LL, UserDataCount, UserData);
  else
    return 0;
}
