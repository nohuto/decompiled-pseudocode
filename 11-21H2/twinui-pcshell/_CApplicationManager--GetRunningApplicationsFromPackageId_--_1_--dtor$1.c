/*
 * XREFs of _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$1 @ 0x1802E3F74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 136));
}
