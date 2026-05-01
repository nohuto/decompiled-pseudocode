/*
 * XREFs of ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C300
 * Callers:
 *     ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C500 (-MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C864 (-MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013D2EC (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rdi
  _QWORD *v13; // rax
  __int64 AddressOf; // rax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 (__fastcall *v20)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  char v24; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v25[7]; // [rsp+31h] [rbp-4Fh] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = CActivatedEventArgsWithViewIdBase::MarshalObjectToPropertySet(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x261,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2;
  v28 = 0LL;
  v27 = 0LL;
  v7 = *v6;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v28, &v29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v22 = 614LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  v10 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v27, &v29);
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v31,
         v10);
  v5 = v9;
  if ( v9 < 0 )
  {
    v22 = 615LL;
    goto LABEL_15;
  }
  v24 = 0;
  v9 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 27) + 48LL))((char *)this + 216, &v24);
  v5 = v9;
  if ( v9 < 0 )
  {
    v22 = 618LL;
    goto LABEL_15;
  }
  v11 = v27;
  v26 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 136LL);
  v13 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v26, &v29);
  AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v13);
  LOBYTE(v15) = v24;
  v16 = v12(v11, v15, AddressOf);
  v5 = v16;
  if ( v16 < 0 )
  {
    v23 = 622LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\activatedeventargsbase.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_8;
  }
  v17 = v28;
  v18 = v26;
  v25[0] = 0;
  v19 = *v28;
  v31 = 0LL;
  v20 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v19 + 80);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PrelaunchActivated", 0x13u, 0x12u);
  v16 = v20(v17, v31, v18, v25);
  v5 = v16;
  if ( v16 < 0 )
  {
    v23 = 624LL;
    goto LABEL_18;
  }
  v5 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  return v5;
}
