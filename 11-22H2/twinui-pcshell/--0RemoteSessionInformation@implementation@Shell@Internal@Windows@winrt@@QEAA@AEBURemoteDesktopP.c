/*
 * XREFs of ??0RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBURemoteDesktopProviderInfo@2345@AEBUTransitionScreen@7CloudDesktop@2345@AEBUTransitionScreenId@782345@W4CloudPCState@2345@_N@Z @ 0x180733880
 * Callers:
 *     ??$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemoteDesktopProviderInfo@3456@AEAUTransitionScreen@8CloudDesktop@3456@UTransitionScreenId@893456@W4CloudPCState@3456@_N@std@@YA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@0@AEAURemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@AEAUTransitionScreen@7CloudDesktop@3456@$$QEAUTransitionScreenId@783456@$$QEAW4CloudPCState@3456@$$QEA_N@Z @ 0x18071F8CC (--$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEAURemote.c)
 *     ??$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEBURemoteDesktopProviderInfo@3456@AEAUTransitionScreen@8CloudDesktop@3456@AEAUTransitionScreenId@893456@W4CloudPCState@3456@_N@std@@YA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@0@AEBURemoteDesktopProviderInfo@Shell@Internal@Windows@winrt@@AEAUTransitionScreen@7CloudDesktop@3456@AEAUTransitionScreenId@783456@$$QEAW4CloudPCState@3456@$$QEA_N@Z @ 0x18071F978 (--$make_shared@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@AEBURemote.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteSessionInformation(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        int a5,
        char a6)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)a1);
  *(_QWORD *)(a1 + 8) = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 8));
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 120) = *a4;
  *(_BYTE *)(a1 + 124) = a6;
  result = a1;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  return result;
}
