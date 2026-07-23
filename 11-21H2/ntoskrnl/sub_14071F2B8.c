/*
 * XREFs of sub_14071F2B8 @ 0x14071F2B8
 * Callers:
 *     sub_1402A4298 @ 0x1402A4298 (sub_1402A4298.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14071F2B8(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1680, 0LL);
}
