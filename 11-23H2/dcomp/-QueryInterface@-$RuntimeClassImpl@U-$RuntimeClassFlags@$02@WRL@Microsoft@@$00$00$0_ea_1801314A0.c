/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801314A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEFF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AEFF0.c)
 *     ?QueryInterface@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF010 (-QueryInterface@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WCI@EAAJAEBU.c)
 *     ?QueryInterface@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF030 (-QueryInterface@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAAJAEBU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::Internal::IEdgyDetectedEventArgs>>(
           a1,
           a2,
           a3);
}
