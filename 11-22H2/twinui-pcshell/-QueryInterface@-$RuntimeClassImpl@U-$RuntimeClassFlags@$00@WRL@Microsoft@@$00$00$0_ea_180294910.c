/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@N@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180294910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<double>,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1)
{
  return Windows::Foundation::Collections::Internal::SimpleVectorIterator<double,Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,XWinRT::IntVersionTag,1>::QueryInterface(a1 - 16);
}
