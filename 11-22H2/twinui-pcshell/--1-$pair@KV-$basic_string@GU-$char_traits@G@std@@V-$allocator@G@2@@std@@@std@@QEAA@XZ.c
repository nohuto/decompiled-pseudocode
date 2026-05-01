/*
 * XREFs of ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1801E510C
 * Callers:
 *     _CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801DF758 (_CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1_--_1_--dtor$3.c)
 *     _GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor$2 @ 0x1803FED5F (_GamingOverlayExperienceManager--GetNonServiceProcessListAndIds_--_1_--dtor$2.c)
 *     _ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride_::_1_::dtor$2 @ 0x1804369BE (_ToastSettingsHelper--IsStackedPriorityToastsDisabledViaRegistryOverride_--_1_--dtor$2.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18045AE44 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1 + 8);
}
