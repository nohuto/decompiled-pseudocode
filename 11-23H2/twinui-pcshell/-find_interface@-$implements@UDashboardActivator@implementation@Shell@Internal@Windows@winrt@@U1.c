/*
 * XREFs of ?find_interface@?$implements@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@U13456@UIClassFactory@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180171200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardActivator>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardActivator> )
    v2 = a2[1] - 0x749209729CA368B7LL;
  if ( v2 )
  {
    v3 = *a2 - winrt::impl::guid_v<IClassFactory>;
    if ( *a2 == winrt::impl::guid_v<IClassFactory> )
      v3 = a2[1] - 0x46000000000000C0LL;
    return (a1 - 16) & -(__int64)(v3 == 0);
  }
  else
  {
    result = a1 - 8;
    if ( a1 == 16 )
      return 0LL;
  }
  return result;
}
