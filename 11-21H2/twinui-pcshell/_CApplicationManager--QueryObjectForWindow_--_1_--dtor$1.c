/*
 * XREFs of _CApplicationManager::QueryObjectForWindow_::_1_::dtor$1 @ 0x1802E67FF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::QueryObjectForWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 80));
}
