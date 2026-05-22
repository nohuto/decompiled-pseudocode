/*
 * XREFs of ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180085710
 * Callers:
 *     <none>
 * Callees:
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180001E88 (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E94 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@Z @ 0x180084488 (--$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x1800849A8 (_lambda_e08e03aa5b167d5be50e1fd6214815c7_--operator().c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180084CB8 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x180084D8C (-FindTopLevelWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x180084DD0 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?GetFromId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x180084E58 (-GetFromId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowS.c)
 *     ?HostAppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180084F2C (-HostAppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPrev.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800852D4 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 *     ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x180086504 (-ReparentWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x180086850 (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CUIHierarchy::OnUniversalPropertyChanged(CUIHierarchy *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // rcx
  signed int v9; // eax
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v11; // r9
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // rcx
  __int64 v13; // rbx
  unsigned int v14; // esi
  struct CUIWindow *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  bool v18; // di
  char v19; // r9
  struct CUIWindow *v20; // [rsp+28h] [rbp-79h] BYREF
  int v21; // [rsp+30h] [rbp-71h] BYREF
  __int64 v22; // [rsp+38h] [rbp-69h] BYREF
  __int64 v23; // [rsp+40h] [rbp-61h] BYREF
  __int64 v24; // [rsp+48h] [rbp-59h] BYREF
  __int64 v25; // [rsp+50h] [rbp-51h] BYREF
  __int64 v26; // [rsp+58h] [rbp-49h] BYREF
  __int64 v27; // [rsp+60h] [rbp-41h] BYREF
  struct CUIWindow *v28; // [rsp+68h] [rbp-39h] BYREF
  __int64 v29; // [rsp+70h] [rbp-31h] BYREF
  __int64 v30; // [rsp+78h] [rbp-29h] BYREF
  struct CUIWindow *v31; // [rsp+80h] [rbp-21h] BYREF
  __int64 v32[2]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int *v33; // [rsp+98h] [rbp-9h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-1h] BYREF
  _QWORD v35[10]; // [rsp+A8h] [rbp+7h] BYREF
  unsigned int v36; // [rsp+120h] [rbp+7Fh] BYREF

  v21 = 0;
  result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*a3 + 48LL))(*a3, &v21);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  if ( v21 == 5 )
  {
    v7 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*a3;
    if ( *a3 )
    {
      v23 = 0LL;
      (**v7)(
        v7,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>,
        &v23);
      v8 = v23;
    }
    else
    {
      v8 = 0LL;
    }
    v32[0] = v8;
    v36 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 48LL))(v8, &v36);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    v33 = &v36;
    v32[1] = (__int64)&qword_1802431C8;
    _InterlockedIncrement64(&qword_1802431C8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::GetFromId(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
        &v24,
        &v36);
      _InterlockedDecrement64(&qword_1802431C8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1802431C8);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<_lambda_eae43cc28720a0d43884919512fd9bb9_ &>(
        v10,
        (__int64)&v24,
        &v33,
        v11);
    }
    v12 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
                                                               &v24,
                                                               &v26);
    if ( v12 )
    {
      v25 = 0LL;
      (**v12)(
        v12,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v25);
      v13 = v25;
    }
    else
    {
      v13 = 0LL;
    }
    v23 = v13;
    if ( v26 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v26);
    v14 = 0;
    if ( v13 )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelPreview<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>::HostAppView(
        &v23,
        &v20);
      v15 = v20;
      if ( v20 )
      {
        v16 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
                (__int64 *)&v20,
                &v27);
        v14 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                 v16,
                 &v21);
        if ( v27 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v27);
      }
      if ( v15 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v20);
    }
    CUIHierarchy::FindTopLevelWindow((__int64)a1, (__int64 *)&v31);
    CUIHierarchy::ReparentWindow(a1, &v22, v36, v14);
    v17 = v22;
    if ( v22 )
    {
      if ( !*(_BYTE *)(v22 + 48) )
      {
        v34 = *((_QWORD *)ISMStatics::GetForegroundManager() + 27);
        CUIHierarchy::FindWindowW((__int64)a1, &v29, v34);
        CUIHierarchy::FindTopLevelWindow((__int64)a1, (__int64 *)&v28);
        v35[0] = a1;
        v35[1] = &v34;
        v35[2] = &v29;
        v20 = v31;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v20);
        lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()((__int64)v35, &v20);
        v20 = v28;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v20);
        lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()((__int64)v35, &v20);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v29);
        v17 = v22;
      }
      CUIHierarchy::UpdateInputDisabledStateOnWindowAddition(a1, *(_QWORD *)(v17 + 16));
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(v22 + 16), 1, 1);
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(v22 + 16), 1, 0);
      v18 = 0;
      CUIHierarchy::FindWindowW((__int64)a1, &v30, *(_QWORD *)(v22 + 24));
      if ( v30 )
        v18 = *(_DWORD *)(v30 + 32) != 0;
      if ( *(_BYTE *)(v22 + 48) )
        v19 = 0;
      else
        v19 = v18;
      CUIHierarchy::ModifyInputDisabledStateAndPropagate(a1, *(_QWORD *)(v22 + 16), 4, v19);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v30);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v31);
    if ( v13 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
    if ( v24 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v24);
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v32);
  }
  if ( *a2 )
    result = winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return result;
}
