/*
 * XREFs of SmpWaitForSingleSubSys @ 0x140003B70
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 *     SmpSbCreateSession @ 0x140002B4C (SmpSbCreateSession.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpLockKnownSubSysList @ 0x140002614 (SmpLockKnownSubSysList.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x140003C20 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x14001AFA4 (SmpWaitForStatusChange.c)
 */

__int64 __fastcall SmpWaitForSingleSubSys(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( (unsigned int)SmpCheckSubSysStatus(a1) )
    goto LABEL_5;
  SmpLockKnownSubSysList(*(_DWORD *)(v3 + 64), 1, (__int64)v8);
  if ( !(unsigned int)SmpCheckSubSysStatus(a1) )
    v2 = SmpWaitForStatusChange(v5, (*(_DWORD *)(a1 + 8) & 1) == 0, v8);
  SmpUnlockKnownSubSysList((__int64)v8, v4);
  if ( v2 >= 0 )
  {
LABEL_5:
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    {
      v2 = -1073741823;
      v6 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v6 + 2] = 1211;
      SmpGlobalLog[2 * v6 + 3] = -1073741823;
      *(_QWORD *)&SmpGlobalLog[2 * v6 + 4] = a1;
    }
  }
  return (unsigned int)v2;
}
