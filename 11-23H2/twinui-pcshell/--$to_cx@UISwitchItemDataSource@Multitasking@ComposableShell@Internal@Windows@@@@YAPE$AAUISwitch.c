/*
 * XREFs of ??$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x18007B13C
 * Callers:
 *     ?CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1800797E4 (-CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@Compo.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18076314C (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x18078BE88 (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_cast_to(0LL, *a1, &_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
