/*
 * XREFs of PnpTraceStartDevice @ 0x140362A20
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140322940 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1407934D0 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140362A74 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax

  LOBYTE(v3) = 0;
  if ( a3 )
    v3 = *(_WORD *)(RtlImageNtHeader(*(_QWORD *)(a3 + 24)) + 70);
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, v3);
  return 0LL;
}
