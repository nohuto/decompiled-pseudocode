/*
 * XREFs of SmpReadySubSys @ 0x1400026A0
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpLockKnownSubSysList @ 0x140002614 (SmpLockKnownSubSysList.c)
 *     SmpCompleteSubSysStatusChange @ 0x14000270C (SmpCompleteSubSysStatusChange.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 */

__int64 __fastcall SmpReadySubSys(__int64 a1, _OWORD *a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  SmpLockKnownSubSysList(*(_DWORD *)(a1 + 64), 0, (__int64)v5);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    *(_OWORD *)(a1 + 48) = *a2;
  else
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a2;
  SmpUnlockKnownSubSysList(v5);
  SmpCompleteSubSysStatusChange(a1);
  return RtlWakeAllConditionVariable(&SmpSubSysReadyCondition);
}
