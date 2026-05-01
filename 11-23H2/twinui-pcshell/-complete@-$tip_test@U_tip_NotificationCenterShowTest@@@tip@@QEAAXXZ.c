/*
 * XREFs of ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180018214 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@3@@Z @ 0x180040204 (-StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@Notificatio.c)
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E478 (-CompleteHide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804236E4 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUITelemetry@@W4InputType@3@@Z @ 0x180424000 (-StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUI.c)
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806FF72C (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1806FFDB8 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807003EC (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180722188 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 * Callees:
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 */

void __fastcall tip::tip_test<_tip_NotificationCenterShowTest>::complete(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    tip::details::test_common_data<1>::complete(v1 + 8);
}
