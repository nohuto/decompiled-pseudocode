/*
 * XREFs of ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18005FA70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x180060F24 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800610EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?IsDITestEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180061AA8 (-IsDITestEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180061AF0 (-IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180176DF4 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x18017C4C0 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180595C3C (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnSettingChanged(__int64 a1, int a2)
{
  struct IImmersiveSettingsCache *v4; // rdx
  _DWORD *v5; // rcx
  struct IImmersiveSettingsCache *v6; // rdx
  struct IImmersiveSettingsCache *v8; // rdx
  bool IsSnapFlyoutSettingEnabled; // al
  CShellSnapComponent *v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  ULONG v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-40h] BYREF
  int *v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-18h]
  int v18; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                      a1,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    v18 = 0;
    v16 = &v14;
    v14 = a2;
    v17 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)v5, (int)&dword_1806C8D1F, 0, 0, 3u, &v15);
  }
  if ( a2 == 4 )
  {
    *(_BYTE *)(a1 + 276) = SnapLayoutHelpers::IsSmartFillSettingEnabled(*(SnapLayoutHelpers **)(a1 + 112), v4);
    return 0LL;
  }
  if ( a2 == 12 )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      v4);
    *(_BYTE *)(a1 + 1068) = SnapLayoutHelpers::IsDITestEnabled(*(SnapLayoutHelpers **)(a1 + 112), v6);
    CShellSnapComponent::SetDockThreshold((CShellSnapComponent *)(a1 - 160));
    return 0LL;
  }
  if ( a2 != 11 )
    return 0LL;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
    v4);
  IsSnapFlyoutSettingEnabled = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(*(SnapLayoutHelpers **)(a1 + 112), v8);
  *(_BYTE *)(a1 + 832) = IsSnapFlyoutSettingEnabled;
  v10 = (CShellSnapComponent *)(a1 - 160);
  if ( IsSnapFlyoutSettingEnabled )
  {
    v11 = CShellSnapComponent::InitializeSnapFlyout(v10);
    if ( v11 >= 0 )
      return 0LL;
    v12 = 1682LL;
  }
  else
  {
    v11 = CShellSnapComponent::ShutdownSnapFlyout(v10);
    if ( v11 >= 0 )
      return 0LL;
    v12 = 1686LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v11,
    v13);
  return (unsigned int)v11;
}
