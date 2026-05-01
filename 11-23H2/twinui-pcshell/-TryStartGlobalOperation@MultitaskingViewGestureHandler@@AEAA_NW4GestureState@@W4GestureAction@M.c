/*
 * XREFs of ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1805504F4
 * Callers:
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x18054CE6C (_lambda_437fa58503517304dd979000588ba553_--operator().c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?TryStartGlobalOperationAsync@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@I_K@Z @ 0x1805505DC (-TryStartGlobalOperationAsync@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 */

char __fastcall MultitaskingViewGestureHandler::TryStartGlobalOperation(__int64 a1, int a2, int a3, __int64 a4)
{
  int v5; // r8d
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+10h] BYREF
  int v11; // [rsp+58h] [rbp+28h] BYREF

  if ( *(_QWORD *)(a1 + 96) == *(_QWORD *)(a1 + 104) || a2 != 1 )
    return 0;
  v5 = a3 - 3;
  if ( !v5 )
  {
    LODWORD(v10) = 0;
    v9[1] = &v10;
    v9[0] = a1;
    if ( (int)lambda_437fa58503517304dd979000588ba553_::operator()(v9) >= 0
      && !(_DWORD)v10
      && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v11) >= 0
      && v11 == 1 )
    {
      v7 = 4LL;
      goto LABEL_11;
    }
    return 0;
  }
  v6 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v6 != 4 )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
    1u,
    v6,
    a4);
  v7 = 6LL;
LABEL_11:
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::TryStartGlobalOperationAsync(
    a1 + 224,
    &v10,
    *(unsigned int *)(a1 + 208),
    v7);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return 1;
}
