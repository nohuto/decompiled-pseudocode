/*
 * XREFs of ??0TouchEdgeGestureManager@@QEAA@XZ @ 0x180092CDC
 * Callers:
 *     ??$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA?AU?$com_ptr@VTouchEdgeGestureManager@@@0@XZ @ 0x18008AA60 (--$make_self@VTouchEdgeGestureManager@@$$V@winrt@@YA-AU-$com_ptr@VTouchEdgeGestureManager@@@0@XZ.c)
 * Callees:
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800942B4 (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAA@V?$initializer_list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@1@@Z @ 0x18012B954 (--0-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4S.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801819F8 (-Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA-AU1.c)
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x18019E350 (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=32
TouchEdgeGestureManager *__fastcall TouchEdgeGestureManager::TouchEdgeGestureManager(TouchEdgeGestureManager *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-79h] BYREF
  int v11; // [rsp+24h] [rbp-75h] BYREF
  int v12; // [rsp+28h] [rbp-71h] BYREF
  __int64 v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  int *v17; // [rsp+50h] [rbp-49h] BYREF
  int *v18; // [rsp+58h] [rbp-41h] BYREF
  int *v19; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v20[6]; // [rsp+70h] [rbp-29h] BYREF
  int v21; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+C0h] [rbp+27h]
  __int64 v26; // [rsp+C8h] [rbp+2Fh]
  __int64 v27; // [rsp+D0h] [rbp+37h] BYREF

  v20[2] = this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,ITouchEdgeGesture,void>'};
  *((_QWORD *)this + 1) = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,IGameFocusEvents,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchEdgeGestureManager>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v2 = (char *)this + 96;
  v17 = (int *)((char *)this + 96);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 30;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::Create(&v13);
  winrt::Windows::Foundation::IUnknown::operator=(v2 + 112, &v13);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_BYTE *)this + 344) = 0;
  v10 = 16;
  v17 = &v10;
  v20[3] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v14,
      &v10);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v3,
      &v14,
      &v17);
  }
  v21 = 16;
  v5 = v14;
  v14 = 0LL;
  v22 = v5;
  v11 = 2;
  v18 = &v11;
  v20[4] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v15,
      &v11);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v4,
      &v15,
      &v18);
  }
  v23 = 2;
  v7 = v15;
  v15 = 0LL;
  v24 = v7;
  v12 = 6;
  v19 = &v12;
  v20[5] = &qword_18098E088;
  _InterlockedIncrement64(&qword_18098E088);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v16,
      &v12);
    _InterlockedDecrement64(&qword_18098E088);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E088);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v6,
      &v16,
      &v19);
  }
  v25 = 6;
  v8 = v16;
  v16 = 0LL;
  v26 = v8;
  v20[0] = &v21;
  v20[1] = &v27;
  std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>(
    (char *)this + 352,
    v20);
  `eh vector destructor iterator'(
    &v21,
    0x10uLL,
    3uLL,
    std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>);
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  return this;
}
