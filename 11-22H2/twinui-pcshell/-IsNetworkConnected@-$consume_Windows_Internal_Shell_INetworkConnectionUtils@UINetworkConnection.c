/*
 * XREFs of ?IsNetworkConnected@?$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18072DEC0
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072E000 (-OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_INetworkConnectionUtils<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::IsNetworkConnected(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
