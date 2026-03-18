/*
 * XREFs of ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0060A78
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0058FF0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x1C005BB3C (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C005F048 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigSingle(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipeAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  const void *_a1; // rax
  int _a2; // r8d
  FxUsbInterface **m_Interfaces; // r11
  const void *ObjectHandleUnchecked; // rax
  __int64 v11; // r11
  FX_POOL **ConfigRequest; // rax
  FX_POOL_TRACKER *v13; // rsi
  int v14; // edi
  _USBD_INTERFACE_LIST_ENTRY listEntry[2]; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)&Params->Types.Descriptor.ConfigurationDescriptor = 0LL;
  if ( this->m_NumInterfaces > 1u )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qdd(this->m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, _a2, 0xC000000D);
    return 3221225485LL;
  }
  listEntry[1].Interface = 0LL;
  m_Interfaces = this->m_Interfaces;
  *(_OWORD *)&listEntry[0].Interface = 0LL;
  listEntry[0].InterfaceDescriptor = FxUsbInterface::GetSettingDescriptor(*m_Interfaces, 0);
  if ( !listEntry[0].InterfaceDescriptor )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xEu,
      0x1Cu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(unsigned __int8 *)(*(_QWORD *)v11 + 146LL));
    return 3221225485LL;
  }
  ConfigRequest = FxUsbDevice::CreateConfigRequest(this, (FX_POOL *)this->m_ConfigDescriptor, listEntry);
  v13 = (FX_POOL_TRACKER *)ConfigRequest;
  if ( ConfigRequest )
  {
    v14 = FxUsbDevice::SelectConfig(this, PipeAttributes, (_FILE_OBJECT *)ConfigRequest, FxUrbTypeLegacy, 0LL);
    if ( v14 >= 0 )
    {
      Params->Types.SingleInterface.NumberConfiguredPipes = (*this->m_Interfaces)->m_NumberOfConfiguredPipes;
      Params->Types.Descriptor.InterfaceDescriptors = (_USB_INTERFACE_DESCRIPTOR **)FxObject::GetObjectHandleUnchecked(*this->m_Interfaces);
    }
    FxPoolFree(v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v14;
}
