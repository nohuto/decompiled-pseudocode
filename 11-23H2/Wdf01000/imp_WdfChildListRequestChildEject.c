/*
 * XREFs of imp_WdfChildListRequestChildEject @ 0x1C0021150
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_DD @ 0x1C0020804 (WPP_IFR_SF_DD.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0024874 (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfChildListRequestChildEject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  unsigned __int8 v5; // dl
  FxChildList *v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDevice *DeviceFromId; // rax
  FxDevice *v9; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  FxObject *v11; // rcx
  const void *ObjectHandleUnchecked; // rax
  _WDF_CHILD_RETRIEVE_INFO info; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxChildList *pList; // [rsp+80h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v6 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x33u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v6 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( v6->m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize )
  {
    *(&info.Size + 1) = 0;
    info.Size = 40;
    memset(&info.AddressDescription, 0, 24);
    info.IdentificationDescription = IdentificationDescription;
    DeviceFromId = FxChildList::GetDeviceFromId(v6, &info);
    v9 = DeviceFromId;
    if ( m_Globals->FxVerboseOn )
    {
      if ( DeviceFromId )
        DeviceFromId = (FxDevice *)FxObject::GetObjectHandleUnchecked(DeviceFromId);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x35u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, DeviceFromId);
    }
    if ( v9 )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(v9);
      if ( SafePhysicalDevice )
      {
        IoRequestDeviceEject(SafePhysicalDevice);
        return 1;
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v11);
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x36u, WPP_FxChildListAPI_cpp_Traceguids, ObjectHandleUnchecked);
    }
  }
  else
  {
    WPP_IFR_SF_DD(
      m_Globals,
      v5,
      0xCu,
      0x34u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      v6->m_IdentificationDescriptionSize);
  }
  return 0;
}
