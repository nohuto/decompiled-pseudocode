/*
 * XREFs of ?get_NextState@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TargetedContentTriggerState@2345@@Z @ 0x180096BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::get_NextState(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this,
        enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 21);
  return 0LL;
}
