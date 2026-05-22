/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICompositionNotificationDeferral@Composition@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129130
 * Callers:
 *     ?QueryInterface@CompositionNotificationDeferral@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEBD0 (-QueryInterface@CompositionNotificationDeferral@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@CompositionNotificationDeferral@Composition@UI@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEBF0 (-QueryInterface@CompositionNotificationDeferral@Composition@UI@Windows@@WBA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Composition::ICompositionNotificationDeferral,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
