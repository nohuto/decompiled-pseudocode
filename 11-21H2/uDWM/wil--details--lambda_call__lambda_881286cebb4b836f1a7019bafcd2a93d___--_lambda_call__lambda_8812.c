/*
 * XREFs of wil::details::lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___::_lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___ @ 0x1800FCADC
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$0 @ 0x1800FE52B (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisuals_--_1_--dt.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual_::_1_::dtor$0 @ 0x1800FE8BE (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisual_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_1_::dtor$0 @ 0x1800FEC2E (_winrt--Udwm--Transitions--implementation--TransitionState--TransferWindowVisuals_--_1_--dtor$0.c)
 * Callees:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800125AC (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___::_lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(*(winrt::Udwm::Transitions::implementation::TransitionState **)a1);
  }
}
