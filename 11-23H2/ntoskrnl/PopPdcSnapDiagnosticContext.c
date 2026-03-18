/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x140883678
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403D5810 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6AFA0;
  if ( qword_140C6AFA0 )
    return (__int64 (*)(void))qword_140C6AFA0();
  return result;
}
