/*
 * XREFs of ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x180556AAC
 * Callers:
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x18055726C (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?CreateAnimation@TouchEdgeGripperWindow@@AEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MMUhstring@6@H@Z @ 0x180659398 (-CreateAnimation@TouchEdgeGripperWindow@@AEAA-AUScalarKeyFrameAnimation@Composition@UI@Windows@w.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180772ED4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  *a2 = v8;
  return a2;
}
