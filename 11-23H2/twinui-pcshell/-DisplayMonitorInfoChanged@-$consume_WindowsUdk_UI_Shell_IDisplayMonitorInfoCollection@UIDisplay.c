/*
 * XREFs of ?DisplayMonitorInfoChanged@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1800DB878
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0920 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801E15D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$?0AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@1@@Z @ 0x1800DA4E4 (--$-0AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@-$weak_ref@UIDisplayMonitorI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::DisplayMonitorInfoChanged(
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
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[11])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  v7 = v9;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>(
    a2,
    a1);
  result = a2;
  a2[1] = v7;
  return result;
}
