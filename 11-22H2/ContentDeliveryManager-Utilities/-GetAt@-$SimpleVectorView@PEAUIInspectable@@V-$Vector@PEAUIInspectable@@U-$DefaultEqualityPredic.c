/*
 * XREFs of ?GetAt@?$SimpleVectorView@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1800C8690
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_24176a9e19e08bb00a98a8702a2fb2ad_@@V_lambda_26e30b513ea6a70dfece849f900c577d_@@@?$InvalidationChecker@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_24176a9e19e08bb00a98a8702a2fb2ad_@@AEBV_lambda_26e30b513ea6a70dfece849f900c577d_@@@Z @ 0x1800C4FE8 (--$Do@V_lambda_24176a9e19e08bb00a98a8702a2fb2ad_@@V_lambda_26e30b513ea6a70dfece849f900c577d_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::GetAt(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 **v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  *a3 = 0LL;
  v6 = &v8;
  v5[0] = a1;
  v5[1] = &v7;
  v3 = *(_QWORD *)(a1 + 72);
  v5[2] = &v8;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_24176a9e19e08bb00a98a8702a2fb2ad_,_lambda_26e30b513ea6a70dfece849f900c577d_>(
           (unsigned int *)(a1 + 80),
           v3,
           (__int64)v5,
           &v6);
}
