/*
 * XREFs of ??$AtomicUpdate@V_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_2d8de7d2cb1962712917d5cbb57bd89a_@@AEBV_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@Z @ 0x1803BDBA0
 * Callers:
 *     ??$Do@V_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@?$InvalidationChecker@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@AEBV_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@Z @ 0x1803BE00C (--$Do@V_lambda_8132ff0db5d75c32e24bc6d9e33695aa_@@V_lambda_6b62196124ddbd5f0c57ee90da4943b2_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_0380db859c415741d5e8b3d9729508af_@@QEBA@XZ @ 0x1803BF464 (--R_lambda_0380db859c415741d5e8b3d9729508af_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_2d8de7d2cb1962712917d5cbb57bd89a_,_lambda_6b62196124ddbd5f0c57ee90da4943b2_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 64LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 64LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v10 = _InterlockedCompareExchange(a1, v3 + ***(_DWORD ***)(a2 + 24), v3);
    v9 = v3 == v10;
    v3 = v10;
    if ( v9 )
      break;
    _lambda_0380db859c415741d5e8b3d9729508af_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
