/*
 * XREFs of ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805C0F10
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1801D17B8 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805CDBC4 (-RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUIIn.c)
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805CE100 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CE3A0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CF230 (-ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4L.c)
 *     ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805CF410 (-UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x18011E514 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1803D55B0 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?4U?$default_delete@VFlyoutView@@@std@@$0A@@?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805BEBDC (--$-4U-$default_delete@VFlyoutView@@@std@@$0A@@-$unique_ptr@VFlyoutView@@U-$default_delete@VFlyo.c)
 *     ??$?4VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@1@@Z @ 0x1805BEC18 (--$-4VFlyoutView@@U-$default_delete@VFlyoutView@@@std@@@-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV.c)
 *     ??$PreviousViewThrownOut@I@MeetAndChatTelemetry@@SAX$$QEAI@Z @ 0x1805BF53C (--$PreviousViewThrownOut@I@MeetAndChatTelemetry@@SAX$$QEAI@Z.c)
 *     ??$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1805BFB34 (--$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIUnknown@@@1@XZ.c)
 *     ??1ProtocolLauncher@Utils@@QEAA@XZ @ 0x1805C08D8 (--1ProtocolLauncher@Utils@@QEAA@XZ.c)
 *     ?MakeFallbackFlyoutView@@YA?AV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@PEAUIUnknown@@@Z @ 0x1805D1F20 (-MakeFallbackFlyoutView@@YA-AV-$unique_ptr@VFlyoutView@@U-$default_delete@VFlyoutView@@@std@@@st.c)
 *     ?MakeApplicationFlyoutView@@YA?AV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@2@PEBG@Z @ 0x1805D29FC (-MakeApplicationFlyoutView@@YA-AV-$unique_ptr@VFlyoutView@@U-$default_delete@VFlyoutView@@@std@@.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView(
        __int64 a1,
        _QWORD *a2)
{
  Utils::ProtocolLauncher *v4; // rdi
  Utils::ProtocolLauncher *v5; // rbx
  const WCHAR *v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  void **FallbackFlyoutView; // rax
  void **ApplicationFlyoutView; // rax
  __int64 v13; // rax
  std::_Ref_count_base *v14; // rsi
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  void *v17; // [rsp+38h] [rbp-48h] BYREF
  Utils::ProtocolLauncher *v18; // [rsp+40h] [rbp-40h] BYREF
  void *v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v21[2]; // [rsp+58h] [rbp-28h] BYREF

  v19 = a2;
  std::wstring::wstring(v21, L"ms-meetnow");
  Utils::ProtocolLauncher::TryGetForUriScheme(&v18, v21);
  std::wstring::_Tidy_deallocate((__int64)v21);
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         L"TaskbarMnFallback",
         &v20) >= 0
    && v20 )
  {
    v4 = v18;
    v5 = 0LL;
    v18 = 0LL;
    if ( !v4 )
    {
LABEL_8:
      v6 = &LocaleName;
      goto LABEL_9;
    }
    Utils::ProtocolLauncher::~ProtocolLauncher(v4);
    operator delete(v4);
  }
  else
  {
    v5 = v18;
  }
  if ( !v5 )
    goto LABEL_8;
  v6 = *(const WCHAR **)v5;
LABEL_9:
  AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  v17 = (void *)(a1 + 112);
  v7 = (_QWORD *)(a1 + 192);
  v8 = *(_QWORD *)(a1 + 192);
  if ( !v8 || (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8), (unsigned int)_o__wcsicmp(v6, v9)) )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v17);
    v17 = 0LL;
    if ( *v6 )
    {
      ApplicationFlyoutView = (void **)MakeApplicationFlyoutView(
                                         &v19,
                                         *(_QWORD *)(a1 + 176),
                                         *(_QWORD *)(a1 + 184),
                                         &v18);
      std::unique_ptr<FlyoutView>::operator=<std::default_delete<FlyoutView>,0>(&v17, ApplicationFlyoutView);
      if ( v19 )
        operator delete(v19);
      v5 = v18;
    }
    else
    {
      v10 = winrt::immersive_shell_component::get_site<IUnknown>((RTL_SRWLOCK *)(a1 + 16), &v16);
      FallbackFlyoutView = (void **)MakeFallbackFlyoutView(&v19, *v10);
      std::unique_ptr<FlyoutView>::operator=<std::default_delete<FlyoutView>,0>(&v17, FallbackFlyoutView);
      if ( v19 )
        operator delete(v19);
      if ( v16 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v16);
    }
    *(_OWORD *)v21 = 0LL;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v19, (RTL_SRWLOCK *)(a1 + 112));
    if ( !*v7
      || (v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 40LL))(*v7), (unsigned int)_o__wcsicmp(v6, v13)) )
    {
      std::shared_ptr<FlyoutView>::operator=((__int64 *)v21, (_QWORD *)(a1 + 192));
      std::shared_ptr<FlyoutView>::operator=<FlyoutView,std::default_delete<FlyoutView>>(
        (_QWORD *)(a1 + 192),
        (__int64 *)&v17);
      *(_BYTE *)(a1 + 208) = 0;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v19);
    v14 = v21[0];
    if ( v21[0] )
    {
      LODWORD(v16) = (*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v21[0] + 24LL))(v21[0]);
      MeetAndChatTelemetry::PreviousViewThrownOut<unsigned int>((int *)&v16);
      (*(void (__fastcall **)(std::_Ref_count_base *, __int64 *, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, &v16, 0LL);
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    }
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      a2,
      v7);
    if ( v21[1] )
      std::_Ref_count_base::_Decref(v21[1]);
    if ( v17 )
      operator delete(v17);
  }
  else
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      a2,
      (_QWORD *)(a1 + 192));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v17);
  }
  if ( v5 )
  {
    Utils::ProtocolLauncher::~ProtocolLauncher(v5);
    operator delete(v5);
  }
  return a2;
}
