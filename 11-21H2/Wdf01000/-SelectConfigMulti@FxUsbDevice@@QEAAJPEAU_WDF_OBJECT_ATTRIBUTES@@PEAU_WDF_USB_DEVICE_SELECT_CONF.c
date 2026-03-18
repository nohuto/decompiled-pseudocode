/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0080138
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0078A20 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x1C007B47C (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C007B680 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C007E9E4 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_OBJECT_ATTRIBUTES *v7; // r12
  __int64 m_NumInterfaces; // rdx
  bool v9; // zf
  ULONG Tag; // r8d
  void *v11; // rax
  FX_POOL **v12; // r15
  unsigned __int8 v14; // r11
  __int64 v15; // rbx
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  char v17; // r11
  const void *_a1; // rax
  unsigned int v19; // ebx
  unsigned __int8 v20; // si
  unsigned __int8 v21; // r14
  _FX_DRIVER_GLOBALS *v22; // rcx
  _USB_INTERFACE_DESCRIPTOR **v23; // rbx
  int v24; // r13d
  __int64 v25; // r12
  unsigned __int8 v26; // al
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 v28; // r8
  _USB_COMMON_DESCRIPTOR *v29; // rax
  const void *v30; // rax
  int _a4; // edx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v33; // dl
  FX_POOL **ConfigRequest; // rax
  FX_POOL_TRACKER *v35; // rsi
  void *PPObject[2]; // [rsp+50h] [rbp-168h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v37; // [rsp+60h] [rbp-158h]
  unsigned __int8 *v38; // [rsp+68h] [rbp-150h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  v37 = PipesAttributes;
  v38 = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  m_Globals = this->m_Globals;
  Params->Types.MultiInterface.NumberOfConfiguredInterfaces = 0;
  v7 = PipesAttributes;
  m_NumInterfaces = this->m_NumInterfaces;
  v9 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  PPObject[0] = 0LL;
  PPObject[1] = (void *)64;
  if ( v9 )
    v11 = 0LL;
  else
    v11 = retaddr;
  v12 = FxPoolAllocator(
          m_Globals,
          &m_Globals->FxPoolFrameworks,
          (__m128i *)PPObject,
          16 * (m_NumInterfaces + 1),
          Tag,
          v11);
  if ( !v12 )
    return 3221225626LL;
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    v14 = 0;
    if ( this->m_NumInterfaces )
    {
      while ( 1 )
      {
        v15 = v14;
        SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v14], 0);
        v12[2 * (unsigned int)v15] = (FX_POOL *)SettingDescriptor;
        if ( !SettingDescriptor )
          break;
        v14 = v17 + 1;
        if ( v14 >= this->m_NumInterfaces )
          goto LABEL_23;
      }
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(
        this->m_Globals,
        2u,
        0xEu,
        0x1Du,
        WPP_FxusbDeviceKm_cpp_Traceguids,
        _a1,
        this->m_Interfaces[v15]->m_InterfaceNumber);
      v19 = -1073741811;
      goto $Done_65;
    }
  }
  else
  {
    v20 = 0;
    memset(bitArray, 0, 0xFFuLL);
    v21 = 0;
    if ( Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      while ( 1 )
      {
        v22 = this->m_Globals;
        PPObject[0] = 0LL;
        v23 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v21];
        FxObjectHandleGetPtr(v22, (unsigned __int64)*v23, 0x1204u, PPObject);
        v24 = *((unsigned __int8 *)v23 + 8);
        v25 = *((unsigned __int8 *)PPObject[0] + 146);
        v26 = bitArray[v25];
        if ( (v26 & 1) == 0 )
        {
          m_ConfigDescriptor = this->m_ConfigDescriptor;
          v28 = *((_BYTE *)v23 + 8);
          bitArray[v25] = v26 | 1;
          v29 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v25, v28);
          v12[2 * v20] = (FX_POOL *)v29;
          if ( !v29 )
          {
            v19 = -1073741811;
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qddd(
              this->m_Globals,
              v33,
              0xEu,
              0x1Eu,
              WPP_FxusbDeviceKm_cpp_Traceguids,
              ObjectHandleUnchecked,
              v24,
              v25,
              -1073741811);
            goto $Done_65;
          }
          ++v20;
        }
        if ( ++v21 >= Params->Types.SingleInterface.NumberConfiguredPipes )
        {
          v7 = v37;
          break;
        }
      }
    }
    if ( this->m_NumInterfaces > v20 )
    {
      v19 = -1073741811;
      v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, v20, 0xEu, 0x1Fu, WPP_FxusbDeviceKm_cpp_Traceguids, v30, v20, _a4, -1073741811);
      goto $Done_65;
    }
    p_NumberOfConfiguredInterfaces = v38;
  }
LABEL_23:
  ConfigRequest = FxUsbDevice::CreateConfigRequest(
                    this,
                    (FX_POOL *)this->m_ConfigDescriptor,
                    (_USBD_INTERFACE_LIST_ENTRY *)v12);
  v35 = (FX_POOL_TRACKER *)ConfigRequest;
  if ( ConfigRequest )
  {
    v19 = FxUsbDevice::SelectConfig(
            this,
            v7,
            (_FILE_OBJECT *)ConfigRequest,
            FxUrbTypeLegacy,
            p_NumberOfConfiguredInterfaces);
    FxPoolFree(v35);
  }
  else
  {
    v19 = -1073741670;
  }
$Done_65:
  FxPoolFree((FX_POOL_TRACKER *)v12);
  return v19;
}
