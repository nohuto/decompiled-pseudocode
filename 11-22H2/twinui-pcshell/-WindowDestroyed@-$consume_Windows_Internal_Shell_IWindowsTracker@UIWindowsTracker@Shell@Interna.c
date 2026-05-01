/*
 * XREFs of ?WindowDestroyed@?$consume_Windows_Internal_Shell_IWindowsTracker@UIWindowsTracker@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowsTracker@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowsTracker@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$EventHandler@UWindowId@UI@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1801A1974
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1800DA6BC (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??$from_com_ref@AEBUIWindowsTracker@Shell@Internal@Windows@winrt@@@?$weak_ref@UIWindowsTracker@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUIWindowsTracker@Shell@Internal@Windows@1@@Z @ 0x1801A19F4 (--$from_com_ref@AEBUIWindowsTracker@Shell@Internal@Windows@winrt@@@-$weak_ref@UIWindowsTracker@S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_IWindowsTracker<winrt::Windows::Internal::Shell::IWindowsTracker>::WindowDestroyed(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 64LL))(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::Shell::IWindowsTracker>::from_com_ref<winrt::Windows::Internal::Shell::IWindowsTracker const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
