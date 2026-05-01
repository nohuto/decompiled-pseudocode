/*
 * XREFs of ?IndexOf@?$SimpleVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x180486190
 * Callers:
 *     <none>
 * Callees:
 *     ??$Do@V_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@V_lambda_123df96a4f524ef8dd161fadb1d10211_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@AEBV_lambda_123df96a4f524ef8dd161fadb1d10211_@@@Z @ 0x180484AF4 (--$Do@V_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@V_lambda_123df96a4f524ef8dd161fadb1d10211_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,XWinRT::IntVersionTag,0>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v4; // rdx
  _BYTE *v6; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-20h] BYREF

  v6 = a4;
  v7 = a3;
  *a3 = 0;
  v9[0] = a1;
  v9[1] = a2;
  *v6 = 0;
  v4 = *(_QWORD *)(a1 + 40);
  v8[0] = &v7;
  v8[1] = &v6;
  v9[2] = &v7;
  v9[3] = &v6;
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>,XWinRT::IntVersionTag>::Do<_lambda_57044c20c66cf8294c87be4c07a9b9b5_,_lambda_123df96a4f524ef8dd161fadb1d10211_>(
           (unsigned int *)(a1 + 48),
           v4,
           (__int64)v9,
           (__int64)v8);
}
