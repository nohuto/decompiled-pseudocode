/*
 * XREFs of _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$1 @ 0x1802B3B04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_CreateImmersiveApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((void *)(a2 + 232));
}
