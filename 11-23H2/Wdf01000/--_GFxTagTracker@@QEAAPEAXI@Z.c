/*
 * XREFs of ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0045FBC
 * Callers:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C00053A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008570 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0077108 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C004779C (--1FxTagTracker@@QEAA@XZ.c)
 */

FxTagTracker *__fastcall FxTagTracker::`scalar deleting destructor'(FxTagTracker *this)
{
  FxTagTracker::~FxTagTracker(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
