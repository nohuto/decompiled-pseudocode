/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C00387A2
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00070E0 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0008230 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C00387CE (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C00699AC (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0016E64 (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this, __int64 a2)
{
  MxTimer::~MxTimer(&this->Timer, a2);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
