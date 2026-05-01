/*
 * XREFs of ?DictationLauncher@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics2@UIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18050F4AC
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_d7689dc6f0914efbcbcedca12b0f3de5_@@CA@AEBUIKnownOnScreenInputUriSchemesStatics2@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x180507C40 (-_lambda_invoker_cdecl_@_lambda_d7689dc6f0914efbcbcedca12b0f3de5_@@CA@AEBUIKnownOnScreenInputUri.c)
 *     ?DictationLauncher@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18050F500 (-DictationLauncher@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics2<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics2>::DictationLauncher(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
