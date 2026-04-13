/*
 * XREFs of ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050570
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050580 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU.c)
 *     ?QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800505A0 (-QueryInterface@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::QueryInterface(
        __int64 this,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
