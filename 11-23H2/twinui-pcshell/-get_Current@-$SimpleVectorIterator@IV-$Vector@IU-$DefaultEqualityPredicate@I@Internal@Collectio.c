/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x1804CD530
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_b7dcfbb959be1c9f44d4f205f1d48ff1_@@V_lambda_8cf1f580253b49c737bded7f6e409854_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_b7dcfbb959be1c9f44d4f205f1d48ff1_@@AEBV_lambda_8cf1f580253b49c737bded7f6e409854_@@@Z @ 0x1804B8180 (--$Do@V_lambda_b7dcfbb959be1c9f44d4f205f1d48ff1_@@V_lambda_8cf1f580253b49c737bded7f6e409854_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,1>::get_Current(
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
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_b7dcfbb959be1c9f44d4f205f1d48ff1_,_lambda_8cf1f580253b49c737bded7f6e409854_>(
           (unsigned int *)(a1 + 80),
           v2,
           v4,
           &v5);
}
