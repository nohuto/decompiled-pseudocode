/*
 * XREFs of ??0?$map@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@@std@@QEAA@XZ @ 0x180068754
 * Callers:
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap__ @ 0x180001850 (_dynamic_initializer_for__Windows--UI--Composition--CompositionCapabilitiesRegistration--s_event.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::map<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>::map<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>()
{
  __int64 v0; // rax

  Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  *(_QWORD *)&Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap = v0;
  return &Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap;
}
