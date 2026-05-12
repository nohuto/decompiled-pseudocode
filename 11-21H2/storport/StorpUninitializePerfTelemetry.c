/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C00645E4
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C005EC20 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C0090374 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C0079758 )
    ExFreePoolWithTag(xmmword_1C0079758, 0x65546152u);
  if ( *(&xmmword_1C0079758 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0079758 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0079770 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0079770 + 1), 0x65546152u);
  if ( xmmword_1C0079780 )
    ExFreePoolWithTag(xmmword_1C0079780, 0x65546152u);
  if ( *(&xmmword_1C0079780 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0079780 + 1), 0x65546152u);
  if ( xmmword_1C0079790 )
    ExFreePoolWithTag(xmmword_1C0079790, 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C00797A0 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C00797A0 + 1), 0x65546152u);
  if ( xmmword_1C00797B0 )
    ExFreePoolWithTag(xmmword_1C00797B0, 0x65546152u);
  if ( *(&xmmword_1C00797B0 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00797B0 + 1), 0x65546152u);
  if ( xmmword_1C00797C0 )
    ExFreePoolWithTag(xmmword_1C00797C0, 0x65546152u);
}
