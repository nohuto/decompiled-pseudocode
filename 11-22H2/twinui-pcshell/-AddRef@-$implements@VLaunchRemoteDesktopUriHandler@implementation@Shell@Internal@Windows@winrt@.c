/*
 * XREFs of ?AddRef@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEAAKXZ @ 0x1807010A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  bool v3; // zf
  signed __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 24);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 + 1, v1);
    v3 = v1 == v4;
    v1 = v4;
    if ( v3 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
}
