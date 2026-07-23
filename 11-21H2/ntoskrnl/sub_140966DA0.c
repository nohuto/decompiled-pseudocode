/*
 * XREFs of sub_140966DA0 @ 0x140966DA0
 * Callers:
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_140966DA0(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
}
