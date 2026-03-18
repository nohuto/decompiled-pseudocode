/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C002B674
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002B6A0 (imp_WdfDeviceAddQueryInterface.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C00723D0 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxQueryInterface@@QEAA@XZ @ 0x1C002B9EC (--1FxQueryInterface@@QEAA@XZ.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  FxQueryInterface::~FxQueryInterface(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
