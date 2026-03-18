/*
 * XREFs of ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007C358
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C0077950 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqd @ 0x1C00572AC (WPP_IFR_SF_dqd.c)
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C007B654 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 *     ?FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@_K@Z @ 0x1C007B6FC (-FxUsbValidateConfigDescriptorHeaders@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIP.c)
 *     ?FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX2J_KW4FxUsbValidateDescriptorOp@@K@Z @ 0x1C007B7A8 (-FxUsbValidateDescriptorType@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAX.c)
 *     ??0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007E224 (--0FxUsbInterface@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@PEAU_USB_INTERFACE_DESCRIPTOR@@.c)
 *     ?CreateSettings@FxUsbInterface@@QEAAJXZ @ 0x1C007E4DC (-CreateSettings@FxUsbInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxUsbDevice::CreateInterfaces(FxUsbDevice *this)
{
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 wTotalLength; // r13
  int _a1; // eax
  unsigned __int8 v6; // r15
  unsigned int v7; // edi
  int v9; // eax
  int Settings; // esi
  __int64 bNumInterfaces; // rcx
  unsigned __int64 v12; // r9
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  _USB_CONFIGURATION_DESCRIPTOR *v16; // rdi
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _WDF_OBJECT_ATTRIBUTES *v18; // r11
  _USB_INTERFACE_DESCRIPTOR *v19; // r12
  __int64 bInterfaceNumber; // rcx
  unsigned __int8 v21; // al
  FxPoolTypeOrPoolFlags v22; // xmm1
  _FX_DRIVER_GLOBALS *v23; // rcx
  FxUsbInterface *v24; // rax
  FxObject *v25; // rax
  FxUsbInterface *v26; // rdi
  __int64 v27; // rcx
  int m_NumInterfaces; // eax
  int v29; // ecx
  FxUsbValidateDescriptorOp _a2; // [rsp+30h] [rbp-D0h]
  FxPoolTypeOrPoolFlags v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 descCountBitMap[256]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  m_ConfigDescriptor = this->m_ConfigDescriptor;
  m_Globals = this->m_Globals;
  wTotalLength = m_ConfigDescriptor->wTotalLength;
  _a1 = FxUsbValidateConfigDescriptorHeaders(m_Globals, m_ConfigDescriptor, wTotalLength);
  v6 = 0;
  v7 = _a1;
  if ( _a1 >= 0 )
  {
    v9 = FxUsbValidateDescriptorType(
           m_Globals,
           this->m_ConfigDescriptor,
           (char *)this->m_ConfigDescriptor,
           &this->m_ConfigDescriptor->bLength + this->m_ConfigDescriptor->wTotalLength,
           4,
           9uLL,
           _a2,
           0);
    Settings = v9;
    if ( v9 >= 0 )
    {
      bNumInterfaces = this->m_ConfigDescriptor->bNumInterfaces;
      if ( (_BYTE)bNumInterfaces )
        v12 = 8 * bNumInterfaces;
      else
        v12 = 8LL;
      Tag = m_Globals->Tag;
      v14 = retaddr;
      *(_QWORD *)&v31.UsePoolType = 0LL;
      v31.u.PoolFlags = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v14 = 0LL;
      v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v31, v12, Tag, v14);
      v16 = this->m_ConfigDescriptor;
      this->m_Interfaces = (FxUsbInterface **)v15;
      if ( v15 )
      {
        this->m_NumInterfaces = v16->bNumInterfaces;
        memset(descCountBitMap, 0, 0xFFuLL);
        DescriptorType = FxUsbFindDescriptorType((char *)v16, v16->wTotalLength, &v16->bLength, 4);
        v18 = 0LL;
        v19 = (_USB_INTERFACE_DESCRIPTOR *)DescriptorType;
        if ( DescriptorType )
        {
          do
          {
            if ( v6 >= v16->bNumInterfaces )
              break;
            bInterfaceNumber = v19->bInterfaceNumber;
            v21 = descCountBitMap[bInterfaceNumber];
            if ( (v21 & 1) == 0 )
            {
              *(_QWORD *)&v31.UsePoolType = 0LL;
              v31.u.PoolFlags = 64LL;
              v22 = v31;
              descCountBitMap[bInterfaceNumber] = v21 | 1;
              v23 = this->m_Globals;
              v31 = v22;
              v24 = (FxUsbInterface *)FxObjectHandleAllocCommon(
                                        v23,
                                        &v31,
                                        0x98uLL,
                                        0,
                                        v18,
                                        (unsigned __int16)v18,
                                        FxObjectTypeExternal);
              if ( !v24
                || (FxUsbInterface::FxUsbInterface(v24, m_Globals, this, v19), (v26 = (FxUsbInterface *)v25) == 0LL) )
              {
                Settings = -1073741670;
                WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxUsbDevice_cpp_Traceguids, v6, -1073741670);
                return (unsigned int)Settings;
              }
              Settings = FxObject::Commit(v25, 0LL, 0LL, this, 1u);
              if ( Settings < 0 )
                return (unsigned int)Settings;
              Settings = FxUsbInterface::CreateSettings(v26);
              if ( Settings < 0 )
                return (unsigned int)Settings;
              v27 = v6++;
              this->m_Interfaces[v27] = v26;
              v16 = this->m_ConfigDescriptor;
            }
            v19 = (_USB_INTERFACE_DESCRIPTOR *)FxUsbFindDescriptorType(
                                                 (char *)v16,
                                                 wTotalLength,
                                                 &v19->bLength + v19->bLength,
                                                 4);
          }
          while ( v19 );
          if ( v6 )
            goto LABEL_26;
        }
        m_NumInterfaces = this->m_NumInterfaces;
        if ( (_BYTE)m_NumInterfaces )
        {
          Settings = -1073741808;
          WPP_IFR_SF_dqd(
            this->m_Globals,
            2u,
            0xEu,
            0xEu,
            WPP_FxUsbDevice_cpp_Traceguids,
            m_NumInterfaces,
            v16,
            -1073741808);
        }
        else
        {
LABEL_26:
          if ( v19 && this->m_NumInterfaces == (_BYTE)v18 )
          {
            WPP_IFR_SF_(this->m_Globals, 3u, 0xEu, 0xFu, WPP_FxUsbDevice_cpp_Traceguids);
            this->m_MismatchedInterfacesInConfigDescriptor = 1;
          }
          else
          {
            v29 = this->m_NumInterfaces;
            if ( v6 < (unsigned __int8)v29 )
            {
              WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbDevice_cpp_Traceguids, v29, v6);
              this->m_NumInterfaces = v6;
            }
          }
        }
      }
      else
      {
        Settings = -1073741670;
        WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbDevice_cpp_Traceguids, v16->bNumInterfaces, -1073741670);
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0xBu, WPP_FxUsbDevice_cpp_Traceguids, v9);
    }
    return (unsigned int)Settings;
  }
  else
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0xAu, WPP_FxUsbDevice_cpp_Traceguids, _a1);
    return v7;
  }
}
