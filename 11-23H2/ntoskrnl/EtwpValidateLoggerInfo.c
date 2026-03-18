/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1407F8A08
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FF588 (EtwpTransitionToRealtime.c)
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     EtwpFlushTrace @ 0x1407F59F8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8284 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8920 (EtwpQueryTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E7F30 (EtwpIncrementTraceFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
