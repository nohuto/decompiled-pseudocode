/*
 * XREFs of ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020
 * Callers:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180021750 (std--_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18009C470 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A147C (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x1800A1A90 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x1800A23B0 (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800A2480 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800A2D7C (-RequestActivation@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800A46D4 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x180107810 (_lambda_98d8c15e91123ccd84ca1af9146cf167_--_lambda_invoker_cdecl_.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x180108B20 (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180108FB8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180109F9C (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x18010AB8C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x18010B1FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x180002B4C (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002CC0 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002D04 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x18009B400 (--$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHelper::GetViewIdFromWindowId(struct ViewHierarchyWithWindowManager *a1, unsigned int a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int *v11[5]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v4 = (_QWORD *)(*((_QWORD *)a1 + 18)
                + 16
                * (*((_QWORD *)a1 + 21) & (0x100000001B3LL
                                         * (((unsigned __int64)a2 >> 24) ^ (0x100000001B3LL
                                                                          * (BYTE2(a2) ^ (0x100000001B3LL
                                                                                        * ((0x100000001B3LL
                                                                                          * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(a2)))))))));
  v5 = v4[1];
  v6 = *((_QWORD *)a1 + 16);
  if ( v5 == v6 )
  {
LABEL_2:
    v5 = 0LL;
  }
  else
  {
    while ( a2 != *(_DWORD *)(v5 + 16) )
    {
      if ( v5 == *v4 )
        goto LABEL_2;
      v5 = *(_QWORD *)(v5 + 8);
    }
  }
  if ( !v5 || v5 == v6 )
  {
    v7 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 24);
    v13 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v13 = 0LL;
    v15 = v7;
  }
  if ( !v7 )
    return 0LL;
  v11[0] = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
             &v15,
             &v12);
  v11[1] = (unsigned int *)&qword_180268F68;
  _InterlockedIncrement64(&qword_180268F68);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics> )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
      &v14,
      v11[0]);
    _InterlockedDecrement64(&qword_180268F68);
  }
  else
  {
    _InterlockedDecrement64(&qword_180268F68);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_6e68f4fcde6472322112b953134f760c_ &>(
      v9,
      &v14,
      v11);
  }
  v10 = v14;
  if ( v14 )
    v2 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
            &v14,
            &v13);
  if ( v10 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v14);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v15);
  return v2;
}
