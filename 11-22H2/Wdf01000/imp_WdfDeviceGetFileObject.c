/*
 * XREFs of imp_WdfDeviceGetFileObject @ 0x1C000D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000309C (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *v3; // rsi
  __int64 v5; // rdi
  signed int _a1; // eax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF
  FxFileObject *pFxFO; // [rsp+58h] [rbp+20h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  v5 = 0LL;
  pDevice = 0LL;
  pFxFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  _a1 = FxFileObject::_GetFileObjectFromWdm(pDevice, pDevice->m_FileObjectClass, FileObject, &pFxFO);
  if ( _a1 >= 0 )
  {
    if ( pFxFO )
      return (WDFFILEOBJECT__ *)FxObject::GetObjectHandleUnchecked(pFxFO);
    return (WDFFILEOBJECT__ *)v5;
  }
  else
  {
    WPP_IFR_SF_D(v3, 2u, 0x12u, 0xAu, WPP_FxDeviceApiKm_cpp_Traceguids, _a1);
    return 0LL;
  }
}
