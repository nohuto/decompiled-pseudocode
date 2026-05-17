/*
 * XREFs of RtlGetActiveConsoleId @ 0x180085FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((unsigned int *)NtCurrentPeb()->SharedData + 1);
  else
    return MEMORY[0x7FFE02D8];
}
