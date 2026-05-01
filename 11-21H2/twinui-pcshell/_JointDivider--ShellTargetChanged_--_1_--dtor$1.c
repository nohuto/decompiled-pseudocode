/*
 * XREFs of _JointDivider::ShellTargetChanged_::_1_::dtor$1 @ 0x180522370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointDivider::ShellTargetChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 112));
}
