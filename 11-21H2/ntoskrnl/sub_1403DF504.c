/*
 * XREFs of sub_1403DF504 @ 0x1403DF504
 * Callers:
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_1403DF504(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
}
