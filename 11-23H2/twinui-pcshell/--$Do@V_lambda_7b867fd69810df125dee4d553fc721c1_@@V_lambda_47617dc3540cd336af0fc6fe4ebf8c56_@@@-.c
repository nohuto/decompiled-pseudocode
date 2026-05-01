/*
 * XREFs of ??$Do@V_lambda_7b867fd69810df125dee4d553fc721c1_@@V_lambda_47617dc3540cd336af0fc6fe4ebf8c56_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7b867fd69810df125dee4d553fc721c1_@@AEBV_lambda_47617dc3540cd336af0fc6fe4ebf8c56_@@@Z @ 0x1803F35C4
 * Callers:
 *     ?GetMany@?$SimpleVectorView@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAHPEAI@Z @ 0x1803FE030 (-GetMany@-$SimpleVectorView@HV-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Found.c)
 * Callees:
 *     ??R_lambda_7b867fd69810df125dee4d553fc721c1_@@QEBAJXZ @ 0x1803FA140 (--R_lambda_7b867fd69810df125dee4d553fc721c1_@@QEBAJXZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_7b867fd69810df125dee4d553fc721c1_,_lambda_47617dc3540cd336af0fc6fe4ebf8c56_>(
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
    v8 = _lambda_7b867fd69810df125dee4d553fc721c1_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
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
