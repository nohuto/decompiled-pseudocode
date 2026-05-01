/*
 * XREFs of ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x18051DF1C
 * Callers:
 *     _AppResizeView::Hide_::_1_::dtor$0 @ 0x18051E6D8 (_AppResizeView--Hide_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<AppResizeView>::~ComPtr<AppResizeView>()
{
  return Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease();
}
