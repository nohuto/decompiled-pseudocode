/*
 * XREFs of ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AED50
 * Callers:
 *     <none>
 * Callees:
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002A6C (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180003110 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@Z @ 0x1800ADAAC (--$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x1800ADFA4 (_lambda_e08e03aa5b167d5be50e1fd6214815c7_--operator().c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AE268 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AE354 (-FindTopLevelWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AE398 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?GetFromId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x1800AE420 (-GetFromId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowS.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AE4F4 (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AE5A8 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventA.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800AE900 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x1800AFB14 (-ReparentWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x1800AFEAC (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?WindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppModelEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B00F8 (-WindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppM.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CUIHierarchy::OnUniversalPropertyChanged(CUIHierarchy *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // esi
  struct CUIWindow *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  bool v16; // di
  char v17; // r9
  struct CUIWindow *v18; // [rsp+28h] [rbp-79h] BYREF
  __int64 v19; // [rsp+30h] [rbp-71h] BYREF
  __int64 v20; // [rsp+38h] [rbp-69h] BYREF
  __int64 v21; // [rsp+40h] [rbp-61h] BYREF
  __int64 v22; // [rsp+48h] [rbp-59h] BYREF
  __int64 v23; // [rsp+50h] [rbp-51h] BYREF
  __int64 v24; // [rsp+58h] [rbp-49h] BYREF
  __int64 v25; // [rsp+60h] [rbp-41h] BYREF
  struct CUIWindow *v26; // [rsp+68h] [rbp-39h] BYREF
  __int64 v27; // [rsp+70h] [rbp-31h] BYREF
  __int64 v28; // [rsp+78h] [rbp-29h] BYREF
  __int64 v29[2]; // [rsp+80h] [rbp-21h] BYREF
  int v30; // [rsp+90h] [rbp-11h] BYREF
  unsigned int *v31; // [rsp+98h] [rbp-9h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-1h] BYREF
  _QWORD v33[10]; // [rsp+A8h] [rbp+7h] BYREF
  unsigned int v34; // [rsp+120h] [rbp+7Fh] BYREF

  result = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Id(a3);
  if ( (_DWORD)result == 5 )
  {
    v7 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*a3;
    if ( *a3 )
    {
      v20 = 0LL;
      (**v7)(
        v7,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>,
        &v20);
      v22 = v20;
    }
    else
    {
      v22 = 0LL;
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>::WindowId(
      &v22,
      &v34);
    v31 = &v34;
    v29[1] = (__int64)&qword_1802786C8;
    _InterlockedIncrement64(&qword_1802786C8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::GetFromId(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
        &v21,
        &v34);
      _InterlockedDecrement64(&qword_1802786C8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1802786C8);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<_lambda_eae43cc28720a0d43884919512fd9bb9_ &>(
        v8,
        (__int64)&v21,
        &v31);
    }
    v9 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
                                                              &v21,
                                                              &v24);
    if ( v9 )
    {
      v23 = 0LL;
      (**v9)(
        v9,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v23);
      v10 = v23;
      v11 = v23;
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    v20 = v10;
    if ( v24 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v24);
    v12 = 0;
    if ( v11 )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
        &v20,
        &v18);
      v13 = v18;
      if ( v18 )
      {
        v14 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
                (__int64 *)&v18,
                &v25);
        v12 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                 v14,
                 &v30);
        if ( v25 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v25);
      }
      if ( v13 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v18);
    }
    CUIHierarchy::FindTopLevelWindow((__int64)a1, v29);
    CUIHierarchy::ReparentWindow(a1, &v19, v34, v12);
    v15 = v19;
    if ( v19 )
    {
      if ( !*(_BYTE *)(v19 + 48) )
      {
        v32 = *((_QWORD *)ISMStatics::GetForegroundManager() + 27);
        CUIHierarchy::FindWindowW((__int64)a1, &v27, v32);
        CUIHierarchy::FindTopLevelWindow((__int64)a1, (__int64 *)&v26);
        v33[0] = a1;
        v33[1] = &v32;
        v33[2] = &v27;
        v18 = (struct CUIWindow *)v29[0];
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v18);
        lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()((__int64)v33, &v18);
        v18 = v26;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v18);
        lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()((__int64)v33, &v18);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v26);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v27);
        v15 = v19;
      }
      CUIHierarchy::UpdateInputDisabledStateOnWindowAddition(a1, *(_QWORD *)(v15 + 16));
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(v19 + 16), 1, 1);
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(v19 + 16), 1, 0);
      v16 = 0;
      CUIHierarchy::FindWindowW((__int64)a1, &v28, *(_QWORD *)(v19 + 24));
      if ( v28 )
        v16 = *(_DWORD *)(v28 + 32) != 0;
      if ( *(_BYTE *)(v19 + 48) )
        v17 = 0;
      else
        v17 = v16;
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(v19 + 16), 4, v17);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v28);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
    result = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v29);
    if ( v10 )
      result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
    if ( v21 )
      result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v21);
    if ( v22 )
      result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
  }
  if ( *a2 )
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return result;
}
