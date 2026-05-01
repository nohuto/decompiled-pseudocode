/*
 * XREFs of ??$AtomicUpdate@V_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x1803F2A3C
 * Callers:
 *     ??$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_706214702ba8e4e5bf3b0c705a271399_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x1803F34E8 (--$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBA@XZ @ 0x1803F9EF0 (--R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_17fc2dabd803311acd0a5fc425e8fb04_,_lambda_02a5b67107c76916fb61c0bd440a6e26_>(
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
    _lambda_02a5b67107c76916fb61c0bd440a6e26_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
