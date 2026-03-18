/*
 * XREFs of imp_WdfWdmDriverGetWdfDriverHandle @ 0x1C0038A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDRIVER__ *__fastcall imp_WdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  FxObject **DriverObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  DriverObjectExtension = (FxObject **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  return (WDFDRIVER__ *)FxObject::GetObjectHandleUnchecked(*DriverObjectExtension);
}
