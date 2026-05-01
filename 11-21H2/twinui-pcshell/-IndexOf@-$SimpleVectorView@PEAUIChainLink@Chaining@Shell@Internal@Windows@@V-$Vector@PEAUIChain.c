/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAUIChainLink@Chaining@Shell@25@PEAIPEAE@Z @ 0x180305C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_404d2e901a657b8ed74a5418f1e54072_@@V_lambda_d016f93e52d25e437752a1787f6bccc4_@@@?$InvalidationChecker@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_404d2e901a657b8ed74a5418f1e54072_@@AEBV_lambda_d016f93e52d25e437752a1787f6bccc4_@@@Z @ 0x180301D1C (--$Do@V_lambda_404d2e901a657b8ed74a5418f1e54072_@@V_lambda_d016f93e52d25e437752a1787f6bccc4_@@@-.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        ...)
{
  __int64 v1; // rdx
  _QWORD v3[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v4[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+68h] [rbp+18h] BYREF
  va_list va; // [rsp+68h] [rbp+18h]
  _DWORD *v7; // [rsp+70h] [rbp+20h] BYREF
  va_list va1; // [rsp+70h] [rbp+20h]
  _BYTE *v9; // [rsp+78h] [rbp+28h] BYREF
  va_list va2; // [rsp+78h] [rbp+28h]
  va_list va3; // [rsp+80h] [rbp+30h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v9 = va_arg(va3, _BYTE *);
  *v7 = 0;
  v4[0] = (_QWORD *)a1;
  *v9 = 0;
  v1 = *(_QWORD *)(a1 + 72);
  va_copy((va_list)v3, va1);
  va_copy((va_list)&v3[1], va2);
  va_copy((va_list)&v4[1], va);
  va_copy((va_list)&v4[2], va1);
  va_copy((va_list)&v4[3], va2);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_404d2e901a657b8ed74a5418f1e54072_,_lambda_d016f93e52d25e437752a1787f6bccc4_>(
           (unsigned int *)(a1 + 80),
           v1,
           v4,
           (__int64)v3);
}
