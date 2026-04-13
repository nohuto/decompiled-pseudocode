/*
 * XREFs of ?get_CurrentState@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TargetedContentTriggerState@2345@@Z @ 0x1800968D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::get_CurrentState(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this,
        enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 20);
  return 0LL;
}
