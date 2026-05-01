/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180079090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocus(CApplicationViewManager *this, struct IApplicationView *a2)
{
  return CApplicationViewManager::SetViewInFocusHelper((char *)this - 136, a2, 0LL);
}
