/*
 * XREFs of ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801B7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801179A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 */

void __fastcall TouchGestureComponent::subscribe_to_services(
        TouchGestureComponent *this,
        IUnknown *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx

  v4 = *((_QWORD *)this + 12);
  if ( *(IUnknown **)(v4 + 24) != a2 )
  {
    if ( *(_QWORD *)(v4 + 24) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v4 + 24));
    *(_QWORD *)(v4 + 24) = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 24));
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  TouchEdgeGestureManager::Initialize(*((TouchEdgeGestureManager **)this + 13), a2);
}
