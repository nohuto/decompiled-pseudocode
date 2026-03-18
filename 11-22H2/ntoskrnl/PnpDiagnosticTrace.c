/*
 * XREFs of PnpDiagnosticTrace @ 0x140362508
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1403622E4 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140362424 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x1403A0B38 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x140562AE4 (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140864580 (PiProcessStartSystemDevices.c)
 *     IopInitializeSystemDrivers @ 0x140B40180 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140B6E74C (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
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
