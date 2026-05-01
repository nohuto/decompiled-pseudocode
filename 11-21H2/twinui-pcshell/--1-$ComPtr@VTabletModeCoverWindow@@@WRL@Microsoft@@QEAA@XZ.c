/*
 * XREFs of ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180520AF4
 * Callers:
 *     _CWRLImpWndProc_TabletModeCoverWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x180221345 (_CWRLImpWndProc_TabletModeCoverWindow_--s_WndProcBase_--_1_--dtor$0.c)
 *     _ChromeManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18022273E (_ChromeManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown___&__::_1_::dtor$2 @ 0x180222750 (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(a1);
}
