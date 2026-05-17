/*
 * XREFs of EtwpGetMaxLogger @ 0x180081DE8
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x180081D30 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081D70 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081DB0 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( (unsigned int)NtTraceControl(42LL, 0LL, 0LL, &EtwpMaxLoggers, 4, &v1) || v1 != 4 )
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
