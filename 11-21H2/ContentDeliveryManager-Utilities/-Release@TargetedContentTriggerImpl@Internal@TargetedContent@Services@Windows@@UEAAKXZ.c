/*
 * XREFs of ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180050EB0
 * Callers:
 *     ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180050EC0 (-Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 *     ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180050EE0 (-Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
