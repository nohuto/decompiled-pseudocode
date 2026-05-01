/*
 * XREFs of ??$?0AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@1@@Z @ 0x1800DA4E4
 * Callers:
 *     ?DisplayMonitorInfoChanged@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1800DB878 (-DisplayMonitorInfoChanged@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplay.c)
 *     ?DisplayMonitorInfoRemoved@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoRemovedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1801ABA94 (-DisplayMonitorInfoRemoved@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplay.c)
 *     ?DisplayMonitorInfoAdded@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoAddedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1801ABB0C (-DisplayMonitorInfoAdded@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMo.c)
 * Callees:
 *     ??$from_com_ref@AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@1@@Z @ 0x1800DA400 (--$from_com_ref@AEBUIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@-$weak_ref@UIDispl.c)
 */

__int64 *__fastcall winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  *a1 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::from_com_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection const &>(
    a1,
    a2);
  return a1;
}
