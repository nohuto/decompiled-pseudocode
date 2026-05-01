/*
 * XREFs of ?WindowArrangementEvent@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowArrangementEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18017847C
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800F5570 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??0?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@1@@Z @ 0x1800F7C44 (--0-$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::WindowArrangementEvent(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[6])(*a1, *a4, &v9);
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
