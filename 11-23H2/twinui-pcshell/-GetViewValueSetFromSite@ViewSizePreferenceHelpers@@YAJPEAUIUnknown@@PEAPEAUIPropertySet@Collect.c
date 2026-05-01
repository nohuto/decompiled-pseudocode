/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A0254
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1805A0B98 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1803B1148 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1803B1348 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18041C464 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180549E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??$Make@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@PEAU5678@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLaunchUIContext@?CP@??GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18059EE70 (--$Make@VLaunchUIContext@-CP@--GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknow.c)
 *     ??R_lambda_1dea2ca1d86c20a7f16b0621ad6a705e_@@QEBA@XZ @ 0x18059F638 (--R_lambda_1dea2ca1d86c20a7f16b0621ad6a705e_@@QEBA@XZ.c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1805A01B8 (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1805A12A4 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
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
  void *v9; // rbx
  int (__fastcall *v10)(void *, void **); // rdi
  void **v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // r8
  int v16; // eax
  unsigned int TargetViewSizePreferenceOrDefault; // eax
  unsigned int v18; // r8d
  LPVOID v19; // rbx
  volatile int *v20; // rdx
  WCHAR *v21; // rbx
  __int64 (__fastcall *v22)(WCHAR *, GUID *, __int64 *); // rdi
  int v23; // eax
  int v24; // eax
  int ppv; // [rsp+20h] [rbp-79h]
  WCHAR *v27; // [rsp+30h] [rbp-69h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-61h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-59h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-51h] BYREF
  LPVOID v31; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h] BYREF
  void *v33; // [rsp+60h] [rbp-39h] BYREF
  void *v34; // [rsp+68h] [rbp-31h] BYREF
  struct IUnknown v35; // [rsp+70h] [rbp-29h] BYREF
  const WCHAR *v36[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v37; // [rsp+88h] [rbp-11h] BYREF
  HSTRING_HEADER v38; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v39; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  punk = this;
  a2->lpVtbl = 0LL;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  v4 = CoCreateInstance(
         &GUID_f1c46d71_b791_4110_8d5c_7108f22c1010,
         0LL,
         1u,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v31);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v27 = (WCHAR *)v31;
    v31 = 0LL;
    if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
           punk,
           &v35,
           (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&v37,
           v5) )
    {
      v7 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
             v37,
             (unsigned int)v35.lpVtbl);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 242LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)(unsigned int)v7);
LABEL_31:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        goto LABEL_32;
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
        pv = 0LL;
        v9 = ppvOut;
        v10 = *(int (__fastcall **)(void *, void **))(*(_QWORD *)ppvOut + 24LL);
        v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
        if ( v10(v9, v11) >= 0 )
        {
          v36[0] = (const WCHAR *)pv;
          Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, v36, v12);
          v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_1807F47D0, v13);
          v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                  (HSTRING)v14[1].Reserved.Reserved1,
                  v15);
          v6 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFE,
              (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
              (const char *)(unsigned int)v16);
            if ( pv )
              CoTaskMemFree(pv);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_31;
          }
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    TargetViewSizePreferenceOrDefault = ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk);
    if ( TargetViewSizePreferenceOrDefault )
    {
      v7 = ViewSizePreferenceHelpers::SetTargetViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
             TargetViewSizePreferenceOrDefault,
             v18);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 262LL;
        goto LABEL_18;
      }
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
    if ( IUnknown_QueryService(
           punk,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
           &v34) >= 0 )
    {
      v36[0] = v27;
      PEAU5678::Z::Make<`ViewSizePreferenceHelpers::GetViewValueSetFromSite'::`47'::LaunchUIContext,AJPEAUIUnknown,Windows::Foundation::Collections::IPropertySet * *>(
        (__int64 *)&pv,
        v36);
      v19 = pv;
      if ( !pv )
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x120,
          (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)0x8007000ELL);
LABEL_30:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
        goto LABEL_31;
      }
      (*(void (__fastcall **)(void *, LPVOID))(*(_QWORD *)v34 + 24LL))(v34, pv);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)v19,
        v20);
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
    if ( IUnknown_QueryService(punk, &stru_18089E888, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v33) >= 0 )
      (*(void (__fastcall **)(void *, WCHAR *))(*(_QWORD *)v33 + 24LL))(v33, v27);
    v36[0] = (const WCHAR *)&punk;
    v36[1] = (const WCHAR *)&v27;
    _lambda_1dea2ca1d86c20a7f16b0621ad6a705e_::operator()((__int64)v36);
    v32 = 0LL;
    v21 = v27;
    v22 = **(__int64 (__fastcall ***)(WCHAR *, GUID *, __int64 *))v27;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    v23 = v22(v21, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, &v32);
    if ( v23 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13F,
        (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v23,
        ppv);
    v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 48LL))(v32, 1LL);
    if ( v24 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x140,
        (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v24,
        ppv);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    a2->lpVtbl = (struct IUnknownVtbl *)v27;
    v6 = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEB,
    (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v4);
LABEL_32:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  return v6;
}
