/*
 * XREFs of ??$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemoteDesktopProviderInfo@3456@AEAUTransitionScreen@8CloudDesktop@3456@UTransitionScreenId@893456@W4CloudPCState@3456@_N@std@@YA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@0@AEAURemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@AEAUTransitionScreen@7CloudDesktop@3456@$$QEAUTransitionScreenId@783456@$$QEAW4CloudPCState@3456@$$QEA_N@Z @ 0x18071F8CC
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBURemoteDesktopProviderInfo@2345@AEBUTransitionScreen@7CloudDesktop@2345@AEBUTransitionScreenId@782345@W4CloudPCState@2345@_N@Z @ 0x180733880 (--0RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBURemoteDesktopP.c)
 */

_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen &,winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId,enum winrt::Windows::Internal::Shell::CloudPCState,bool>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char *a6)
{
  _QWORD *result; // rax
  char v11; // [rsp+28h] [rbp-30h]
  _DWORD *v12; // [rsp+60h] [rbp+8h]

  v12 = operator new(0xB8uLL);
  *(_OWORD *)v12 = 0LL;
  v12[2] = 1;
  v12[3] = 1;
  *(_QWORD *)v12 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::`vftable';
  v11 = *a6;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteSessionInformation(
    v12 + 4,
    a2,
    a3,
    a4,
    *a5,
    v11);
  result = a1;
  *a1 = v12 + 4;
  a1[1] = v12;
  return result;
}
