/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAH@Z @ 0x18040AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_c706b53595b10e49581ea9b25becafac_@@V_lambda_88478be36444d3941fa5a2d9b6eec8e7_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_c706b53595b10e49581ea9b25becafac_@@AEBV_lambda_88478be36444d3941fa5a2d9b6eec8e7_@@@Z @ 0x1803F382C (--$Do@V_lambda_c706b53595b10e49581ea9b25becafac_@@V_lambda_88478be36444d3941fa5a2d9b6eec8e7_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<int,Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,XWinRT::IntVersionTag,1>::get_Current(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD **v5; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v4[0] = (_QWORD *)a1;
  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 64);
  v5 = &v6;
  v4[1] = &v6;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_c706b53595b10e49581ea9b25becafac_,_lambda_88478be36444d3941fa5a2d9b6eec8e7_>(
           (unsigned int *)(a1 + 80),
           v2,
           v4,
           &v5);
}
