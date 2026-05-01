/*
 * XREFs of ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013C300 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013D2EC (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::MarshalObjectToPropertySet(
        CLaunchActivatedEventArgs *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v7)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(char *, HSTRING *); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(char *, HSTRING *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING, __int64); // rdi
  _QWORD *v18; // rax
  __int64 AddressOf; // rax
  int v20; // eax
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 (__fastcall *v24)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, HSTRING, __int64); // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  int v29; // eax
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 (__fastcall *v33)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  _BYTE v43[8]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v44; // [rsp+38h] [rbp-31h] BYREF
  __int64 v45; // [rsp+40h] [rbp-29h] BYREF
  HSTRING string; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v47; // [rsp+50h] [rbp-19h] BYREF
  __int64 v48; // [rsp+58h] [rbp-11h] BYREF
  __int64 v49; // [rsp+60h] [rbp-9h] BYREF
  __int64 v50; // [rsp+68h] [rbp-1h] BYREF
  __int64 v51; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v53; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
         (CLaunchActivatedEventArgs *)((char *)this - 256),
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2;
  v44 = 0LL;
  v48 = 0LL;
  v7 = *v6;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v44, &v51);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v37 = 105LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_19;
  }
  v10 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v48, &v51);
  v53 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v53,
         v10);
  v5 = v9;
  if ( v9 < 0 )
  {
    v37 = 106LL;
    goto LABEL_24;
  }
  v11 = *(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 48LL);
  WindowsDeleteString(0LL);
  v47 = 0LL;
  v12 = v11((char *)this - 16, &v47);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_18;
  }
  v13 = *(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = v13((char *)this - 16, &string);
  v5 = v14;
  if ( v14 >= 0 )
  {
    v45 = 0LL;
    v15 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 48LL))((char *)this - 8, &v45);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
        (const char *)(unsigned int)v15);
LABEL_15:
      v35 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      goto LABEL_17;
    }
    v16 = v48;
    v50 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64))(*(_QWORD *)v48 + 144LL);
    v18 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v50, &v51);
    AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v18);
    v20 = v17(v16, v47, AddressOf);
    v5 = v20;
    if ( v20 < 0 )
    {
      v38 = 120LL;
    }
    else
    {
      v21 = v44;
      v22 = v50;
      v43[0] = 0;
      v23 = *v44;
      v53 = 0LL;
      v24 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v23 + 80);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Arguments", 0xAu, 9u);
      v20 = v24(v21, v53, v22, v43);
      v5 = v20;
      if ( v20 >= 0 )
      {
        v25 = v48;
        v49 = 0LL;
        v26 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64))(*(_QWORD *)v48 + 144LL);
        v27 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v49, &v51);
        v28 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(*v27);
        v29 = v26(v25, string, v28);
        v5 = v29;
        if ( v29 < 0 )
        {
          v39 = 125LL;
        }
        else
        {
          v30 = v44;
          v31 = v49;
          v32 = *v44;
          v53 = 0LL;
          v33 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v32 + 80);
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TileId", 7u, 6u);
          v29 = v33(v30, v53, v31, v43);
          v5 = v29;
          if ( v29 < 0 )
          {
            v39 = 126LL;
          }
          else
          {
            v34 = v45;
            if ( !v45
              || (v40 = v44,
                  v41 = *v44,
                  v53 = 0LL,
                  v42 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v41 + 80),
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"TileActivatedInfo",
                    0x12u,
                    0x11u),
                  v29 = v42(v40, v53, v34, v43),
                  v5 = v29,
                  v29 >= 0) )
            {
              v5 = 0;
LABEL_13:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
LABEL_14:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v50);
              goto LABEL_15;
            }
            v39 = 130LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
          (const char *)(unsigned int)v29);
        goto LABEL_13;
      }
      v38 = 122LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
    (const char *)(unsigned int)v14);
LABEL_17:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_18:
  WindowsDeleteString(v47);
  v47 = 0LL;
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v44);
  return v5;
}
