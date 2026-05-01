/*
 * XREFs of ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180094F5C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x180094B70 (--$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@VInputAppViewCoodinato.c)
 *     ??$make_shared@VInputAppViewCoodinatorHandler@@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@YA?AV?$shared_ptr@VInputAppViewCoodinatorHandler@@@0@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094D3C (--$make_shared@VInputAppViewCoodinatorHandler@@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@YA-A.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180094DC0 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180094E18 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180094E60 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180094E60.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180094EB8 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_180094EB8.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?DismissRequested@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1800D627C (-DismissRequested@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ShowRequested@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1800D8EF8 (-ShowRequested@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1801BF404 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_2963e69eee30b127a29e593e76581bd4___ @ 0x180203860 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_180203860.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_de295fbb3a8b8f22692faabe0885dace___ @ 0x180203E88 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_180203E88.c)
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::_lambda_de295fbb3a8b8f22692faabe0885dace_ @ 0x180206448 (_lambda_de295fbb3a8b8f22692faabe0885dace_--_lambda_de295fbb3a8b8f22692faabe0885dace_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewCoordinators(TouchKeyboardExperienceManager *this)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 **v17; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  bool v21[8]; // [rsp+20h] [rbp-29h]
  const char *v22; // [rsp+28h] [rbp-21h]
  __int64 *v23; // [rsp+30h] [rbp-19h] BYREF
  std::_Ref_count_base *v24; // [rsp+38h] [rbp-11h]
  _BYTE v25[16]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v28[6]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v30; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+C0h] [rbp+77h] BYREF
  TouchKeyboardExperienceManager *v33; // [rsp+C8h] [rbp+7Fh] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0xC78,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(*((_QWORD *)this + 33) != 0LL),
    (bool)"Not expect to re-initialize m_viewCoordinatorHandlers",
    v22);
  LODWORD(v30) = 12;
  v2 = std::make_shared<InputAppViewCoodinatorHandler,enum winrt::WindowsUdk::UI::Shell::ShellView>(&v23, (int *)&v30);
  LODWORD(v30) = 12;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (_QWORD *)this + 32,
    (__int64)v28,
    &v30,
    v2);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  LODWORD(v30) = 13;
  v3 = std::make_shared<InputAppViewCoodinatorHandler,enum winrt::WindowsUdk::UI::Shell::ShellView>(&v23, (int *)&v30);
  LODWORD(v30) = 13;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (_QWORD *)this + 32,
    (__int64)v28,
    &v30,
    v3);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  LODWORD(v30) = 14;
  v4 = std::make_shared<InputAppViewCoodinatorHandler,enum winrt::WindowsUdk::UI::Shell::ShellView>(&v23, (int *)&v30);
  LODWORD(v30) = 14;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (_QWORD *)this + 32,
    (__int64)v28,
    &v30,
    v4);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  LODWORD(v30) = 19;
  v5 = std::make_shared<InputAppViewCoodinatorHandler,enum winrt::WindowsUdk::UI::Shell::ShellView>(&v23, (int *)&v30);
  LODWORD(v30) = 19;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (_QWORD *)this + 32,
    (__int64)v28,
    &v30,
    v5);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  v6 = (__int64 *)**((_QWORD **)this + 32);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v33 = this;
    v30 = 0LL;
    v23 = &v30;
    v7 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v23);
    v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC87,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        *(int *)v21);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
      return v9;
    }
    v10 = v6[5];
    v11 = lambda_de295fbb3a8b8f22692faabe0885dace_::_lambda_de295fbb3a8b8f22692faabe0885dace_(v25, &v33, &v30);
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_de295fbb3a8b8f22692faabe0885dace___(
      &v31,
      v11);
    v13 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ShowRequested(
                       v10 + 8,
                       v26,
                       v12,
                       &v31,
                       *(_QWORD *)v21);
    __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      v6[5] + 16,
      v13);
    __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ(v26);
    if ( v31 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
    v14 = lambda_de295fbb3a8b8f22692faabe0885dace_::_lambda_de295fbb3a8b8f22692faabe0885dace_(v27, &v33, &v30);
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_2963e69eee30b127a29e593e76581bd4___(
      &v32,
      v14);
    v16 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::DismissRequested(
                       v10 + 8,
                       v28,
                       v15,
                       &v32);
    __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      v6[5] + 32,
      v16);
    __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ(v28);
    if ( v32 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
    v17 = (__int64 **)v6[2];
    if ( *((_BYTE *)v17 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v17; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  return 0LL;
}
