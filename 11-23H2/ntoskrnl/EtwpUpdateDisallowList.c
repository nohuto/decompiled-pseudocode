/*
 * XREFs of EtwpUpdateDisallowList @ 0x1409E7B88
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x14083C2A8 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409F0170 (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rdi
  unsigned int updated; // ebx

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = v6;
  if ( v6 )
  {
    updated = EtwpUpdateDisallowedGuids(v6, a3, a4);
    EtwpReleaseLoggerContext(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return updated;
}
