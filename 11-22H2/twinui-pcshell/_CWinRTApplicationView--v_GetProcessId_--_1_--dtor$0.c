/*
 * XREFs of _CWinRTApplicationView::v_GetProcessId_::_1_::dtor$0 @ 0x1803CFFC2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWinRTApplicationView::v_GetProcessId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
