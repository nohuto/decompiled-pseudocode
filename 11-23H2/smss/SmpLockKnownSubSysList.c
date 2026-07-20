/*
 * XREFs of SmpLockKnownSubSysList @ 0x140002614
 * Callers:
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpReadySubSys @ 0x1400026A0 (SmpReadySubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140003B70 (SmpWaitForSingleSubSys.c)
 *     SmpDeleteSubSys @ 0x14001AD78 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x14001AFA4 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpLockKnownSubSysList(char a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = v3;
    *(_DWORD *)a3 = a2;
  }
  v4 = v3 + 16;
  if ( a2 == 1 )
    return RtlAcquireSRWLockShared(v4);
  else
    return RtlAcquireSRWLockExclusive(v4);
}
