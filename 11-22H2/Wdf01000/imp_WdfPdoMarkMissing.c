/*
 * XREFs of imp_WdfPdoMarkMissing @ 0x1C0021C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C00266A4 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 */

int __fastcall imp_WdfPdoMarkMissing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  int result; // eax
  FxPkgPdo *pPkgPdo; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  pDevice = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             Device,
             "imp_WdfPdoMarkMissing",
             &pPkgPdo,
             &pFxDriverGlobals,
             &pDevice);
  if ( result >= 0 )
    return FxChildList::UpdateDeviceAsMissing(pPkgPdo->m_OwningChildList, pDevice);
  return result;
}
