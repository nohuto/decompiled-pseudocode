/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1409F8178
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     ZwSetSystemTime @ 0x14041EE40 (ZwSetSystemTime.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     ExpReadTimeZoneInformation @ 0x1409F8048 (ExpReadTimeZoneInformation.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rdi
  PVOID PoolWithTag; // rax

  v1 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3F0uLL, 0x5A547845u);
  ServerSiloGlobals[157] = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3F0uLL);
    *(_DWORD *)(ServerSiloGlobals[157] + 432LL) = -1;
    ExpReadTimeZoneInformation((__int64)L"ActiveTimeBias", -1, ServerSiloGlobals[157] + 436LL);
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(1);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    ZwSetSystemTime(0LL, 0LL);
  }
  else
  {
    v1 = -1073741670;
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
