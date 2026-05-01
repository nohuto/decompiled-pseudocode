/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@NV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAN@Z @ 0x18040B000
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_2ca6ff0f9a9d350eddc24ae4814c127b_@@V_lambda_c7af47ddb6517722553ffe044be1a344_@@@?$InvalidationChecker@V?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_2ca6ff0f9a9d350eddc24ae4814c127b_@@AEBV_lambda_c7af47ddb6517722553ffe044be1a344_@@@Z @ 0x1803F2FF0 (--$Do@V_lambda_2ca6ff0f9a9d350eddc24ae4814c127b_@@V_lambda_c7af47ddb6517722553ffe044be1a344_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<double,Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,XWinRT::IntVersionTag,1>::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v5; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v4[0] = (_QWORD *)a1;
  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  v5 = &v6;
  v4[1] = &v6;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_2ca6ff0f9a9d350eddc24ae4814c127b_,_lambda_c7af47ddb6517722553ffe044be1a344_>(
           (unsigned int *)(a1 + 80),
           v2,
           v4,
           &v5);
}
