/*
 * XREFs of ??$Do@V_lambda_36b5c8f95231248674adbd74a944c413_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_36b5c8f95231248674adbd74a944c413_@@AEBV_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@Z @ 0x1803DB5E4
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x1803E3AE0 (-GetMany@-$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@V_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@AEBV_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@@Z @ 0x1803DB270 (--$AtomicUpdate@V_lambda_dfdeed7a205ac3b08c6339ac8edc183d_@@V_lambda_49ef72c3c0df4c7d81076c2b76d.c)
 *     ??R_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@QEBAXXZ @ 0x1803DF724 (--R_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_@@QEBAXXZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_36b5c8f95231248674adbd74a944c413_,_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_>(
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
  __int64 v13; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v15[0] = &v16;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v16 = v8;
    v15[3] = v9;
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_dfdeed7a205ac3b08c6339ac8edc183d_,_lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_>(
            (volatile signed __int32 *)(v8 + 72),
            (__int64)v15,
            v10);
    v4 = v11;
    if ( a1[1] != *(_DWORD *)(a2 + 136) )
    {
      *a1 = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_49ef72c3c0df4c7d81076c2b76dc8a5e_::operator()(a4, v12, v13);
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
