/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C006FDC4
 * Callers:
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C001E730 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceInterface@@QEAA@XZ @ 0x1C0072498 (--1FxDeviceInterface@@QEAA@XZ.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  FxDeviceInterface::~FxDeviceInterface(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
