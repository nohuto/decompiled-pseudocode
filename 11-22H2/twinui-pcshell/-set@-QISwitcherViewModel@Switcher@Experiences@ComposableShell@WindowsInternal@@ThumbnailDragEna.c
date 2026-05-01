/*
 * XREFs of ?set@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@ThumbnailDragEnabled@SwitcherViewModelBase@2345@UE$AAAX_N@Z @ 0x18007D5E0
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall _set__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__ThumbnailDragEnabled_SwitcherViewModelBase_2345_UE_AAAX_N_Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        char a2)
{
  __int64 v3; // rdx
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+18h]

  v6 = __abi_winrt_cast_to(
         0,
         a1,
         (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  LOBYTE(v3) = a2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, v3);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    JUMPOUT(0x18007D654LL);
  }
  return result;
}
