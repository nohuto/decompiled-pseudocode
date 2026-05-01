/*
 * XREFs of ??$Do@V_lambda_7ebe6008d74cfd1a62d6a82a31bd855a_@@V_lambda_e90a49518b405247fc30b90a48097983_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7ebe6008d74cfd1a62d6a82a31bd855a_@@AEBV_lambda_e90a49518b405247fc30b90a48097983_@@@Z @ 0x1802DEB0A
 * Callers:
 *     ?GetAt@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802DEBF0 (-GetAt@-$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V-$V.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_7ebe6008d74cfd1a62d6a82a31bd855a_,_lambda_e90a49518b405247fc30b90a48097983_>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a3 + 40LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)a3 + 40LL),
           **(unsigned int **)(a3 + 8),
           **(_QWORD **)(a3 + 16));
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
        v9 = **a4;
        *(_OWORD *)v9 = 0LL;
        *(_OWORD *)(v9 + 16) = 0LL;
        *(_OWORD *)(v9 + 32) = 0LL;
        *(_QWORD *)(v9 + 48) = 0LL;
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
