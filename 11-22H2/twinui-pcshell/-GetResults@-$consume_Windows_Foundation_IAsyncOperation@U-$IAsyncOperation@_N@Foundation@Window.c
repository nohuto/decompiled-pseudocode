/*
 * XREFs of ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x1802DF39E
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x1802841E4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805509A0 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@.c)
 *     ??$wait_get@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@@Z @ 0x18062EC90 (--$wait_get@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$IAsyncOpera.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x18062F770 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x1806336E0 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180652A40 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180730B10 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 64LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
