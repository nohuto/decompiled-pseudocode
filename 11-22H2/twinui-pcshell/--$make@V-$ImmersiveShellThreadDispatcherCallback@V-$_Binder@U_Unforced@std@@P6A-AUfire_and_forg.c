/*
 * XREFs of ??$make@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@winrt@@YA?A_P$$QEAV?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@Z @ 0x180229CE4
 * Callers:
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x18022A590 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>(
        _QWORD *a1,
        __int64 a2)
{
  char *v4; // r9
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = (char *)operator new(0x58uLL);
  *((_QWORD *)v4 + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v4 + 1) = 1LL;
  *(_QWORD *)v4 = &winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>::`vftable';
  *((_QWORD *)v4 + 3) = *(_QWORD *)a2;
  *((_DWORD *)v4 + 8) = *(_DWORD *)(a2 + 8);
  v5 = *(_OWORD *)(a2 + 12);
  *a1 = v4 + 16;
  *(_OWORD *)(v4 + 36) = v5;
  v6 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *((_QWORD *)v4 + 7) = v6;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *((_QWORD *)v4 + 8) = v7;
  *((_QWORD *)v4 + 9) = v9;
  *((_QWORD *)v4 + 10) = v8;
  *(_QWORD *)v4 = &winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>::`vftable';
  return a1;
}
