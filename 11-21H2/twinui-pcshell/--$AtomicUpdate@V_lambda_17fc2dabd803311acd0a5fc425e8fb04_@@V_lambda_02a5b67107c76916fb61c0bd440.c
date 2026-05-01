/*
 * XREFs of ??$AtomicUpdate@V_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x1803251DC
 * Callers:
 *     ??$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_706214702ba8e4e5bf3b0c705a271399_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x180325C7C (--$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBAXXZ @ 0x18032C870 (--R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBAXXZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_17fc2dabd803311acd0a5fc425e8fb04_,_lambda_02a5b67107c76916fb61c0bd440a6e26_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // edi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

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
    v9 = v3 + ***(_DWORD ***)(a2 + 24);
    v11 = _InterlockedCompareExchange(a1, v9, v3);
    v10 = v3 == v11;
    v3 = v11;
    if ( v10 )
      break;
    _lambda_02a5b67107c76916fb61c0bd440a6e26_::operator()(a3, v9, v8);
  }
  return (unsigned int)v8;
}
