/*
 * XREFs of ?EmojiOnKeyboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18050F65C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_803cf03a6e422ec65eca1ef5a923996d_@@CA@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x180507AD0 (-_lambda_invoker_cdecl_@_lambda_803cf03a6e422ec65eca1ef5a923996d_@@CA@AEBUIKnownOnScreenInputUri.c)
 *     ?EmojiOnKeyboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18050F6B0 (-EmojiOnKeyboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::EmojiOnKeyboard(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 104LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
