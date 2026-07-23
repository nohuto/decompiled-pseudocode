/*
 * XREFs of sub_1405AB994 @ 0x1405AB994
 * Callers:
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall sub_1405AB994(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
}
