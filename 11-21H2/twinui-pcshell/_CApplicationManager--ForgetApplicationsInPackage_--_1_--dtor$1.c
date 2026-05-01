/*
 * XREFs of _CApplicationManager::ForgetApplicationsInPackage_::_1_::dtor$1 @ 0x1802E2E9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ForgetApplicationsInPackage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 104));
}
