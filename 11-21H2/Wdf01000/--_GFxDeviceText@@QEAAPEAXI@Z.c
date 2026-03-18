/*
 * XREFs of ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x1C0061B80
 * Callers:
 *     ?_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C001FA30 (-_CleanupList@FxDeviceText@@SAHPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0032450 (imp_WdfPdoInitAddDeviceText.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceText@@QEAA@XZ @ 0x1C0072330 (--1FxDeviceText@@QEAA@XZ.c)
 */

FxDeviceText *__fastcall FxDeviceText::`scalar deleting destructor'(FxDeviceText *this)
{
  FxDeviceText::~FxDeviceText(this);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
