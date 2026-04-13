/*
 * XREFs of ?GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180080370
 * Callers:
 *     ?GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180080380 (-GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
