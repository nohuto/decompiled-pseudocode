/*
 * XREFs of sub_1405E07FC @ 0x1405E07FC
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall sub_1405E07FC(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
