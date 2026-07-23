/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140361BC8
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14076FAD0 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     NtGetNextProcess @ 0x1407D4930 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x140840428 (PspAssignPrimaryToken.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFC18 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1080);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}
