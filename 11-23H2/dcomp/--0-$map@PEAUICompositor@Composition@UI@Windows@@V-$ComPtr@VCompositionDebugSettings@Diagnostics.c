/*
 * XREFs of ??0?$map@PEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@U?$less@PEAUICompositor@Composition@UI@Windows@@@std@@V?$allocator@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@9@@std@@QEAA@XZ @ 0x18008B1C4
 * Callers:
 *     _dynamic_initializer_for__Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap__ @ 0x1800017F0 (_dynamic_initializer_for__Windows--UI--Composition--Diagnostics--CompositionDebugSettingsFactory.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int128 *std::map<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>::map<Windows::UI::Composition::ICompositor *,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>()
{
  __int64 v0; // rax

  Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  *(_QWORD *)&Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap = v0;
  return &Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap;
}
