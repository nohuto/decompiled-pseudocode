/*
 * XREFs of ?GetRuntimeClassName@?$SimpleVectorView@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180331FC0
 * Callers:
 *     ?GetRuntimeClassName@?$SimpleVectorView@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F0CE0 (-GetRuntimeClassName@-$SimpleVectorView@HV-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Colle.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<int,Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,XWinRT::IntVersionTag,1>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.Collections.IVectorView`1<Int32>", 0x33u, a2);
}
