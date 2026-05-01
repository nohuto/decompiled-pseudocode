/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18011DC18
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@QEAA@XZ @ 0x18011DBC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppLayoutItemInternal@@U-$ChainInter.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800D2E88 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>(
        _DWORD *a1)
{
  _DWORD *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 2));
  *((_QWORD *)a1 + 1) = &Microsoft::WRL::ChainInterfaces<IAnimatableScrollViewer,IScrollViewer,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  result = a1;
  a1[5] = 1;
  return result;
}
