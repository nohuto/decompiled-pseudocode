/*
 * XREFs of sub_14030B820 @ 0x14030B820
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_140709D14 @ 0x140709D14 (sub_140709D14.c)
 *     sub_14070A1B8 @ 0x14070A1B8 (sub_14070A1B8.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_14097D688 @ 0x14097D688 (sub_14097D688.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14030B820(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1384) |= 1u;
}
