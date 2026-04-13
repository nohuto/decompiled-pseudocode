/*
 * XREFs of ??_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x1800488A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x1800485AC (--1TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ.c)
 */

HSTRING *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::~TargetedContentTriggerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
