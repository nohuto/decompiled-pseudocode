/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x18010AA70
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_QWORD *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE0338];
}
