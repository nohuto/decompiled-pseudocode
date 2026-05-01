/*
 * XREFs of ?IndexOf@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x1803E4810
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_e0bb3c3df4dc9a52ce56cc58936db549_@@V_lambda_a7c457fda04319e8f223825db0a64f9f_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e0bb3c3df4dc9a52ce56cc58936db549_@@AEBV_lambda_a7c457fda04319e8f223825db0a64f9f_@@@Z @ 0x1803DBDA8 (--$Do@V_lambda_e0bb3c3df4dc9a52ce56cc58936db549_@@V_lambda_a7c457fda04319e8f223825db0a64f9f_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        int a2,
        ...)
{
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+68h] [rbp+18h] BYREF
  _DWORD *v7; // [rsp+70h] [rbp+20h] BYREF
  va_list va; // [rsp+70h] [rbp+20h]
  _BYTE *v9; // [rsp+78h] [rbp+28h] BYREF
  va_list va1; // [rsp+78h] [rbp+28h]
  va_list va2; // [rsp+80h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _DWORD *);
  va_copy(va2, va1);
  v9 = va_arg(va2, _BYTE *);
  v6 = a2;
  *v7 = 0;
  v5[0] = a1;
  *v9 = 0;
  v2 = *(_QWORD *)(a1 + 72);
  va_copy((va_list)v4, va);
  va_copy((va_list)&v4[1], va1);
  v5[1] = &v6;
  va_copy((va_list)&v5[2], va);
  va_copy((va_list)&v5[3], va1);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_e0bb3c3df4dc9a52ce56cc58936db549_,_lambda_a7c457fda04319e8f223825db0a64f9f_>(
           (unsigned int *)(a1 + 80),
           v2,
           (__int64)v5,
           (__int64)v4);
}
