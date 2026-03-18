/*
 * XREFs of ExpTimeRefreshWork @ 0x140A92380
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExReleaseTimeRefreshLock @ 0x14075F930 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075F954 (ExAcquireTimeRefreshLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 */

_BOOL8 ExpTimeRefreshWork()
{
  __int64 v0; // rcx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLock(1u);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
    if ( qword_140D534E0 )
      qword_140D534E0(v0);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v2[0] = 0LL;
  v2[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v2);
}
