/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C
 * Callers:
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001C528 (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001EEB4 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180021188 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180028668 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800407B0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800467D0 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18004CC30 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 *     wistd::__function::__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(int_const_&)_::operator() @ 0x18005EF20 (wistd--__function--__func__lambda_044de6e8757de13608340bdff9bfffd6__void___cdecl(in_ea_18005EF20.c)
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18005FCC0 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180098414 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x180099970 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_::_Do_call @ 0x18009BBA0 (std--_Func_impl_no_alloc__lambda_02cc1c50b8ad83b5853f3b1d8986beec__void_--_Do_call.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x18009CE90 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800CF640 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800D054C (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18010241C (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1801033C4 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180092A44 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>((__int64)this, a2, a3, 0LL, 0LL, retaddr, v4);
}
