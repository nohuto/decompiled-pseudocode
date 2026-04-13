/*
 * XREFs of ?GetIids@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180080340
 * Callers:
 *     ?GetIids@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180080350 (-GetIids@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>::GetIids(
           this,
           a2,
           a3);
}
