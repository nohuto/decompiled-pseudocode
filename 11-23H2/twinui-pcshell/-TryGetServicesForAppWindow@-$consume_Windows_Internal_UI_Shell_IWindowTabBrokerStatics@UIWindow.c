/*
 * XREFs of ?TryGetServicesForAppWindow@?$consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x1802E7E3E
 * Callers:
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18013A648 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::TryGetServicesForAppWindow(
        __int64 *a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
