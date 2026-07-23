/*
 * XREFs of sub_14097EE0C @ 0x14097EE0C
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14097EE0C(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
}
