/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@NV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEANPEAI@Z @ 0x1803FDF00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@?$InvalidationChecker@V?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x1803F38F0 (--$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<double,Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+18h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v10; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _DWORD *);
  v7 = a2;
  v2 = 0LL;
  for ( *v10 = 0; (unsigned int)v2 < v7; v2 = (unsigned int)(v2 + 1) )
    *(_QWORD *)(v8 + 8 * v2) = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  va_copy((va_list)v5, va1);
  v6[0] = a1;
  va_copy((va_list)&v5[1], va);
  v6[1] = (__int64)&v7;
  va_copy((va_list)&v6[2], va);
  va_copy((va_list)&v6[3], va1);
  v6[4] = (__int64)v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_d428f7c8a4b516adeeadefd5633ad28b_,_lambda_87b94cae8472a6af671a98fd44ffe4d1_>(
           (unsigned int *)(a1 + 80),
           v3,
           v6,
           (__int64)v5);
}
