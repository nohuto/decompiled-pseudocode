/*
 * XREFs of ??$Do@V_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@V_lambda_cca8e2aefe646e868e7a8134ba1e0907_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@AEBV_lambda_cca8e2aefe646e868e7a8134ba1e0907_@@@Z @ 0x180484C78
 * Callers:
 *     ?GetMany@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x180485600 (-GetMany@-$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V-.c)
 * Callees:
 *     ??R_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@QEBAJXZ @ 0x180484F6C (--R_lambda_8c1c21ab28514f86d440616c30b5b7ab_@@QEBAJXZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_8c1c21ab28514f86d440616c30b5b7ab_,_lambda_cca8e2aefe646e868e7a8134ba1e0907_>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        unsigned int ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = _lambda_8c1c21ab28514f86d440616c30b5b7ab_::operator()(a3);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = 0;
        v10 = **a4;
        if ( *v10 )
        {
          do
          {
            v11 = 14LL * v9++;
            v12 = (__int64)&(*a4[1])[v11];
            *(_OWORD *)v12 = 0LL;
            *(_OWORD *)(v12 + 16) = 0LL;
            *(_OWORD *)(v12 + 32) = 0LL;
            *(_QWORD *)(v12 + 48) = 0LL;
            v10 = **a4;
          }
          while ( v9 < *v10 );
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
