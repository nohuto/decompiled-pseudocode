/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0cc657885d15aa5247ecddb70b2ffb21___ @ 0x180064FEC
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDev.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800C6874 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0cc657885d15aa5247ecddb70b2ffb21___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *i; // rdi
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                  + 32LL))(
           g_DeviceGraphManager,
           *i,
           *a4,
           0LL,
           0LL);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
        (unsigned int)v8);
    }
  }
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a1, a4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a4);
  return a1;
}
