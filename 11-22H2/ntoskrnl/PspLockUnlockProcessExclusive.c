/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x1403613D8
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x14076FDF0 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x140841EB8 (PspAssignPrimaryToken.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AFAC8 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
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
