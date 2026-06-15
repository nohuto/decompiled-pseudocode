/*
 * XREFs of ?get_Size@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x14008E170
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_359495c150c46b7a3288d1331afae8ac_@@V_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_@@@?$InvalidationChecker@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEBV_lambda_359495c150c46b7a3288d1331afae8ac_@@AEBV_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_@@@Z @ 0x14007D3AC (--$Do@V_lambda_359495c150c46b7a3288d1331afae8ac_@@V_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v4; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0;
  v3[0] = (_QWORD *)a1;
  v4 = &v5;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,XWinRT::IntVersionTag>::Do<_lambda_359495c150c46b7a3288d1331afae8ac_,_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_>(
           (unsigned int *)(a1 + 48),
           *(_QWORD *)(a1 + 40),
           v3,
           &v4);
}
