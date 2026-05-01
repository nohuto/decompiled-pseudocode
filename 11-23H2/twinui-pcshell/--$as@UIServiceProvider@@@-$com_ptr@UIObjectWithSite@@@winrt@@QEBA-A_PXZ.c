/*
 * XREFs of ??$as@UIServiceProvider@@@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?A_PXZ @ 0x18022DCBC
 * Callers:
 *     ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x18022E03C (-TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::com_ptr<IObjectWithSite>::as<IServiceProvider>(
        __int64 (__fastcall ****a1)(_QWORD, const IID *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, const IID *, __int64 *); // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v6 = 0LL;
    v4 = (**v2)(v2, &winrt::impl::guid_v<IServiceProvider>, &v6);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
