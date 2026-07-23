/*
 * XREFs of sub_14091D6C0 @ 0x14091D6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091D6C0(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221225599LL, 0LL);
}
