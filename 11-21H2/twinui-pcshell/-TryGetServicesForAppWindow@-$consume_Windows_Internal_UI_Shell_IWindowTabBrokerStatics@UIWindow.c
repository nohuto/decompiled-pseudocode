/*
 * XREFs of ?TryGetServicesForAppWindow@?$consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIWindowTabManagerServices@Shell@UI@Internal@Windows@3@I@Z @ 0x180578C3C
 * Callers:
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800FE1D4 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabBrokerStatics<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>::TryGetServicesForAppWindow(
        __int64 *a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
