/*
 * XREFs of ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18010D970
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009C058 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventA.c)
 *     ?WindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppModelEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009DBA8 (-WindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs@UIAppM.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800A99EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800B4B40 (-Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ.c)
 *     ??$MPCTarget_UpdatedFrameworkViewType@PEAVMPCTarget@@IAEA_K@ISMTracing@@SAX$$QEAPEAVMPCTarget@@$$QEAIAEA_K@Z @ 0x18010C674 (--$MPCTarget_UpdatedFrameworkViewType@PEAVMPCTarget@@IAEA_K@ISMTracing@@SAX$$QEAPEAVMPCTarget@@$.c)
 *     ??$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@56@AEBUnullopt_t@8@@impl@winrt@@YA?AV?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@Windows@1@AEBUnullopt_t@3@@Z @ 0x18010CA30 (--$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x18010DCEC (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010DDC0 (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
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
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct MPCGamepadInputHelper *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  int v19; // [rsp+30h] [rbp-10h] BYREF
  char v20; // [rsp+34h] [rbp-Ch]
  struct IMPCTarget *v21; // [rsp+38h] [rbp-8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Id(a3) == 3 )
  {
    v6 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*a3;
    if ( *a3 )
    {
      v18 = 0LL;
      (**v6)(
        v6,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>,
        &v18);
      v7 = v18;
      v8 = v18;
    }
    else
    {
      v7 = 0LL;
      v8 = 0LL;
    }
    v17 = v7;
    if ( v8
      && *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppModelEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs>::WindowId(
            &v17,
            &v22) == *(_QWORD *)(a1 + 48) )
    {
      v21 = *(struct IMPCTarget **)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(
                                     a3,
                                     &v22);
      winrt::impl::unbox_value_type_or<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind,std::optional<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,winrt::Windows::Foundation::IUnknown const &,std::nullopt_t const &>(
        (__int64)&v19,
        (__int64 *)&v21,
        v9);
      if ( v22 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
      if ( v20 )
      {
        v10 = v19;
        *(_DWORD *)(a1 + 44) = v19;
        Instance = MPCHolographicInputManager::GetInstance();
        LODWORD(v22) = *(_DWORD *)(a1 + 44);
        v12 = *(_QWORD *)(a1 + 48);
        if ( MPCHolographicInputManager::Get3DFocusedWindowId(Instance) == v12 )
        {
          v15 = MPCGamepadInputHelper::GetInstance(v14, v13);
          *(_BYTE *)v15 = (_DWORD)v22 == 1;
        }
        *(_BYTE *)(a1 + 40) = *(_DWORD *)(a1 + 44) == 1;
        LODWORD(v22) = v10;
        v21 = (struct IMPCTarget *)a1;
        ISMTracing::MPCTarget_UpdatedFrameworkViewType<MPCTarget *,unsigned int,unsigned __int64 &>(
          &v21,
          (unsigned int *)&v22,
          (unsigned __int64 *)(a1 + 48));
        MPCTarget::StopWindowWatcher((MPCTarget *)a1);
      }
    }
    if ( v7 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v17);
  }
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}
