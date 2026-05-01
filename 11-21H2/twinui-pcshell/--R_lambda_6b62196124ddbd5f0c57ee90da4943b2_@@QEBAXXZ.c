/*
 * XREFs of ??R_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@QEBAXXZ @ 0x180303290
 * Callers:
 *     ??$AtomicUpdate@V_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@AEBV_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@Z @ 0x180301B30 (--$AtomicUpdate@V_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@V_lambda_6b62196124ddbd5f0c57ee90da4.c)
 *     ??$Do@V_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@?$InvalidationChecker@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@AEBV_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@Z @ 0x180301F98 (--$Do@V_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@-.c)
 *     ?GetMany@?$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIChainLink@Chaining@Shell@25@PEAI@Z @ 0x180304DE0 (-GetMany@-$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V-$Vector@PEAUIChain.c)
 * Callees:
 *     ??$Destroy@UIChainLink@Chaining@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180301CE0 (--$Destroy@UIChainLink@Chaining@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 */

_DWORD **__fastcall _lambda_6b62196124ddbd5f0c57ee90da4943b2_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::Chaining::IChainLink>((__int64 *)(*a1[1] + 8 * v2));
      result = (_DWORD **)*a1;
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
