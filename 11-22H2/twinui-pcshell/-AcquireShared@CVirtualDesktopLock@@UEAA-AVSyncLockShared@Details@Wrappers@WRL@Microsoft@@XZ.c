/*
 * XREFs of ?AcquireShared@CVirtualDesktopLock@@UEAA?AVSyncLockShared@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180176CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall CVirtualDesktopLock::AcquireShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  *a2 = v2;
  return a2;
}
