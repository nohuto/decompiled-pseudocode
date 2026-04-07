/*
 * XREFs of ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800FFAC8
 * Callers:
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FF77C (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call @ 0x1800FFCB0 (std--_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_--_Do_call.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180099AB4 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  unsigned __int8 IsEnabled; // al
  CTopLevelWindow3D *v3; // rcx

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl);
  v3 = (CTopLevelWindow3D *)*((_QWORD *)this + 5);
  if ( !IsEnabled || *((_QWORD *)v3 + 42) )
  {
    CTopLevelWindow3D::StopAnimation(v3);
    CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 5) + 336LL) + 440LL), 1.0);
  }
  if ( *((_QWORD *)this + 16) )
    std::_Func_class<void,>::operator()((__int64)this + 72);
}
