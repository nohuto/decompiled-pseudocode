/*
 * XREFs of ?ArrangedWindowResizeStarted@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UArrangedWindowResizeStartedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1801B357C
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800F7390 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??$?0AEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@1@@Z @ 0x1800DB208 (--$-0AEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@-$weak_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::ArrangedWindowResizeStarted(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 *result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[8])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>(
    a2,
    a1);
  result = a2;
  a2[1] = v7;
  return result;
}
