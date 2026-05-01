/*
 * XREFs of ??$bind@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@ZAEAV34@AEAU52@U67@I@std@@YA?AV?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@0@$$QEAP6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@0@U?$com_ptr@UIServiceProvider@@@3@AEBUCRect@Geometry@@I@ZAEAV40@AEAU53@$$QEAU67@$$QEAI@Z @ 0x180229C38
 * Callers:
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x18022A590 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18022A170 (--0-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::bind<winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        _OWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // rbx
  __int64 *v9; // rcx

  *(_QWORD *)a1 = *a2;
  v8 = a1 + 8;
  *(_DWORD *)(a1 + 8) = *a6;
  *(_OWORD *)(a1 + 12) = *a5;
  v9 = (__int64 *)(a1 + 32);
  *v9 = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>(
    v8 + 32,
    a3);
  return a1;
}
