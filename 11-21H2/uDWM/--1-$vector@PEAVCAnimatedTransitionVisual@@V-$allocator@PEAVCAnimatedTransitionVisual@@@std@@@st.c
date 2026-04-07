/*
 * XREFs of ??1?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@QEAA@XZ @ 0x180099934
 * Callers:
 *     _CDesktopManager::CreateMonitorRenderTargetsLegacy_::_1_::dtor$3 @ 0x1800655A6 (_CDesktopManager--CreateMonitorRenderTargetsLegacy_--_1_--dtor$3.c)
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$1 @ 0x1800661A0 (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$1.c)
 *     _CAcrylicSheet::StartAnimationShowOrHide_::_1_::dtor$1 @ 0x18009B072 (_CAcrylicSheet--StartAnimationShowOrHide_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation_::_1_::dtor$4 @ 0x1800F5423 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_1800F5423.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CAnimatedTransitionVisual *>::~vector<CAnimatedTransitionVisual *>(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
