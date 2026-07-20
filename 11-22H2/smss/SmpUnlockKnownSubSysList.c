/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x140003800
 * Callers:
 *     SmpTerminateCSR @ 0x140001660 (SmpTerminateCSR.c)
 *     wmain @ 0x140001BC0 (wmain.c)
 *     SmpReadySubSys @ 0x1400026A0 (SmpReadySubSys.c)
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140003734 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140003B70 (SmpWaitForSingleSubSys.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x14001AD78 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x14001AFA4 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rcx

  v2 = *(_DWORD *)a1 == 1;
  v3 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v2 )
    return RtlReleaseSRWLockShared(v3);
  else
    return RtlReleaseSRWLockExclusive(v3, a2);
}
