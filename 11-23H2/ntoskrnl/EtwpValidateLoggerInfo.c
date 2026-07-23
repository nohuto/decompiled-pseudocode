/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1407F8CD8
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FFAF8 (EtwpTransitionToRealtime.c)
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     EtwpFlushTrace @ 0x1407F5CC8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8BF0 (EtwpQueryTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E81C0 (EtwpIncrementTraceFile.c)
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
