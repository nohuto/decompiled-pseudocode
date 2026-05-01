/*
 * XREFs of ??$AtomicUpdate@V_lambda_f301a8a5f4722f9e385eb363266600ba_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_f301a8a5f4722f9e385eb363266600ba_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x1803F2B94
 * Callers:
 *     ??$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@?$InvalidationChecker@V?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x1803F38F0 (--$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@QEBA@XZ @ 0x1803FA1A4 (--R_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_f301a8a5f4722f9e385eb363266600ba_,_lambda_87b94cae8472a6af671a98fd44ffe4d1_>(
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
    _lambda_87b94cae8472a6af671a98fd44ffe4d1_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
