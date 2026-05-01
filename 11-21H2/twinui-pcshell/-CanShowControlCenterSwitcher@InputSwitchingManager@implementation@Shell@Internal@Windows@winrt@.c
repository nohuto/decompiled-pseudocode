/*
 * XREFs of ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E1028
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ @ 0x1805E0BBC (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ.c)
 *     ?CanShow@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAH@Z @ 0x1805E0FD0 (-CanShow@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAH@Z.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1805E22BC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800BCF18 (-IsAnyOOBE@@YA_NXZ.c)
 *     ??$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_lambda_c5531eb30e442e1349f82459eb3a7316_@@@impl@winrt@@YA_N$$QEAV_lambda_c5531eb30e442e1349f82459eb3a7316_@@@Z @ 0x1805DF960 (--$call_factory_cast@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@ZUGameBar@2345@U12345@V_.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  char v2; // al
  char v3; // cl
  char v4; // di
  char v5; // bl

  v2 = winrt::impl::call_factory_cast<bool (*)(winrt::Windows::Gaming::UI::IGameBarStatics const &),winrt::Windows::Gaming::UI::GameBar,winrt::Windows::Gaming::UI::IGameBarStatics,_lambda_c5531eb30e442e1349f82459eb3a7316_>();
  v3 = *((_BYTE *)this + 248);
  v4 = v2;
  v5 = 0;
  if ( !v3 && !IsAnyOOBE() )
    return v4 == 0;
  return v5;
}
