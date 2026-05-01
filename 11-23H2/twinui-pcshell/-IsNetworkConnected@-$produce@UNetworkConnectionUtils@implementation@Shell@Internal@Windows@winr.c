/*
 * XREFs of ?IsNetworkConnected@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1807344A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsNetworkConnected@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807344F8 (-IsNetworkConnected@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtils>::IsNetworkConnected(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *a1,
        _BYTE *a2)
{
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  try
  {
    *a2 = winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::IsNetworkConnected(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
