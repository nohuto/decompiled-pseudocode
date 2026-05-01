/*
 * XREFs of ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1805D94C4
 * Callers:
 *     _CoverWindow_CreateInstance_::_1_::dtor$0 @ 0x1802BCA85 (_CoverWindow_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown___&__::_1_::dtor$2 @ 0x1802BCA97 (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown.c)
 *     _CWRLImpWndProc_TabletModeCoverWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1802C428A (_CWRLImpWndProc_TabletModeCoverWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(a1);
}
