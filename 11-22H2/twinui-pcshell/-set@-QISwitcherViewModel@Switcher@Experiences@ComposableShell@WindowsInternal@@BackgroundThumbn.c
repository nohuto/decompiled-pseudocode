/*
 * XREFs of ?set@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BackgroundThumbnail@SwitcherViewModelBase@2345@UE$AAAXPE$AAUIThumbnailFactory@Multitasking@4Internal@Windows@@@Z @ 0x18007D560
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _set__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__BackgroundThumbnail_SwitcherViewModelBase_2345_UE_AAAXPE_AAUIThumbnailFactory_Multitasking_4Internal_Windows___Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = __abi_winrt_cast_to(
         0,
         a1,
         (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    JUMPOUT(0x18007D5D6LL);
  }
  return result;
}
