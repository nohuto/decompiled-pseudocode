/*
 * XREFs of ??$AtomicUpdate@V_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@AEBV_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@Z @ 0x1803DB270
 * Callers:
 *     ??$Do@V_lambda_36b5c8f95231248674adbd74a944c413_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_36b5c8f95231248674adbd74a944c413_@@AEBV_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@Z @ 0x1803DB5E4 (--$Do@V_lambda_36b5c8f95231248674adbd74a944c413_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@QEBAXXZ @ 0x1803DF724 (--R_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@QEBAXXZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_dfdeed7a205ac3b08c6339ac8edc183d_,_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_>(
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
    _lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_::operator()(a3, v9, v8);
  }
  return (unsigned int)v8;
}
