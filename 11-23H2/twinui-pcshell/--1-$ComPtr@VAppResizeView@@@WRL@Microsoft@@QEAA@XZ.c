/*
 * XREFs of ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x1805D6608
 * Callers:
 *     _AppResizeView::Hide_::_1_::dtor$0 @ 0x1805D7088 (_AppResizeView--Hide_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<AppResizeView>::~ComPtr<AppResizeView>()
{
  return Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease();
}
