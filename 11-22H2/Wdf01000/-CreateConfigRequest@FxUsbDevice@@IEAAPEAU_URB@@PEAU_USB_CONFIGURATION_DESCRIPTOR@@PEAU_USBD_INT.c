/*
 * XREFs of ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x1C005BB3C
 * Callers:
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C005E36C (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C006078C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0060A78 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C002DA0C (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

FX_POOL **__fastcall FxUsbDevice::CreateConfigRequest(
        FxUsbDevice *this,
        FX_POOL *ConfigDesc,
        _USBD_INTERFACE_LIST_ENTRY *InterfaceList)
{
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rax
  _USBD_INTERFACE_LIST_ENTRY *_a2; // rbx
  unsigned __int16 v7; // cx
  signed int v8; // eax
  unsigned __int8 v9; // dl
  __int64 v10; // r9
  unsigned int _a3; // r10d
  unsigned __int16 v12; // di
  FX_POOL **result; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v15; // rax
  ULONG Tag; // r8d
  void **i; // r8
  int v18; // r11d
  _DWORD *v19; // r10
  int v20; // ecx
  _USB_INTERFACE_DESCRIPTOR *v21; // r9
  __m128i v22; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 size; // [rsp+80h] [rbp+18h] BYREF

  InterfaceDescriptor = InterfaceList->InterfaceDescriptor;
  _a2 = InterfaceList;
  if ( InterfaceList->InterfaceDescriptor )
  {
    v7 = 40;
    for ( size = 40; ; v7 = size )
    {
      v8 = RtlUShortAdd(v7, 24 * (InterfaceDescriptor->bNumEndpoints + 1), &size);
      if ( v8 < 0 )
        break;
      InterfaceDescriptor = *(_USB_INTERFACE_DESCRIPTOR **)(v10 + 16);
      if ( !InterfaceDescriptor )
      {
        v12 = size;
        goto LABEL_9;
      }
    }
    WPP_IFR_SF_qDd(this->m_Globals, v9, 0xEu, 0x10u, WPP_usbutil_cpp_Traceguids, _a2, _a3, v8);
    return 0LL;
  }
  else
  {
    v12 = 88;
LABEL_9:
    m_Globals = this->m_Globals;
    v15 = retaddr;
    v22 = 0LL;
    Tag = m_Globals->Tag;
    v22.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v15 = 0LL;
    result = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, v12, Tag, v15);
    if ( result )
    {
      for ( i = (void **)(result + 5); ; i = (void **)((char *)i + *(unsigned __int16 *)i) )
      {
        v21 = _a2->InterfaceDescriptor;
        if ( !_a2->InterfaceDescriptor )
          break;
        v18 = 0;
        *((_BYTE *)i + 2) = v21->bInterfaceNumber;
        *((_BYTE *)i + 3) = v21->bAlternateSetting;
        *((_DWORD *)i + 4) = v21->bNumEndpoints;
        *(_WORD *)i = 24 * (v21->bNumEndpoints + 1);
        if ( v21->bNumEndpoints )
        {
          v19 = i + 5;
          do
          {
            v20 = -(this->m_SspIsochPipeFlags != 0);
            *v19 = -1;
            ++v18;
            v19[1] = v20 & 0x100;
            v19 += 6;
          }
          while ( v18 < v21->bNumEndpoints );
        }
        _a2->Interface = (_USBD_INTERFACE_INFORMATION *)i;
        ++_a2;
      }
      *(_WORD *)result = v12;
      *((_WORD *)result + 1) = 0;
      result[3] = ConfigDesc;
    }
  }
  return result;
}
