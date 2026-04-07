/*
 * XREFs of ??1?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@XZ @ 0x180099914
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$0 @ 0x1800653F4 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler_::_1_::dtor$6 @ 0x180065F08 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_180065F08.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CWindowBorder::CCachedBorderBrush>::~shared_ptr<CWindowBorder::CCachedBorderBrush>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
