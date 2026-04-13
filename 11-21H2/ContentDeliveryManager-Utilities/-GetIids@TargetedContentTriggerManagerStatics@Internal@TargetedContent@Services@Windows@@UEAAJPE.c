/*
 * XREFs of ?GetIids@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E740
 * Callers:
 *     ?GetIids@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E750 (-GetIids@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WCI@EAA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
