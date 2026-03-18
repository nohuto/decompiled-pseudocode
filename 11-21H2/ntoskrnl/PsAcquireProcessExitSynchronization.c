/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x140711F20
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection(a1 + 139) == 0 ? 0xC000010A : 0;
}
