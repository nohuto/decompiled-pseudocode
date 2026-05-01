/*
 * XREFs of ??$Do@V_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@V_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@AEBV_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_@@@Z @ 0x1803DBAB4
 * Callers:
 *     ?GetMany@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x1803E3C20 (-GetMany@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ??R_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@QEBAJXZ @ 0x1803DF8B0 (--R_lambda_6614a9cc9bed71c749f37e4aac432a1a_@@QEBAJXZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_6614a9cc9bed71c749f37e4aac432a1a_,_lambda_f142a9d70bba406ecb3bdbe7c6fa48c3_>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 v9; // r8
  _DWORD *v10; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = _lambda_6614a9cc9bed71c749f37e4aac432a1a_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 136) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = 0LL;
        v10 = (_DWORD *)**a4;
        if ( *v10 )
        {
          do
          {
            *(_DWORD *)(*a4[1] + 4 * v9) = 0;
            v9 = (unsigned int)(v9 + 1);
            v10 = (_DWORD *)**a4;
          }
          while ( (unsigned int)v9 < *v10 );
        }
        *v10 = 0;
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
