/*
 * XREFs of _WindowArrangementView::GetPrimaryMonitor_::_1_::dtor$0 @ 0x180519C01
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowArrangementView::GetPrimaryMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 64));
}
