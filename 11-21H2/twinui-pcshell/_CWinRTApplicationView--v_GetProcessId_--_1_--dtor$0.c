/*
 * XREFs of _CWinRTApplicationView::v_GetProcessId_::_1_::dtor$0 @ 0x180314A42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWinRTApplicationView::v_GetProcessId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
