/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x18007A8E0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1800F96C4 (RtlpGetBootStatusPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 29);
  else
    return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
