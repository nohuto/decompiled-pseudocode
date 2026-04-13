/*
 * XREFs of ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080C30
 * Callers:
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080C40 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7E.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080C60 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080C80 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::QueryInterface(
           this,
           a2,
           a3);
}
