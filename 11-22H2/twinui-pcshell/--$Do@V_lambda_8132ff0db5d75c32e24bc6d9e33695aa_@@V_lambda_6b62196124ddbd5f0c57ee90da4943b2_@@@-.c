/*
 * XREFs of ??$Do@V_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@?$InvalidationChecker@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@AEBV_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@Z @ 0x1803BE00C
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@25@PEAI@Z @ 0x1803C1270 (-GetMany@-$SimpleVectorIterator@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V-$Vector@PEAUIC.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@AEBV_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@Z @ 0x1803BDBA0 (--$AtomicUpdate@V_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@V_lambda_6b62196124ddbd5f0c57ee90da4.c)
 *     ??R_lambda_0380db859c415741d5e8b3d9729508af_@@QEBA@XZ @ 0x1803BF464 (--R_lambda_0380db859c415741d5e8b3d9729508af_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_8132ff0db5d75c32e24bc6d9e33695aa_,_lambda_6b62196124ddbd5f0c57ee90da4943b2_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v14[0] = &v15;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v15 = v8;
    v14[3] = v9;
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_2d8de7d2cb1962712917d5cbb57bd89a_,_lambda_6b62196124ddbd5f0c57ee90da4943b2_>(
            (volatile signed __int32 *)(v8 + 72),
            (__int64)v14,
            v10);
    v4 = v11;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_0380db859c415741d5e8b3d9729508af_::operator()(a4, v12);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
