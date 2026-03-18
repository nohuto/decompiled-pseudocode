/*
 * XREFs of imp_WdfPdoGetParent @ 0x1C001C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C001C314 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 */

WDFDEVICE__ *__fastcall imp_WdfPdoGetParent(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  int _a1; // eax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  pDevice = 0LL;
  _a1 = GetPdoPackageFromDeviceHandle(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
          Device,
          "imp_WdfPdoGetParent",
          &pPkgPdo,
          &pFxDriverGlobals,
          &pDevice);
  if ( _a1 >= 0 )
    return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pDevice->m_ParentDevice);
  WPP_IFR_SF_d(pFxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxDevicePdoAPI_cpp_Traceguids, _a1);
  return 0LL;
}
