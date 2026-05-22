/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IReference@M@Foundation@Windows@@UIPropertyValue@56@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A480
 * Callers:
 *     ?QueryInterface@?$ReferenceImpl@M@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFB20 (-QueryInterface@-$ReferenceImpl@M@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$ReferenceImpl@M@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFB40 (-QueryInterface@-$ReferenceImpl@M@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$ReferenceImpl@M@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFB60 (-QueryInterface@-$ReferenceImpl@M@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<float>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<float>,Windows::Foundation::IPropertyValue,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
