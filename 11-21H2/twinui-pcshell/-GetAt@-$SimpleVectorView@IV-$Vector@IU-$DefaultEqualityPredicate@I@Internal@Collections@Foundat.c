/*
 * XREFs of ?GetAt@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x1803E3070
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_274be6df5af8e4ffa8c468a9f9cd3161_@@V_lambda_8540fbf29b2308a86d4a3af6be1d3b81_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_274be6df5af8e4ffa8c468a9f9cd3161_@@AEBV_lambda_8540fbf29b2308a86d4a3af6be1d3b81_@@@Z @ 0x1803DB518 (--$Do@V_lambda_274be6df5af8e4ffa8c468a9f9cd3161_@@V_lambda_8540fbf29b2308a86d4a3af6be1d3b81_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,1>::GetAt(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD **v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v5[0] = a1;
  *a3 = 0;
  v6 = &v8;
  v5[1] = &v7;
  v3 = *(_QWORD *)(a1 + 72);
  v5[2] = &v8;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_274be6df5af8e4ffa8c468a9f9cd3161_,_lambda_8540fbf29b2308a86d4a3af6be1d3b81_>(
           (unsigned int *)(a1 + 80),
           v3,
           (__int64)v5,
           &v6);
}
