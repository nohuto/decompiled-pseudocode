/*
 * XREFs of PopPdcSnapDiagnosticContext @ 0x1408838B8
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403D59F0 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcSnapDiagnosticContext())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6AFA0;
  if ( qword_140C6AFA0 )
    return (__int64 (*)(void))qword_140C6AFA0();
  return result;
}
