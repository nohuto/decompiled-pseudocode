/*
 * XREFs of ?Default@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802DAC82
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_3e5ce8342f6a473a88624d708dac9d2e_@@CA@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1802DA000 (-_lambda_invoker_cdecl_@_lambda_3e5ce8342f6a473a88624d708dac9d2e_@@CA@AEBUIKnownOnScreenInputUri.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18050F1FC (-Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Default(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
