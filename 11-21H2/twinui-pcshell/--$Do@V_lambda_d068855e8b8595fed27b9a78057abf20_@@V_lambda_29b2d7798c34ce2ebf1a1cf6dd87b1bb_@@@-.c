/*
 * XREFs of ??$Do@V_lambda_d068855e8b8595fed27b9a78057abf20_@@V_lambda_29b2d7798c34ce2ebf1a1cf6dd87b1bb_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_d068855e8b8595fed27b9a78057abf20_@@AEBV_lambda_29b2d7798c34ce2ebf1a1cf6dd87b1bb_@@@Z @ 0x1803DBCE4
 * Callers:
 *     ?GetMany@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAI0@Z @ 0x1803E3B80 (-GetMany@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Found.c)
 * Callees:
 *     ??R_lambda_d068855e8b8595fed27b9a78057abf20_@@QEBAJXZ @ 0x1803DF9E4 (--R_lambda_d068855e8b8595fed27b9a78057abf20_@@QEBAJXZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_d068855e8b8595fed27b9a78057abf20_,_lambda_29b2d7798c34ce2ebf1a1cf6dd87b1bb_>(
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
    v8 = _lambda_d068855e8b8595fed27b9a78057abf20_::operator()(a3);
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
