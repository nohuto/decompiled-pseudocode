/*
 * XREFs of ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080CA0
 * Callers:
 *     ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080CB0 (-QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAE.c)
 *     ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080CD0 (-QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::QueryInterface(
        __int64 this,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
