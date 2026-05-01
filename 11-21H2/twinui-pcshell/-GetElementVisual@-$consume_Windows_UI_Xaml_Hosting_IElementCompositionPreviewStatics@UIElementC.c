/*
 * XREFs of ?GetElementVisual@?$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUVisual@Composition@UI@Windows@3@AEBUUIElement@Xaml@673@@Z @ 0x180609E48
 * Callers:
 *     ??$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics@23456@@impl@winrt@@QEAA?AUVisual@Composition@UI@Windows@2@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@Z @ 0x180605DD0 (--$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@-$factory_cache_entry@UElementCompositio.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180608BE4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::GetElementVisual(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
