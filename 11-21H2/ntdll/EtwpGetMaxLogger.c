/*
 * XREFs of EtwpGetMaxLogger @ 0x180087B68
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x180087AB0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180087AF0 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180087B30 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h]

  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( (unsigned int)NtTraceControl(42LL, 0LL, 0LL) || v1 != 4 )
    {
      result = 80LL;
      EtwpMaxLoggers = 80;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
