/*
 * XREFs of _ShellPositionerManager::ChangePositionerForView_::_1_::dtor$1 @ 0x1805A2E6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellPositionerManager::ChangePositionerForView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 40));
}
