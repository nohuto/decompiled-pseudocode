/*
 * XREFs of ?DismissAnimated@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x18007B0BC
 * Callers:
 *     ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18007B710 (-DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall _DismissAnimated__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXPE_AAVAnimationCompletedEventHandler_2345__Z(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = __abi_winrt_cast_to(
         0LL,
         a1,
         &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 344LL))(v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    JUMPOUT(0x18007B135LL);
  }
  return result;
}
