/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402031E0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x1403527D0 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140352838 (PpmPerfApplyDomainState.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D6D0 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeCpuPartitionMoveCpus @ 0x140575304 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140584F04 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x1405867F0 (PpmUpdateIdleDomains.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AE9A4 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409AFAC0 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KiAndAffinityEx @ 0x140252500 (KiAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1402C0160 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int64 a1, __int64 a2)
{
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KiAndAffinityEx(a1, a2, v5, 32LL);
  return KeIsEqualAffinityEx(a1, v5);
}
