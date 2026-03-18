/*
 * XREFs of imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C0021CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004FCE8 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfPdoRemoveEjectionRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  int PdoPackageFromDeviceHandle; // eax
  FxRelatedDeviceList *m_EjectionDeviceList; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  PdoPackageFromDeviceHandle = GetPdoPackageFromDeviceHandle(
                                 (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
                                 Device,
                                 "imp_WdfPdoRemoveEjectionRelationsPhysicalDevice",
                                 &pPkgPdo,
                                 &pFxDriverGlobals,
                                 0LL);
  if ( !PhysicalDevice )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( PdoPackageFromDeviceHandle >= 0 )
  {
    m_EjectionDeviceList = pPkgPdo->m_EjectionDeviceList;
    if ( m_EjectionDeviceList )
      FxTransactionedList::SearchForAndRemove(m_EjectionDeviceList, pPkgPdo->m_Globals, PhysicalDevice);
  }
}
