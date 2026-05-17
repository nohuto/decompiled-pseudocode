/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x18006FAA0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1800F9924 (RtlpGetBootStatusPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

char RtlIsStateSeparationEnabled()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 29);
  else
    return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
