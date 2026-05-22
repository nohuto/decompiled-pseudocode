/*
 * XREFs of _dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap__ @ 0x180001850
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@U?$less@V?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@@std@@@5@@std@@QEAA@XZ @ 0x180068754 (--0-$map@V-$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@V-$shared_ptr@VCompositionC.c)
 */

int dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap__()
{
  std::map<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>::map<Microsoft::WRL::ComPtr<Windows::System::IDispatcherQueue>,std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap__);
}
