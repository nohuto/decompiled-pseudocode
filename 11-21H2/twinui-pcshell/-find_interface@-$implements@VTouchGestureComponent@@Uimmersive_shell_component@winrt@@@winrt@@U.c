/*
 * XREFs of ?find_interface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F9080
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = a1 - 32;
  v3 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  if ( *a2 == winrt::impl::guid_v<IObjectWithSite> )
    v3 = a2[1] - 0x52733D00AA0029A2LL;
  if ( v3 )
  {
    v4 = *a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
    if ( *a2 == *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1 )
      v4 = a2[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
    if ( v4 )
    {
      v5 = *a2 - winrt::impl::guid_v<IImmersiveShellComponent>;
      if ( *a2 == winrt::impl::guid_v<IImmersiveShellComponent> )
        v5 = a2[1] + 0x3BA05710A3855A7ELL;
      if ( v5 )
      {
        if ( !(unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>, v2, a2) )
          return 0LL;
        v6 = v2 + 24;
      }
      else
      {
        v6 = v2 + 16;
      }
    }
    else
    {
      v6 = v2 + 8;
    }
    return v6 & -(__int64)(v2 != 0);
  }
  return v2;
}
