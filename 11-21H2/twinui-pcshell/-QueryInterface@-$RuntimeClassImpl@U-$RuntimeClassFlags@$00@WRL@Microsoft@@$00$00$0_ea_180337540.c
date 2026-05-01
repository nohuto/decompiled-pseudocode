/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@N@Collections@Foundation@Windows@@U?$IIterable@N@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180337540
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@N@Collections@Foundation@Windows@@U?$IIterable@N@567@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F1040 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801F1040.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@N@Collections@Foundation@Windows@@U?$IIterable@N@567@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F1060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801F1060.c)
 *     ?QueryInterface@?$SimpleVectorView@NV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F1080 (-QueryInterface@-$SimpleVectorView@NV-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<double>,Windows::Foundation::Collections::IIterable<double>,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<double>,Windows::Foundation::Collections::IIterable<double>,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
