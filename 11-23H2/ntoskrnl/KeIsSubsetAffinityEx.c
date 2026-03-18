/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402031E0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeStartThread @ 0x1402BE0D8 (KeStartThread.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x140352630 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140352698 (PpmPerfApplyDomainState.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D4F0 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AADAC (KeSetUserGroupAffinityThread.c)
 *     KeCpuPartitionMoveCpus @ 0x140574DC4 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140584A14 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x140586300 (PpmUpdateIdleDomains.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AE7A4 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409AF8C0 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KiAndAffinityEx @ 0x140252440 (KiAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1402BFED0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int64 a1, __int64 a2)
{
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KiAndAffinityEx(a1, a2, v5, 32LL);
  return KeIsEqualAffinityEx(a1, v5);
}
