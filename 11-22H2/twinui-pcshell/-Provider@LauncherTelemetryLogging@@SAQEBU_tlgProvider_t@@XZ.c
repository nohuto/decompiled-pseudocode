/*
 * XREFs of ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BBE4C
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1800712F4 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x180071F68 (-OnSessionBecameActive@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180160C70 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180160F10 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180161160 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1801B6170 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?AutomaticInvokeSkipped_PrelaunchDisabled@StartWindowTelemetry@@SAXXZ @ 0x1801FEDCC (-AutomaticInvokeSkipped_PrelaunchDisabled@StartWindowTelemetry@@SAXXZ.c)
 *     ?UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x1802014AC (-UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 *     ??$StartInvoke_DesktopSwitchTimedOut@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@Z @ 0x180201E18 (--$StartInvoke_DesktopSwitchTimedOut@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@StartWindowTelemetry@@SA.c)
 *     _lambda_366d32c7985cad6be2686e905051f209_::operator() @ 0x180202270 (_lambda_366d32c7985cad6be2686e905051f209_--operator().c)
 *     _lambda_5384bb77a032ee15e026d6375920cb0d_::operator() @ 0x18020231C (_lambda_5384bb77a032ee15e026d6375920cb0d_--operator().c)
 *     _lambda_65ec20363d565d1e2da0db1fb00f3b21_::operator() @ 0x180202434 (_lambda_65ec20363d565d1e2da0db1fb00f3b21_--operator().c)
 *     _lambda_f6905a9ca7d137af961aa077b7ca39b8_::operator() @ 0x1802024EC (_lambda_f6905a9ca7d137af961aa077b7ca39b8_--operator().c)
 *     _lambda_f7729cf07ac1cf5d574dc5881a9cd216_::operator() @ 0x180202604 (_lambda_f7729cf07ac1cf5d574dc5881a9cd216_--operator().c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x1802030D0 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG.c)
 *     ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x180501690 (-OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180505AC0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180506168 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18050697C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 */

const struct _tlgProvider_t *__fastcall LauncherTelemetryLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                                             a1,
                                             _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)
                                         + 8);
}
