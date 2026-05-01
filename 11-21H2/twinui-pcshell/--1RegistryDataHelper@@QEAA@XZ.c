/*
 * XREFs of ??1RegistryDataHelper@@QEAA@XZ @ 0x180196490
 * Callers:
 *     _ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride_::_1_::dtor$2 @ 0x180196E7E (_ToastSettingsHelper--IsStackedPriorityToastsDisabledViaRegistryOverride_--_1_--dtor$2.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18038682C (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RegistryDataHelper::~RegistryDataHelper(void **this)
{
  std::wstring::~wstring(this + 1);
}
