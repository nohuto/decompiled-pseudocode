/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800489F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,IInspectable,>(a2);
}
