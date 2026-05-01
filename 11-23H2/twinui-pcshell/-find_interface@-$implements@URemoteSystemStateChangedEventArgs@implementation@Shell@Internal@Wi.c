/*
 * XREFs of ?find_interface@?$implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18071BC60
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>);
  v4 = 0LL;
  if ( v2 )
    return (v3 + 16) & -(__int64)(v3 != 0);
  return v4;
}
