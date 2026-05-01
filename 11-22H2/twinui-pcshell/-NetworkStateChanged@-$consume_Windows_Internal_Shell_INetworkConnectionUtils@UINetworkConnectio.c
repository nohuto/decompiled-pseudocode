/*
 * XREFs of ?NetworkStateChanged@?$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x18072DF74
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUINetworkConnectionUtils@Shell@Internal@Windows@1@@Z @ 0x18072C998 (--$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@-$weak_ref@UINetworkC.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Internal_Shell_INetworkConnectionUtils<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::NetworkStateChanged(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[7])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::from_com_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
