/*
 * XREFs of _dynamic_initializer_for__Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap__ @ 0x1800017F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@@std@@QEAA@XZ @ 0x18008B1C4 (--0-$map@PEAUICompositor@Composition@UI@Windows@@V-$ComPtr@VCompositionDebugSettings@Diagnostics.c)
 */

int dynamic_initializer_for__Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap__()
{
  std::map<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>::map<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap__);
}
