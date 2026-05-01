/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$102 @ 0x1801C78D2
 * Callers:
 *     <none>
 * Callees:
 *     ?WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE240 (-WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::catch_102(
        __int64 a1,
        __int64 a2)
{
  const char *v3; // r9

  DashboardManagerTelemetry::WebExperienceInstallerFailedAndRetrying();
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x1BE,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    v3);
  return 0LL;
}
