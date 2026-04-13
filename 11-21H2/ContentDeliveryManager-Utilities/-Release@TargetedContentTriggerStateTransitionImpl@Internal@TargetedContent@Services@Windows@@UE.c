/*
 * XREFs of ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180050F00
 * Callers:
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180050F10 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7.c)
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180050F30 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::Release(this);
}
