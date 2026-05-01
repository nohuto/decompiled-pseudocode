/*
 * XREFs of ??1?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1806E1B24
 * Callers:
 *     ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18027154C (-IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     _CopilotHotkeyManager::IsTargetAppWindow_::_1_::dtor$1 @ 0x18027161B (_CopilotHotkeyManager--IsTargetAppWindow_--_1_--dtor$1.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     _CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary_::_1_::dtor$0 @ 0x1802748CD (_CopilotHotkeyManager--UpdateTargetAppDetailsCacheIfNecessary_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary_::_1_::dtor$1 @ 0x1802748D9 (_CopilotHotkeyManager--UpdateTargetAppDetailsCacheIfNecessary_--_1_--dtor$1.c)
 *     _api_alchemy_config::_anonymous_namespace_::GetSpecsForID_::_1_::dtor$2 @ 0x1806E2998 (_api_alchemy_config--_anonymous_namespace_--GetSpecsForID_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::optional<std::wstring>::~optional<std::wstring>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
    return std::wstring::_Tidy_deallocate(a1);
  return result;
}
