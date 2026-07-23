/*
 * XREFs of sub_140911AE0 @ 0x140911AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140911AE0(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221226070LL, 0LL);
}
