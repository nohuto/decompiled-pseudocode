/*
 * XREFs of ??1?$ComPtr@VGhostDivider@@@WRL@Microsoft@@QEAA@XZ @ 0x18052BA14
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_GhostDivider_GhostDivider_IPriviledgedPositioner___&_IApplicationView___&_enum_GhostDividerPlacement_&_enum_GhostDividerSize_&__::_1_::dtor$2 @ 0x18052B94A (_Microsoft--WRL--Details--MakeAndInitialize_GhostDivider_GhostDivider_IPriviledgedP_ea_18052B94A.c)
 *     _GhostDivider_CreateInstance_::_1_::dtor$0 @ 0x18052C08E (_GhostDivider_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_GhostDivider_::s_WndProcBase_::_1_::dtor$0 @ 0x18052CAB3 (_CWRLImpWndProc_GhostDivider_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<GhostDivider>::~ComPtr<GhostDivider>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease(a1);
}
