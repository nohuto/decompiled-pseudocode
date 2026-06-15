/*
 * XREFs of ?LockObjectCache@CDeviceGraphObjectCache@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAPEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAPEAV?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@@Z @ 0x14001F3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall CDeviceGraphObjectCache::LockObjectCache(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2,
        _QWORD *a3,
        _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  if ( a3 )
    *a3 = (char *)a1 + 88;
  if ( a4 )
    *a4 = (char *)a1 + 136;
  v5 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  *a2 = v5;
  return a2;
}
