/*
 * XREFs of sub_1405AB970 @ 0x1405AB970
 * Callers:
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_14097D688 @ 0x14097D688 (sub_14097D688.c)
 *     sub_14097D7F8 @ 0x14097D7F8 (sub_14097D7F8.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall sub_1405AB970(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
