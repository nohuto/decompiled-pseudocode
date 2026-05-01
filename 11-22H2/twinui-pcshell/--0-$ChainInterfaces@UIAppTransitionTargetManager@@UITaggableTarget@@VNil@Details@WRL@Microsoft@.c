/*
 * XREFs of ??0?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@QEAA@XZ @ 0x18059A184
 * Callers:
 *     ??0CAppTransitionTargetManager@@QEAA@XZ @ 0x18059A2F0 (--0CAppTransitionTargetManager@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180100920 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

IApplicationViewChangeListener *__fastcall Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        IApplicationViewChangeListener *a1)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(a1);
  *(_QWORD *)a1 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>::`vftable';
  return a1;
}
