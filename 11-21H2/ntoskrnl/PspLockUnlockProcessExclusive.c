/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x14024BA3C
 * Callers:
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PspAssignPrimaryToken @ 0x140847028 (PspAssignPrimaryToken.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AE968 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 1080);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}
