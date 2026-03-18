/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive2 @ 0x140415530
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x1403C9820 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     ExAcquireFastResourceExclusive2 @ 0x1404129E0 (ExAcquireFastResourceExclusive2.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive2(ULONG_PTR a1, __int64 a2)
{
  return ExAcquireFastResourceExclusive2(a1, a2, a2);
}
