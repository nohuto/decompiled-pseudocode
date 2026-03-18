/*
 * XREFs of ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C005F080
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0057D80 (imp_WdfUsbInterfaceSelectSetting.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C005F404 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C005F550 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C000F45A (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C005364C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C005969C (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C005C7E4 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C005F678 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0089A70 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxUsbInterface::SelectSetting(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _URB *Urb)
{
  _URB *v3; // r15
  unsigned __int8 v5; // dl
  unsigned int v6; // edi
  int _a2; // eax
  int v8; // esi
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v12; // rax
  FX_POOL **v13; // r12
  unsigned __int8 v14; // r13
  _FX_DRIVER_GLOBALS *v15; // rcx
  FxUsbPipe *v16; // rax
  FxIoTarget *v17; // rax
  FxIoTarget *v18; // r15
  signed int v19; // eax
  unsigned __int16 v20; // r9
  FxObject **v21; // rbx
  __int64 v22; // rcx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE pendHead[312]; // [rsp+50h] [rbp-B8h] OVERLAPPED BYREF
  void *retaddr; // [rsp+1D0h] [rbp+C8h]

  v3 = Urb;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&pendHead[24], this->m_Globals, 0LL, 0LL);
  v6 = 0;
  *(_OWORD *)&pendHead[8] = 0LL;
  if ( !this->m_ConfiguredPipes || this->m_CurAlternateSetting != v3->UrbSelectInterface.Interface.AlternateSetting )
  {
    *(_QWORD *)&pendHead[16] = &pendHead[8];
    *(_QWORD *)&pendHead[8] = &pendHead[8];
    _a2 = v3->UrbHeader.Length;
    if ( (unsigned __int16)_a2 < 0x18u )
    {
      v6 = -1073741811;
      WPP_IFR_SF_DDd(this->m_Globals, v5, 0xEu, 0x10u, WPP_FxUsbInterface_cpp_Traceguids, _a2, 24, -1073741811);
      goto LABEL_37;
    }
    v8 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&pendHead[304], this->m_UsbDevice);
    if ( v8 < 0 )
    {
LABEL_36:
      v6 = v8;
      goto LABEL_37;
    }
    LODWORD(v9) = ((unsigned int)v3->UrbSelectInterface.Interface.Length - 24) / 0x18;
    if ( (_BYTE)v9 )
      v10 = 8LL * (unsigned __int8)v9;
    else
      v10 = 8LL;
    m_Globals = this->m_Globals;
    v12 = retaddr;
    options.Timeout = 0LL;
    *(_QWORD *)pendHead = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v12 = 0LL;
    v13 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            (__m128i *)&options.Timeout,
            v10,
            m_Globals->Tag,
            v12);
    if ( !v13 )
    {
      v8 = -1073741670;
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbInterface_cpp_Traceguids, 0xC000009A);
      goto LABEL_36;
    }
    v14 = 0;
    if ( (_BYTE)v9 )
    {
      while ( 1 )
      {
        v15 = this->m_Globals;
        options.Timeout = 0LL;
        *(_QWORD *)pendHead = 64LL;
        v16 = (FxUsbPipe *)FxObjectHandleAllocCommon(
                             v15,
                             (FxPoolTypeOrPoolFlags *)&options.Timeout,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v16 )
        {
          FxUsbPipe::FxUsbPipe(v16, this->m_Globals, this->m_UsbDevice);
          v18 = v17;
        }
        else
        {
          v18 = 0LL;
        }
        v13[v14] = (FX_POOL *)v18;
        if ( !v18 )
          break;
        v19 = FxIoTarget::Init(v18, this->m_UsbDevice->m_DeviceBase);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 19;
          goto LABEL_29;
        }
        v19 = FxObject::Commit(v18, PipesAttributes, 0LL, (_FX_DRIVER_GLOBALS *)this, 1u);
        v8 = v19;
        if ( v19 < 0 )
        {
          v20 = 20;
          goto LABEL_29;
        }
        if ( ++v14 >= (unsigned __int8)v9 )
        {
          v3 = Urb;
          goto LABEL_22;
        }
      }
      v19 = -1073741670;
      v8 = -1073741670;
      v20 = 18;
LABEL_29:
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v20, WPP_FxUsbInterface_cpp_Traceguids, v19);
    }
    else
    {
LABEL_22:
      if ( this->m_ConfiguredPipes )
        FxUsbDevice::CleanupInterfacePipesAndDelete(this->m_UsbDevice, (_FX_DRIVER_GLOBALS *)this);
      options.Timeout = 0x500000010LL;
      *(_QWORD *)pendHead = -20000000LL;
      FxFormatUsbRequest(*(FxRequestBase **)&pendHead[304], (_FILE_OBJECT *)v3, FxUrbTypeLegacy, 0LL);
      v8 = FxIoTarget::SubmitSync(
             this->m_UsbDevice,
             *(FxRequestBase **)&pendHead[304],
             (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
             0LL);
      if ( v8 >= 0 )
      {
        this->m_NumberOfConfiguredPipes = v9;
        this->m_ConfiguredPipes = (FxUsbPipe **)v13;
        FxUsbInterface::SetInfo(this, &v3->UrbSelectInterface.Interface);
        goto LABEL_36;
      }
      if ( !(_BYTE)v9 )
      {
LABEL_35:
        FxPoolFree((FX_POOL_TRACKER *)v13);
        goto LABEL_36;
      }
    }
    v21 = (FxObject **)v13;
    v9 = (unsigned __int8)v9;
    do
    {
      if ( *v21 )
      {
        FxObject::ClearEvtCallbacks(*v21);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 48LL))(v22);
      }
      ++v21;
      --v9;
    }
    while ( v9 );
    goto LABEL_35;
  }
LABEL_37:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&pendHead[24]);
  return v6;
}
