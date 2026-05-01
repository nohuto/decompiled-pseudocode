/*
 * XREFs of ?find_interface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F9120
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax

  v2 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  v3 = a1;
  if ( *a2 == winrt::impl::guid_v<IObjectWithSite> )
    v2 = a2[1] - 0x52733D00AA0029A2LL;
  v4 = 0LL;
  if ( v2 )
  {
    v5 = *a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
    if ( *a2 == *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1 )
      v5 = a2[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
    if ( v5 )
    {
      if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IImmersiveShellComponent>, a2, a1) )
      {
        result = v3 - 16;
      }
      else
      {
        v8 = *v6 - winrt::impl::guid_v<IInspectable>;
        if ( *v6 == winrt::impl::guid_v<IInspectable> )
          v8 = v6[1] + 0x6FE1EF9A5528A564LL;
        if ( v8 )
        {
          v9 = *v6 - winrt::impl::guid_v<IPenMenuSystemTrayManager>;
          if ( *v6 == winrt::impl::guid_v<IPenMenuSystemTrayManager> )
            v9 = v6[1] - 0x144BD754BD4B7C80LL;
          return v7 & -(__int64)(v9 == 0);
        }
        result = v3 - 8;
      }
    }
    else
    {
      result = a1 - 24;
    }
  }
  else
  {
    result = a1 - 32;
  }
  if ( v3 == 40 )
    return v4;
  return result;
}
