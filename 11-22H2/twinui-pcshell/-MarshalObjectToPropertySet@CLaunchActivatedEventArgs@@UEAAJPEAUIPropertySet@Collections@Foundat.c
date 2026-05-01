/*
 * XREFs of ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800DDEC4 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179218 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 *v10; // rbx
  __int64 (__fastcall *v11)(char *, HSTRING *); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(char *, HSTRING *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING, __int64 *); // rsi
  __int64 *v18; // rdi
  int v19; // eax
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, HSTRING, __int64 *); // rsi
  __int64 *v26; // rdi
  int v27; // eax
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 (__fastcall *v31)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 (__fastcall *v40)(_QWORD *, __int64, __int64, _BYTE *); // rsi
  _BYTE v41[8]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v42; // [rsp+38h] [rbp-31h] BYREF
  __int64 v43; // [rsp+40h] [rbp-29h] BYREF
  HSTRING string; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v45; // [rsp+50h] [rbp-19h] BYREF
  __int64 v46; // [rsp+58h] [rbp-11h] BYREF
  __int64 v47; // [rsp+60h] [rbp-9h] BYREF
  __int64 v48; // [rsp+68h] [rbp-1h] BYREF
  __int64 v49; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v51; // [rsp+90h] [rbp+27h]
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
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2;
  v42 = 0LL;
  v46 = 0LL;
  v7 = *v6;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v42, &v49);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v35 = 105LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_19;
  }
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v46, &v49);
  v51 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v51,
         v10);
  v5 = v9;
  if ( v9 < 0 )
  {
    v35 = 106LL;
    goto LABEL_24;
  }
  v11 = *(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 48LL);
  WindowsDeleteString(0LL);
  v45 = 0LL;
  v12 = v11((char *)this - 16, &v45);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
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
    v43 = 0LL;
    v15 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 48LL))((char *)this - 8, &v43);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
        (const char *)(unsigned int)v15);
LABEL_15:
      v33 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      goto LABEL_17;
    }
    v16 = v46;
    v48 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v46 + 144LL);
    v18 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v48, &v49);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v18);
    v19 = v17(v16, v45, v18);
    v5 = v19;
    if ( v19 < 0 )
    {
      v36 = 120LL;
    }
    else
    {
      v20 = v42;
      v21 = v48;
      v41[0] = 0;
      v22 = *v42;
      v51 = 0LL;
      v23 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v22 + 80);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Arguments", 0xAu, 9u);
      v19 = v23(v20, v51, v21, v41);
      v5 = v19;
      if ( v19 >= 0 )
      {
        v24 = v46;
        v47 = 0LL;
        v25 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v46 + 144LL);
        v26 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v47, &v49);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v26);
        v27 = v25(v24, string, v26);
        v5 = v27;
        if ( v27 < 0 )
        {
          v37 = 125LL;
        }
        else
        {
          v28 = v42;
          v29 = v47;
          v30 = *v42;
          v51 = 0LL;
          v31 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v30 + 80);
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TileId", 7u, 6u);
          v27 = v31(v28, v51, v29, v41);
          v5 = v27;
          if ( v27 < 0 )
          {
            v37 = 126LL;
          }
          else
          {
            v32 = v43;
            if ( !v43
              || (v38 = v42,
                  v39 = *v42,
                  v51 = 0LL,
                  v40 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v39 + 80),
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"TileActivatedInfo",
                    0x12u,
                    0x11u),
                  v27 = v40(v38, v51, v32, v41),
                  v5 = v27,
                  v27 >= 0) )
            {
              v5 = 0;
LABEL_13:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v47);
LABEL_14:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v48);
              goto LABEL_15;
            }
            v37 = 130LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v37,
          (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
          (const char *)(unsigned int)v27);
        goto LABEL_13;
      }
      v36 = 122LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (int)"onecoreuap\\shell\\lib\\activationevents\\src\\launchactivated.cpp",
    (const char *)(unsigned int)v14);
LABEL_17:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_18:
  WindowsDeleteString(v45);
  v45 = 0LL;
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v42);
  return v5;
}
