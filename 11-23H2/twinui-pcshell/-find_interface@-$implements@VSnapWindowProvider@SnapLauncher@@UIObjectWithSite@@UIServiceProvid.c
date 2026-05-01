/*
 * XREFs of ?find_interface@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18022E320
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  if ( !winrt::operator==(a2, &winrt::impl::guid_v<IObjectWithSite>) )
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IServiceProvider>) )
    {
      v6 = v5 + 8;
    }
    else
    {
      if ( !winrt::operator==(v4, winrt::impl::guid_v<IUpdateViewValueSet>) )
        return 0LL;
      v6 = v5 + 16;
    }
    return v6 & -(__int64)(v5 != 0);
  }
  return v3;
}
