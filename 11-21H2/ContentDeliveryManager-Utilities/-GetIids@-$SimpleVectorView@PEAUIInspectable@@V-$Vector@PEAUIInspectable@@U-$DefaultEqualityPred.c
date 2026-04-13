/*
 * XREFs of ?GetIids@?$SimpleVectorView@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE510
 * Callers:
 *     ?GetIids@?$SimpleVectorView@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE520 (-GetIids@-$SimpleVectorView@PEAUIInspectable@@V-$Vector@PEAUIInspectable@@U-$Defaul_ea_1800DE520.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Microsoft::WRL::FtmBase>::GetIids(
           a1,
           a2,
           a3);
}
