/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800CA500
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_27f938e02af0159e8667f2ba2cd1e111_@@V_lambda_1b1eb2b76740278054e13791cb8889ca_@@@?$InvalidationChecker@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_27f938e02af0159e8667f2ba2cd1e111_@@AEBV_lambda_1b1eb2b76740278054e13791cb8889ca_@@@Z @ 0x1800C5070 (--$Do@V_lambda_27f938e02af0159e8667f2ba2cd1e111_@@V_lambda_1b1eb2b76740278054e13791cb8889ca_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v4[0] = a1;
  v5 = &v6;
  v2 = *(_QWORD *)(a1 + 64);
  v4[1] = (__int64)&v6;
  v4[2] = (__int64)&v5;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_27f938e02af0159e8667f2ba2cd1e111_,_lambda_1b1eb2b76740278054e13791cb8889ca_>(
           (unsigned int *)(a1 + 80),
           v2,
           v4,
           &v5);
}
