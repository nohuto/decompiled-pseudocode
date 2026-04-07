/*
 * XREFs of wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___ @ 0x180100EBC
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$0 @ 0x180102EBE (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisuals_--_1_--dt.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102F40 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual_::_1_::dtor$0 @ 0x1801032B8 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisual_--_1_--dtor$0.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180103300 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor$0 @ 0x18010364D (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisualLive_--_1_--dtor.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103810 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_1_::dtor$0 @ 0x180103B82 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferWindowVisuals_--_1_--dtor$0.c)
 * Callees:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180101408 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(*(winrt::Udwm::Transitions::implementation::TransitionState **)a1);
  }
}
