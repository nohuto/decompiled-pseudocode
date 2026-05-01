/*
 * XREFs of ?EvaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@UIEvaluateItemEventArgs@23456@@Foundation@Windows@3@@Z @ 0x180079694
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1800795A8 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1807624AC (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 * Callees:
 *     ?EvaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@UIEvaluateItemEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800796F0 (-EvaluateItem@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDa_ea_1800796F0.c)
 *     ??$from_com_ref@AEBUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@?$weak_ref@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@1@@Z @ 0x18007973C (--$from_com_ref@AEBUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@-$.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::EvaluateItem(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6 = *(_QWORD *)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::EvaluateItem(
                    a1,
                    &v8,
                    a4);
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::from_com_ref<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView const &>(
    a2,
    a1);
  a2[1] = v6;
  return a2;
}
