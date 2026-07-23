/*
 * XREFs of sub_1402F7280 @ 0x1402F7280
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_1402F7280(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1360, 0LL);
}
