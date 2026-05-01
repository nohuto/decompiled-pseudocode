/*
 * XREFs of ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180047410
 * Callers:
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003C404 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampUserReleaseLockShared(struct _HAM_USER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(HampLockTrackerId, a2, 7u);
  RtlReleaseSRWLockShared((char *)a1 + 168);
}
