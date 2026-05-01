/*
 * XREFs of ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18026118C
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$11 @ 0x180264147 (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$11.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$31 @ 0x18026425C (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$31.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$6 @ 0x1806FD5D3 (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$6.c)
 *     ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x1806FD638 (--1-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ.c)
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1806FD730 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     ??_ECopilotHotkeyManager@@UEAAPEAXI@Z @ 0x1806FD7F4 (--_ECopilotHotkeyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TargetAppExtensionDetails::~TargetAppExtensionDetails(TargetAppExtensionDetails *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 144);
  std::wstring::_Tidy_deallocate((__int64)this + 104);
  std::wstring::_Tidy_deallocate((__int64)this + 64);
  std::wstring::_Tidy_deallocate((__int64)this + 32);
  std::wstring::_Tidy_deallocate((__int64)this);
}
