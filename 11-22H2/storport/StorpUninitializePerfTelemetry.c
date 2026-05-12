/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C00731C0
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C006C180 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C00AAED4 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C00924F8 )
    ExFreePoolWithTag(xmmword_1C00924F8, 0x65546152u);
  if ( *(&xmmword_1C00924F8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00924F8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0092510 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0092510 + 1), 0x65546152u);
  if ( xmmword_1C0092520 )
    ExFreePoolWithTag(xmmword_1C0092520, 0x65546152u);
  if ( *(&xmmword_1C0092520 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0092520 + 1), 0x65546152u);
  if ( xmmword_1C0092530 )
    ExFreePoolWithTag(xmmword_1C0092530, 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0092540 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0092540 + 1), 0x65546152u);
  if ( xmmword_1C0092550 )
    ExFreePoolWithTag(xmmword_1C0092550, 0x65546152u);
  if ( *(&xmmword_1C0092550 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0092550 + 1), 0x65546152u);
  if ( xmmword_1C0092560 )
    ExFreePoolWithTag(xmmword_1C0092560, 0x65546152u);
}
