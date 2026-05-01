/*
 * XREFs of ?get_Size@?$SimpleVectorView@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x18033D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_3a0230e7d9bf53f1dd9829da6e53d76b_@@V_lambda_8e187b6b8913ab5cc0df1ff18f2dd9b2_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_3a0230e7d9bf53f1dd9829da6e53d76b_@@AEBV_lambda_8e187b6b8913ab5cc0df1ff18f2dd9b2_@@@Z @ 0x18032592C (--$Do@V_lambda_3a0230e7d9bf53f1dd9829da6e53d76b_@@V_lambda_8e187b6b8913ab5cc0df1ff18f2dd9b2_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<int,Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,XWinRT::IntVersionTag,1>::get_Size(
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
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_3a0230e7d9bf53f1dd9829da6e53d76b_,_lambda_8e187b6b8913ab5cc0df1ff18f2dd9b2_>(
           (unsigned int *)(a1 + 80),
           *(_QWORD *)(a1 + 72),
           v3,
           &v4);
}
