/*
 * XREFs of CiReleaseProcessLock @ 0x1C000BA80
 * Callers:
 *     CiThreadReferenceTaskIndex @ 0x1C0002DB0 (CiThreadReferenceTaskIndex.c)
 *     CiProcessSuspend @ 0x1C0004AE8 (CiProcessSuspend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiReleaseProcessLock(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 16;
  *(_QWORD *)(v1 + 8) = 0LL;
  return ExReleasePushLockExclusiveEx(v1, 0LL);
}
