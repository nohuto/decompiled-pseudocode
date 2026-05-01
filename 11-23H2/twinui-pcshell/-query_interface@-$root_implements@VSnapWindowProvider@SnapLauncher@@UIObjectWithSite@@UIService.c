/*
 * XREFs of ?query_interface@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18022E39C
 * Callers:
 *     ?QueryInterface@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022DEE0 (-QueryInterface@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapLauncher::SnapWindowProvider,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,winrt::non_agile>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v8; // r9

  v3 = a1;
  if ( !a1 )
    a1 = 24LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_4;
  if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
  {
    *a3 = (*(__int64 (__fastcall **)(__int64))(v8 + 24))(v3);
LABEL_4:
    _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 1u);
    return 0LL;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))v8)(v3, a2, a3);
}
