/*
 * XREFs of _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$2 @ 0x1802F4833
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 80));
}
