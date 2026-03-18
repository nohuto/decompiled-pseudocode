/*
 * XREFs of imp_WdfDriverMiniportUnload @ 0x1C00387E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00403D0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 */

void __fastcall imp_WdfDriverMiniportUnload(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  FxDriver *pDriver; // [rsp+30h] [rbp+8h] BYREF

  pDriver = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  FxDriver::Unload(pDriver->m_DriverObject.m_DriverObject);
}
