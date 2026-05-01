/*
 * XREFs of ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C
 * Callers:
 *     ?UpdateTabsForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x180032F00 (-UpdateTabsForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWin.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18013A648 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180031A50 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x180032D98 (--$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x180033370 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800333B4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x180033424 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18003358C (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowT.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x18003369C (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800339E8 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?Tabs@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180033CA4 (-Tabs@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Inte.c)
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x180033D4C (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 *     ??$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_7591f65f5143d61a379239d524023c94_@@@Z @ 0x180034574 (--$call@AEAV_lambda_7591f65f5143d61a379239d524023c94_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 *     ??R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180034680 (--R_lambda_7591f65f5143d61a379239d524023c94_@@QEBA@AEBUIWindowTabDataModelStatics@Shell@UI@Inter.c)
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x180034B74 (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180035110 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ?IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z @ 0x180639690 (-IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(
        RTL_SRWLOCK *this,
        unsigned __int64 a2)
{
  RTL_SRWLOCK *v3; // rdi
  void **v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  PVOID Ptr; // r14
  PVOID v7; // r15
  __int64 v8; // rcx
  bool v9; // r14
  int v10; // eax
  int v11; // eax
  char IsEnabled; // al
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 *v22; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+98h] [rbp-90h]
  __int128 v26; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-78h]
  char v28[8]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 *v29; // [rsp+C0h] [rbp-68h]
  RTL_SRWLOCK *v30; // [rsp+C8h] [rbp-60h]
  __int64 *v31; // [rsp+D0h] [rbp-58h]
  char v32[80]; // [rsp+D8h] [rbp-50h] BYREF
  int v33; // [rsp+130h] [rbp+8h] BYREF
  unsigned __int64 v34; // [rsp+138h] [rbp+10h] BYREF
  __int64 v35; // [rsp+140h] [rbp+18h] BYREF
  __int64 v36; // [rsp+148h] [rbp+20h] BYREF

  v34 = a2;
  v3 = this + 77;
  AcquireSRWLockShared(this + 77);
  v4 = (void **)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                  &this[78],
                  v28,
                  &v34);
  Ptr = this[79].Ptr;
  v7 = *v4;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  if ( v7 != Ptr || !BYTE1(this[109].Ptr) )
    goto LABEL_4;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl);
  if ( !IsEnabled && !IsHwndFromValidPublisher((HWND)(int)v34) )
    return;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v17 = 0LL;
  v33 = v34;
  v23[0] = &v33;
  v23[1] = &v17;
  v29 = &qword_18098E5B8;
  _InterlockedIncrement64(&qword_18098E5B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics> )
  {
    _lambda_7591f65f5143d61a379239d524023c94_::operator()(
      v23,
      &v36,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>);
    _InterlockedDecrement64(&qword_18098E5B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E5B8);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::call<_lambda_7591f65f5143d61a379239d524023c94_ &>(
      v13,
      &v36,
      v23);
  }
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>(
    &v35,
    &v36);
  if ( v36 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  v8 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::Tabs(
         &v35,
         &v18);
  v9 = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(v8) == 0;
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  if ( !v9 )
  {
    AcquireSRWLockExclusive(v3);
    v30 = v3;
    v20 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v35 + 120LL))(v35, this[107].Ptr, &v20);
    if ( v10 < 0 )
      winrt::throw_hresult((unsigned int)v10);
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v35 + 104LL))(v35, this[108].Ptr, &v19);
    if ( v11 < 0 )
      winrt::throw_hresult((unsigned int)v11);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Try_emplace<unsigned __int64 const &,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory> &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel &,winrt::event_token &,winrt::event_token &>(
      &this[78],
      v32,
      &v34,
      &this[17],
      &v35,
      &v20,
      &v19);
    v14 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                           &this[78],
                           &v34);
    winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(v14);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
    {
      v15 = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
              &this[78],
              &v34);
      winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel(
        v15,
        LODWORD(this[99].Ptr),
        1LL);
    }
    else
    {
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        v34);
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
      this,
      v34,
      (__int64 *)&v26,
      (__int64 *)&v24);
    if ( v35 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
    if ( (_QWORD)v24 )
      std::_Deallocate<16,0>(v24, (v25 - v24) & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v26;
    if ( (_QWORD)v26 )
      std::_Deallocate<16,0>(v26, (v27 - v26) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_4:
    v21 = v34;
    v22 = &v21;
    v31 = &qword_18098E5D8;
    _InterlockedIncrement64(&qword_18098E5D8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory> )
    {
      winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
        &v16,
        v21);
      _InterlockedDecrement64(&qword_18098E5D8);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E5D8);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_e608e5034e30ee0eacecb96a86560567_ &>(
        v5,
        (__int64)&v16,
        &v22);
    }
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>(
      &this[101],
      this,
      &v16);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    return;
  }
  if ( v35 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
}
