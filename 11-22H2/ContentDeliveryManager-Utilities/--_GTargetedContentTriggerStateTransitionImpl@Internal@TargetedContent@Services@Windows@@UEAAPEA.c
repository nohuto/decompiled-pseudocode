/*
 * XREFs of ??_GTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x180048930
 * Callers:
 *     <none>
 * Callees:
 *     ??1TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x18004872C (--1TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ.c)
 */

HSTRING *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::~TargetedContentTriggerStateTransitionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
