/*
 * XREFs of ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1800C60D0
 * Callers:
 *     ?GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z @ 0x1800C60A0 (-GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z.c)
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E6000 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1800C6188 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataForCallingProcess(
        CApplicationViewBroker *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  unsigned __int16 **v4; // rdx
  int CallingProcessAppId; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rbx
  __int64 AddressOf; // rax
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  __int64 v11; // [rsp+28h] [rbp-41h] BYREF
  __int64 v12; // [rsp+30h] [rbp-39h]
  __int64 v13; // [rsp+38h] [rbp-31h]
  _OWORD v14[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v15; // [rsp+60h] [rbp-9h]
  int v16; // [rsp+68h] [rbp-1h]

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 3LL;
  *((_DWORD *)a2 + 10) = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v11);
  v12 = -1LL;
  v13 = -1LL;
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&v11, v4);
  if ( CallingProcessAppId >= 0 )
  {
    v10 = 0LL;
    v7 = *((_QWORD *)this + 2);
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 32LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v10);
    CallingProcessAppId = v8(v7, v11, AddressOf);
    if ( CallingProcessAppId >= 0 )
    {
      CallingProcessAppId = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v10 + 216LL))(v10, v14);
      if ( CallingProcessAppId >= 0 )
      {
        *(_OWORD *)a2 = v14[0];
        *((_OWORD *)a2 + 1) = v14[1];
        *((_QWORD *)a2 + 4) = v15;
        *((_DWORD *)a2 + 10) = v16;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v11);
  return (unsigned int)CallingProcessAppId;
}
