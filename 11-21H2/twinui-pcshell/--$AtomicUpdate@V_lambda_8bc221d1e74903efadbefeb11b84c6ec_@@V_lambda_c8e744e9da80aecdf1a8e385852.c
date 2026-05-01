/*
 * XREFs of ??$AtomicUpdate@V_lambda_8bc221d1e74903efadbefeb11b84c6ec_@@V_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_8bc221d1e74903efadbefeb11b84c6ec_@@AEBV_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@Z @ 0x1803C0144
 * Callers:
 *     ??$Do@V_lambda_3a98c8a7423d4b807e837a325f80122e_@@V_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@?$InvalidationChecker@V?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_3a98c8a7423d4b807e837a325f80122e_@@AEBV_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@Z @ 0x1803C04B0 (--$Do@V_lambda_3a98c8a7423d4b807e837a325f80122e_@@V_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_650fd9d9db8669d2792e699e88328aea_@@QEBAXXZ @ 0x1803C263C (--R_lambda_650fd9d9db8669d2792e699e88328aea_@@QEBAXXZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_8bc221d1e74903efadbefeb11b84c6ec_,_lambda_c8e744e9da80aecdf1a8e385852bba04_>(
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
    _lambda_650fd9d9db8669d2792e699e88328aea_::operator()(a3, v9, v8);
  }
  return (unsigned int)v8;
}
