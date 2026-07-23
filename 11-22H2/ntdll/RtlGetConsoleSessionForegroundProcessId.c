/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1801095D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE0338];
}
