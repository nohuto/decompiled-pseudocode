/*
 * XREFs of ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0045734
 * Callers:
 *     FxInitialize @ 0x1C0043DE4 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxPoolInitialize(_FX_DRIVER_GLOBALS *FxDriverGlobals, FX_POOL *Pool)
{
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      5u,
      0xAu,
      0x11u,
      WPP_wdfpool_cpp_Traceguids,
      Pool,
      FxDriverGlobals->FxPoolTrackingOn != 0);
  Pool->NonPagedLock.m_Lock = 0LL;
  Pool->NonPagedLock.m_DbgFlagIsInitialized = 1;
  Pool->NonPagedHead.Blink = &Pool->NonPagedHead;
  Pool->NonPagedHead.Flink = &Pool->NonPagedHead;
  Pool->PagedLock.m_Lock.Count = 1;
  Pool->PagedLock.m_Lock.Owner = 0LL;
  Pool->PagedLock.m_Lock.Contention = 0;
  KeInitializeEvent(&Pool->PagedLock.m_Lock.Event, SynchronizationEvent, 0);
  Pool->PagedLock.m_DbgFlagIsInitialized = 1;
  Pool->PagedHead.Blink = &Pool->PagedHead;
  Pool->PagedHead.Flink = &Pool->PagedHead;
  Pool->NonPagedBytes = 0LL;
  Pool->PagedBytes = 0LL;
  *(_QWORD *)&Pool->NonPagedAllocations = 0LL;
  Pool->PeakNonPagedBytes = 0LL;
  Pool->PeakPagedBytes = 0LL;
  *(_QWORD *)&Pool->PeakNonPagedAllocations = 0LL;
  return 0LL;
}
