/*
 * XREFs of ?GetIids@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
