/*
 * XREFs of ??$AtomicUpdate@V_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@AEBV_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@Z @ 0x1803DB1C8
 * Callers:
 *     ??$Do@V_lambda_50d47402265d04ef4954bf0807805341_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_50d47402265d04ef4954bf0807805341_@@AEBV_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@Z @ 0x1803DB6C0 (--$Do@V_lambda_50d47402265d04ef4954bf0807805341_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBAXXZ @ 0x18032C870 (--R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBAXXZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_,_lambda_a3c8e308188640b6b3d4061a76232d7c_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // edi
  int v7; // r8d
  bool v8; // zf
  signed __int32 v9; // eax

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
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v3 + ***(_DWORD ***)(a2 + 24), v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    _lambda_02a5b67107c76916fb61c0bd440a6e26_::operator()(a3);
  }
  return (unsigned int)v7;
}
