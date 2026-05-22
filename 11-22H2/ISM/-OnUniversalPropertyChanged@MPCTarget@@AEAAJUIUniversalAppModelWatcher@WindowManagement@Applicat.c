/*
 * XREFs of ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18011B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AE5A8 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventA.c)
 *     ?WindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppModelEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B00F8 (-WindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppM.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800BC248 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800C6250 (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ??$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@56@AEBUnullopt_t@8@@impl@winrt@@YA?AV?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@Windows@1@AEBUnullopt_t@3@@Z @ 0x18011ABD8 (--$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z @ 0x18011B918 (-MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x18011BD5C (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18011BE30 (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCTarget::OnUniversalPropertyChanged(__int64 a1, __int64 *a2, __int64 *a3)
{
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edi
  MPCHolographicInputManager *Instance; // rax
  int v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct MPCGamepadInputHelper *v16; // rax
  __int64 v17; // rcx
  ISMTracing *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v22[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+38h] [rbp-8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Id(a3) == 3 )
  {
    v6 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*a3;
    if ( *a3 )
    {
      v21 = 0LL;
      (**v6)(
        v6,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>,
        &v21);
      v7 = v21;
      v8 = v21;
    }
    else
    {
      v7 = 0LL;
      v8 = 0LL;
    }
    v20 = v7;
    if ( v8
      && *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>::WindowId(
            &v20,
            &v24) == *(_QWORD *)(a1 + 48) )
    {
      v23 = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(
                         a3,
                         &v24);
      winrt::impl::unbox_value_type_or<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind,std::optional<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,winrt::Windows::Foundation::IUnknown const &,std::nullopt_t const &>(
        (__int64)v22,
        &v23,
        v9);
      if ( v24 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v24);
      if ( LOBYTE(v22[1]) )
      {
        v10 = v22[0];
        *(_DWORD *)(a1 + 44) = v22[0];
        Instance = MPCHolographicInputManager::GetInstance();
        v12 = *(_DWORD *)(a1 + 44);
        v13 = *(_QWORD *)(a1 + 48);
        if ( MPCHolographicInputManager::Get3DFocusedWindowId(Instance) == v13 )
        {
          v16 = MPCGamepadInputHelper::GetInstance(v15, v14);
          LOBYTE(v15) = v12 == 1;
          *(_BYTE *)v16 = v12 == 1;
        }
        *(_BYTE *)(a1 + 40) = *(_DWORD *)(a1 + 44) == 1;
        if ( ISMTracing::IsEnabled(v15) )
        {
          wil::details::static_lazy<ISMTracing>::get(
            v17,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
          ISMTracing::MPCTarget_UpdatedFrameworkViewType_(v18, (struct IMPCTarget *)a1, v10, *(_QWORD *)(a1 + 48));
        }
        MPCTarget::StopWindowWatcher((MPCTarget *)a1);
      }
    }
    if ( v7 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
  }
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}
