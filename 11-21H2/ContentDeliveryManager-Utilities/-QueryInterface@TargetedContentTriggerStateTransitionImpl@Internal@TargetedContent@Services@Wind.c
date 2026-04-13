/*
 * XREFs of ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050610
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050620 (-QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@_ea_180050620.c)
 *     ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050640 (-QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@_ea_180050640.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::QueryInterface(
        __int64 this,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
