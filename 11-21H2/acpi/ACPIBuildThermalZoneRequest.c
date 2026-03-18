/*
 * XREFs of ACPIBuildThermalZoneRequest @ 0x1C002D1C4
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C002D154 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C001A120 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00309D4 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall ACPIBuildThermalZoneRequest(__int64 a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax

  v2 = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList);
  v3 = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  if ( *(_DWORD *)(a1 + 732) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
    memset(v2, 0, 0x88uLL);
    *(_DWORD *)(v3 + 16) = 1599293264;
    *(_QWORD *)(v3 + 128) = &AcpiBuildThermalZoneList;
    *(_DWORD *)(v3 + 24) = 3;
    *(_QWORD *)(v3 + 40) = a1;
    *(_DWORD *)(v3 + 20) = 4104;
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    if ( AcpiTableLoadDelta )
      *(_DWORD *)(v3 + 20) |= 0x40u;
    v4 = (__int64 *)qword_1C0081638;
    if ( *(__int64 **)qword_1C0081638 != &AcpiBuildQueueList )
      __fastfail(3u);
    *(_QWORD *)v3 = &AcpiBuildQueueList;
    *(_QWORD *)(v3 + 8) = v4;
    *v4 = v3;
    qword_1C0081638 = v3;
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList, v2);
    return 3221226166LL;
  }
}
