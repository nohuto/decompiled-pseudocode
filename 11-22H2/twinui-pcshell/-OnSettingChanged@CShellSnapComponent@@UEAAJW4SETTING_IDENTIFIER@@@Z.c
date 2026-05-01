/*
 * XREFs of ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1801102F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180110D18 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180111E40 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180111E88 (-IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsDITestEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180111ED0 (-IsDITestEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180112040 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801143CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801188AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultitaskingSettingsSimplification@@@deta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x18066317C (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnSettingChanged(__int64 a1, int a2)
{
  struct IImmersiveSettingsCache *v4; // rdx
  _DWORD *v5; // rcx
  struct IImmersiveSettingsCache *v6; // rdx
  bool IsSnapFlyoutSettingEnabled; // al
  SnapLayoutHelpers *v9; // rcx
  struct IImmersiveSettingsCache *v10; // rdx
  bool IsSnapBarSettingEnabled; // al
  bool v12; // zf
  int v13; // ebx
  __int64 v14; // rdx
  ULONG v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+38h] [rbp-40h] BYREF
  int *v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+60h] [rbp-18h]
  int v20; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                      a1,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    v20 = 0;
    v18 = &v16;
    v16 = a2;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_180871CE4, 0LL, 0LL, 3u, &v17);
  }
  if ( a2 == 4 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MultitaskingSettingsSimplification>::GetImpl'::`2'::impl,
      v4);
    *(_BYTE *)(a1 + 284) = 1;
    return 0LL;
  }
  if ( a2 == 13 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      v4);
    *(_BYTE *)(a1 + 996) = SnapLayoutHelpers::IsDITestEnabled(*(SnapLayoutHelpers **)(a1 + 104), v6);
    CShellSnapComponent::SetDockThreshold((CShellSnapComponent *)(a1 - 160));
    return 0LL;
  }
  if ( (unsigned int)(a2 - 11) > 1 )
    return 0LL;
  IsSnapFlyoutSettingEnabled = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(*(SnapLayoutHelpers **)(a1 + 104), v4);
  v9 = *(SnapLayoutHelpers **)(a1 + 104);
  *(_BYTE *)(a1 + 760) = IsSnapFlyoutSettingEnabled;
  IsSnapBarSettingEnabled = SnapLayoutHelpers::IsSnapBarSettingEnabled(v9, v10);
  v12 = *(_BYTE *)(a1 + 760) == 0;
  *(_BYTE *)(a1 + 761) = IsSnapBarSettingEnabled;
  if ( !v12 || IsSnapBarSettingEnabled )
  {
    if ( *(_QWORD *)(a1 + 752) )
      return 0LL;
    v13 = CShellSnapComponent::InitializeSnapFlyout((CShellSnapComponent *)(a1 - 160));
    if ( v13 >= 0 )
      return 0LL;
    v14 = 1912LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 752) )
      return 0LL;
    v13 = CShellSnapComponent::ShutdownSnapFlyout((CShellSnapComponent *)(a1 - 160));
    if ( v13 >= 0 )
      return 0LL;
    v14 = 1917LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v13,
    v15);
  return (unsigned int)v13;
}
