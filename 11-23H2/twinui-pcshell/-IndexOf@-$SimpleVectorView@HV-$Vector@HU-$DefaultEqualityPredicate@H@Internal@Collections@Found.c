/*
 * XREFs of ?IndexOf@?$SimpleVectorView@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJHPEAIPEAE@Z @ 0x1804006A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_5dd87cd4cbb2f027e1d9f1854528a0f0_@@V_lambda_eb382489eac75603bb1fb42314f5911c_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_5dd87cd4cbb2f027e1d9f1854528a0f0_@@AEBV_lambda_eb382489eac75603bb1fb42314f5911c_@@@Z @ 0x1803F3408 (--$Do@V_lambda_5dd87cd4cbb2f027e1d9f1854528a0f0_@@V_lambda_eb382489eac75603bb1fb42314f5911c_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<int,Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,XWinRT::IntVersionTag,1>::IndexOf(
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
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_5dd87cd4cbb2f027e1d9f1854528a0f0_,_lambda_eb382489eac75603bb1fb42314f5911c_>(
           (unsigned int *)(a1 + 80),
           v2,
           (__int64)v5,
           (__int64)v4);
}
