/*
 * XREFs of EtwpGetMaxLogger @ 0x180081778
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x1800816C0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081700 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081740 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
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
