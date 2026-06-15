/*
 * XREFs of ?First@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUIBuffer@Streams@Storage@Windows@@@345@@Z @ 0x140083C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_55ffd9a6dada497864f0060e7c2442fc_@@V_lambda_01f654561f6914b7d349bbf6578065e4_@@@?$InvalidationChecker@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEBV_lambda_55ffd9a6dada497864f0060e7c2442fc_@@AEBV_lambda_01f654561f6914b7d349bbf6578065e4_@@@Z @ 0x14007D7C4 (--$Do@V_lambda_55ffd9a6dada497864f0060e7c2442fc_@@V_lambda_01f654561f6914b7d349bbf6578065e4_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,XWinRT::IntVersionTag>::Do<_lambda_55ffd9a6dada497864f0060e7c2442fc_,_lambda_01f654561f6914b7d349bbf6578065e4_>(
           (unsigned int *)(a1 + 32),
           *(_QWORD *)(a1 + 24),
           (__int64)v3,
           &v4);
}
