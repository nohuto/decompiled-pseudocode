/*
 * XREFs of ??$call_factory@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@V_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@impl@winrt@@YA?AUShellViewCoordinator@Shell@UI@WindowsUdk@1@$$QEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x1800F4884
 * Callers:
 *     ?RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VIMiniSearchAppPositioner@@U?$default_delete@VIMiniSearchAppPositioner@@@wistd@@@4@AEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18005DF9C (-RuntimeClassInitialize@MiniSearchExperienceManager@@QEAAJPEAUIServiceProvider@@V-$unique_ptr@VI.c)
 *     ?subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2D80 (-subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800F4858 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     _lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator() @ 0x1800F4C08 (_lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator().c)
 *     ?subscribe_to_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180153C30 (-subscribe_to_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180154A30 (-publish_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServic.c)
 *     ??R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBAXXZ @ 0x180157E8C (--R_lambda_9102ab066cd0787a9c4c0ffcea2bf645_@@QEBAXXZ.c)
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18015D870 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?AUShellViewCoordinator@Shell@UI@WindowsUdk@2@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x180066DCC (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory,_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_>(
        _QWORD *a1,
        unsigned int **a2)
{
  unsigned int *v3; // rdx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+20h]

  v7 = &qword_1807B3F58;
  _InterlockedIncrement64(&qword_1807B3F58);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    v3 = *a2;
    v6 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>
                                                               + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
           *v3,
           &v6);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    *a1 = v6;
    _InterlockedDecrement64(&qword_1807B3F58);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3F58);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      0LL,
      (__int64)a1,
      a2);
  }
  return a1;
}
