/*
 * XREFs of _ShellPositionerManager::ChangeMonitor_::_1_::dtor$1 @ 0x1805A2B5E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellPositionerManager::ChangeMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 152));
}
