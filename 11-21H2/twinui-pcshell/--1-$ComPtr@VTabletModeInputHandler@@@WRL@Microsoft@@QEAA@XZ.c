/*
 * XREFs of ??1?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x180520450
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeInputHandler_TabletModeInputHandler_enum_SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE_&_ITabletModeInputCallback___&__::_1_::dtor$2 @ 0x1805203C7 (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeInputHandler_TabletModeInputH_ea_1805203C7.c)
 *     _TabletModeInputHandler_CreateInstance_::_1_::dtor$0 @ 0x1805208DC (_TabletModeInputHandler_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeInputHandler_::s_WndProcBase_::_1_::dtor$0 @ 0x180520A83 (_CWRLImpWndProc_TabletModeInputHandler_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeInputHandler>::~ComPtr<TabletModeInputHandler>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(a1);
}
