/*
 * XREFs of ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C005EB4C
 * Callers:
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C005CA18 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dddd @ 0x1C0036ED0 (WPP_IFR_SF_dddd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C005BD14 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C005BE68 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     WPP_IFR_SF_dddddd @ 0x1C005F758 (WPP_IFR_SF_dddddd.c)
 */

__int64 __fastcall FxUsbInterface::CreateSettings(FxUsbInterface *this)
{
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  __int64 v3; // r11
  unsigned __int8 *p_m_InterfaceNumber; // rdi
  unsigned __int8 v5; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 m_NumSettings; // rdx
  void *v8; // rax
  FX_POOL **v9; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 *p_bLength; // r8
  int bLength; // r8d
  int bDescriptorType; // eax
  int v15; // r9d
  _USB_COMMON_DESCRIPTOR *v16; // rax
  _USB_INTERFACE_DESCRIPTOR *v17; // rdx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // si
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rbp
  unsigned int bNumEndpoints; // r14d
  _USB_COMMON_DESCRIPTOR *v22; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v23; // r11
  __int64 v24; // rdx
  _USB_COMMON_DESCRIPTOR *v25; // r9
  int v26; // ebp
  const _GUID *_a4; // [rsp+20h] [rbp-68h]
  FxUsbValidateDescriptorOp globals; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+50h] [rbp-38h]
  __m128i v30; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  DescriptorType = FxUsbFindDescriptorType(
                     (char *)this->m_UsbDevice->m_ConfigDescriptor,
                     this->m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                     &this->m_UsbDevice->m_ConfigDescriptor->bLength,
                     4);
  p_m_InterfaceNumber = &this->m_InterfaceNumber;
  if ( DescriptorType )
  {
    v5 = *p_m_InterfaceNumber;
    do
    {
      if ( v5 == DescriptorType[1].bLength )
        ++this->m_NumSettings;
      DescriptorType = FxUsbFindDescriptorType(
                         *(char **)(v3 + 400),
                         *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + 2LL),
                         &DescriptorType->bLength + DescriptorType->bLength,
                         4);
    }
    while ( DescriptorType );
  }
  m_Globals = this->m_Globals;
  m_NumSettings = this->m_NumSettings;
  v30.m128i_i64[0] = 0LL;
  v30.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v8 = retaddr;
  else
    v8 = 0LL;
  v9 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v30, 8 * m_NumSettings, m_Globals->Tag, v8);
  this->m_Settings = (FxUsbInterfaceSetting *)v9;
  if ( v9 )
  {
    m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    p_bLength = &m_ConfigDescriptor->bLength;
    while ( 1 )
    {
      v16 = FxUsbFindDescriptorType((char *)m_ConfigDescriptor, m_ConfigDescriptor->wTotalLength, p_bLength, 4);
      v17 = (_USB_INTERFACE_DESCRIPTOR *)v16;
      if ( !v16 )
        break;
      bLength = v16[1].bLength;
      if ( *p_m_InterfaceNumber == (_BYTE)bLength )
      {
        bDescriptorType = v16[1].bDescriptorType;
        v15 = this->m_NumSettings;
        if ( (unsigned __int8)bDescriptorType >= (unsigned __int8)v15 )
        {
          WPP_IFR_SF_dddd(
            this->m_Globals,
            2u,
            0xEu,
            0xBu,
            WPP_FxUsbInterface_cpp_Traceguids,
            bLength,
            v15,
            bDescriptorType,
            -1073741808);
          return 3221225488LL;
        }
        this->m_Settings[bDescriptorType].InterfaceDescriptor = v17;
      }
      p_bLength = &v17->bLength + v17->bLength;
      m_ConfigDescriptor = this->m_UsbDevice->m_ConfigDescriptor;
    }
    v18 = this->m_NumSettings;
    v19 = 0;
    if ( !v18 )
      return 0LL;
    while ( 1 )
    {
      InterfaceDescriptor = this->m_Settings[v19].InterfaceDescriptor;
      if ( !InterfaceDescriptor )
        break;
      bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
      if ( (_BYTE)bNumEndpoints )
      {
        v22 = FxUsbFindDescriptorType(
                (char *)this->m_UsbDevice->m_ConfigDescriptor,
                this->m_UsbDevice->m_ConfigDescriptor->wTotalLength,
                &InterfaceDescriptor->bLength,
                4);
        v25 = (_USB_COMMON_DESCRIPTOR *)(&v23->bLength + v24);
        if ( v22 )
          v25 = v22;
        v26 = FxUsbValidateDescriptorType(
                this->m_Globals,
                v23,
                (char *)InterfaceDescriptor,
                v25,
                5,
                7uLL,
                globals,
                bNumEndpoints);
        if ( v26 < 0 )
        {
          WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbInterface_cpp_Traceguids, *p_m_InterfaceNumber, v26);
          return (unsigned int)v26;
        }
      }
      v18 = this->m_NumSettings;
      if ( ++v19 >= v18 )
        return 0LL;
    }
    WPP_IFR_SF_dddd(
      this->m_Globals,
      2u,
      0xEu,
      0xCu,
      WPP_FxUsbInterface_cpp_Traceguids,
      *p_m_InterfaceNumber,
      v18,
      v19,
      -1073741808);
    return 3221225488LL;
  }
  else
  {
    WPP_IFR_SF_dddddd(
      this->m_Globals,
      this->m_Protocol,
      *p_m_InterfaceNumber,
      this->m_NumSettings,
      _a4,
      this->m_NumSettings,
      *p_m_InterfaceNumber,
      this->m_Protocol,
      this->m_Class,
      this->m_SubClass,
      v29);
    return 3221225626LL;
  }
}
