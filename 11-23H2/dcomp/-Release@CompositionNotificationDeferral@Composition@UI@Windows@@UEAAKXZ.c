/*
 * XREFs of ?Release@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAKXZ @ 0x1801294F0
 * Callers:
 *     ?Release@CompositionNotificationDeferral@Composition@UI@Windows@@W7EAAKXZ @ 0x1800AEE70 (-Release@CompositionNotificationDeferral@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@CompositionNotificationDeferral@Composition@UI@Windows@@WBA@EAAKXZ @ 0x1800AEE90 (-Release@CompositionNotificationDeferral@Composition@UI@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::CompositionNotificationDeferral::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::Release(this);
}
