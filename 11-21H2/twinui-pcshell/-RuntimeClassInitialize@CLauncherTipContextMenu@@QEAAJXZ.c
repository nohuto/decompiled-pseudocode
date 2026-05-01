/*
 * XREFs of ?RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ @ 0x18005F1EC
 * Callers:
 *     ??$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18005EF2C (--$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F628 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?_RegisterWindowClass@CLauncherTipContextMenu@@AEAAXXZ @ 0x180061F4C (-_RegisterWindowClass@CLauncherTipContextMenu@@AEAAXXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CA2C4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803B424C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLauncherTipContextMenu::RuntimeClassInitialize(CLauncherTipContextMenu *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  HANDLE Event; // rdi
  const char *v5; // r9
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CLauncherTipContextMenu::_RegisterWindowClass(this);
  LOBYTE(v2) = 3;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    v3,
    v2);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x17FA,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v5);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 352,
    Event);
  v7[0] = IID_ILauncherTipContextMenu;
  v7[1] = 0LL;
  return CImmersiveShellComponent::RegisterServiceInformation(
           (CLauncherTipContextMenu *)((char *)this + 24),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)v7,
           1u);
}
