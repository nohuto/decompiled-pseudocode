/*
 * XREFs of CmpQuotaWarningWorker @ 0x140911AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221226070LL, 0LL);
}
