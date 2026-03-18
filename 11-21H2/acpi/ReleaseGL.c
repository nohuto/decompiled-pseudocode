/*
 * XREFs of ReleaseGL @ 0x1C0066FF0
 * Callers:
 *     ParseAcquire @ 0x1C0017EA0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0024F10 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))ghGlobalLock)(5LL, 1LL, qword_1C0082828);
  return result;
}
