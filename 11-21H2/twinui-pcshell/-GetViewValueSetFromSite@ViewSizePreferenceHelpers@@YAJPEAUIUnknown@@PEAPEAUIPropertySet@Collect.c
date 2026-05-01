/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E7DA4
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E8764 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180028728 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18010988C (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1802F7864 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x1803525E0 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180494390 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??$Make@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@PEAU5678@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E69B0 (--$Make@VLaunchUIContext@-CP@--GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknow.c)
 *     ??R_lambda_84553ebf14022660bab25ef407fb095c_@@QEBAJXZ @ 0x1804E71D0 (--R_lambda_84553ebf14022660bab25ef407fb095c_@@QEBAJXZ.c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1804E7D08 (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1804E8E84 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite(
        IUnknown *this,
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  HRESULT v4; // eax
  HWND *v5; // r9
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rbx
  volatile int *v15; // rdx
  WCHAR *v16; // rbx
  __int64 (__fastcall *v17)(WCHAR *, GUID *, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  int ppv; // [rsp+20h] [rbp-79h]
  WCHAR *v22; // [rsp+30h] [rbp-69h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-61h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-59h] BYREF
  const WCHAR *v25; // [rsp+48h] [rbp-51h] BYREF
  LPVOID v26; // [rsp+50h] [rbp-49h] BYREF
  __int64 v27; // [rsp+58h] [rbp-41h] BYREF
  void *v28; // [rsp+60h] [rbp-39h] BYREF
  void *v29; // [rsp+68h] [rbp-31h] BYREF
  struct IUnknown v30; // [rsp+70h] [rbp-29h] BYREF
  const WCHAR *v31[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v32; // [rsp+88h] [rbp-11h] BYREF
  HSTRING_HEADER v33; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v34[32]; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  punk = this;
  a2->lpVtbl = 0LL;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  v4 = CoCreateInstance(
         &GUID_f1c46d71_b791_4110_8d5c_7108f22c1010,
         0LL,
         1u,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v26);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v22 = (WCHAR *)v26;
    v26 = 0LL;
    if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
           punk,
           &v30,
           (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&v32,
           v5) )
    {
      v7 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
             v32,
             (unsigned int)v30.lpVtbl);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 261LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)(unsigned int)v7);
        goto LABEL_28;
      }
    }
    else
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             punk,
             (const GUID *const)&SID_LaunchSourceAppUserModelId,
             &GUID_989191ac_28ff_4cf0_9584_e0d078bc2396,
             &ppvOut) >= 0 )
      {
        v25 = 0LL;
        v9 = *(_QWORD *)ppvOut;
        v25 = 0LL;
        if ( (*(int (__fastcall **)(void *, const WCHAR **))(v9 + 24))(ppvOut, &v25) >= 0 )
        {
          v31[0] = v25;
          Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, v31, v10);
          v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v34,
                  (const WCHAR **)off_180669848,
                  v11);
          v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                  *(HSTRING *)(v12 + 24));
          v6 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x111,
              (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
              (const char *)(unsigned int)v13);
            wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v25);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
LABEL_28:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
            goto LABEL_29;
          }
        }
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v25);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (unsigned int)ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk) )
    {
      v7 = ViewSizePreferenceHelpers::SetTargetViewSizePreference((Windows::Internal::ShellHelpers::PropertySetHelper *)&v22);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 281LL;
        goto LABEL_15;
      }
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    if ( IUnknown_QueryService(
           punk,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &v29) >= 0 )
    {
      v31[0] = v22;
      PEAU5678::Z::Make<`ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext,AJPEAUIUnknown,Windows::Foundation::Collections::IPropertySet * *>(
        (__int64 *)&ppvOut,
        v31);
      v14 = ppvOut;
      if ( !ppvOut )
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x133,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)0x8007000ELL);
LABEL_27:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
        goto LABEL_28;
      }
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v29 + 24LL))(v29, ppvOut);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)v14,
        v15);
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
    if ( IUnknown_QueryService(punk, &stru_1806EAAF8, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v28) >= 0 )
      (*(void (__fastcall **)(void *, WCHAR *))(*(_QWORD *)v28 + 24LL))(v28, v22);
    v31[0] = (const WCHAR *)&punk;
    v31[1] = (const WCHAR *)&v22;
    _lambda_84553ebf14022660bab25ef407fb095c_::operator()((__int64)v31);
    v27 = 0LL;
    v16 = v22;
    v17 = **(__int64 (__fastcall ***)(WCHAR *, GUID *, __int64 *))v22;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    v18 = v17(v16, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, &v27);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        338LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v18,
        ppv);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, 1LL);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        339LL,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v19,
        ppv);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    a2->lpVtbl = (struct IUnknownVtbl *)v22;
    v6 = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v4);
LABEL_29:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  return v6;
}
